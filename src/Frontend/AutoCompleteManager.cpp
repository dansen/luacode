/*

Decoda
Copyright (C) 2007-2013 Unknown Worlds Entertainment, Inc. 

This file is part of Decoda.

Decoda is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Decoda is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Decoda.  If not, see <http://www.gnu.org/licenses/>.

*/

#include "AutoCompleteManager.h"
#include "Symbol.h"

#include <algorithm>

std::hash<std::string> AutoCompleteManager::hashFN;

AutoCompleteManager::Entry::Entry()
{
}

AutoCompleteManager::Entry::Entry(const wxString& _name, Type _type, const wxString& _scope)
    : name(_name), type(_type), scope(_scope)
{
    lowerCaseName = name.Lower();
	hashVal = hashFN((scope+name).c_str());
}

bool AutoCompleteManager::Entry::operator<(const Entry& entry) const
{
	return hashVal < entry.hashVal;
}

void AutoCompleteManager::RebuildFromProject(const Project* project)
{
    m_entries.clear();

    for (unsigned int fileIndex = 0; fileIndex < project->GetNumFiles(); ++fileIndex)
    {
        BuildFromFile(project->GetFile(fileIndex));
    }
}

void AutoCompleteManager::BuildFromFile(const Project::File* file)
{
    for (unsigned int symbolIndex = 0; symbolIndex < file->symbols.size(); ++symbolIndex)
    {
        const Symbol* symbol = file->symbols[symbolIndex];
		m_entries.insert(Entry(symbol->name, Type_Function, symbol->module));
    }

}

static int calSequenceScore(const char * p, const char * c)
{
	int i = 0;
	int j = 0;
	int score = 1;
	while(c[i]){
		if(!p[j]){
			return false;
		}
		if(p[j] == c[i]){
			++i;
			++j;
		}else{
			score += 100;
			++j;
		}
	}
	while(p[j++]){
		score++;
	}
	return score;
}

struct StringScore{
	const AutoCompleteManager::Entry * entry;
	int score;
public:
	StringScore(){}
	StringScore(const AutoCompleteManager::Entry * entry_, int score_){
		entry = entry_;
		score = score_;
	}
	bool operator < (const StringScore & sc) const{
		return this->score < sc.score;
	}
};

void AutoCompleteManager::GetMatchingItems(const wxString& module, const wxString& prefix, bool member, wxString& items) const
{
    
    // Autocompletion selection is case insensitive so transform everything
    // to lowercase.
    wxString test = prefix.Lower();
	
    // Add the items to the list that begin with the specified prefix. This
    // could be done much fater with a binary search since our items are in
    // alphabetical order.
	std::multiset<StringScore> scores;

	for (ENTRY_ITR itr = m_entries.begin(); itr != m_entries.end(); ++itr)
    {
        // Check that the scope is correct.
        
        bool inScope = false;
        if (/**/true)
        {
            // We've got no way of knowing the type of the variable in Lua (since
            // variables don't have types, only values have types), so we display
            // all members if the prefix contains a member selection operator (. or :)
			inScope = (itr->scope.IsEmpty() != member);
        }

		//if (inScope &&  itr->lowerCaseName.StartsWith(test) && itr->scope == module)
		int score = calSequenceScore(itr->lowerCaseName, test);
		if (inScope && score != 0 && itr->scope == module)
		{
			const Entry  & entry = *itr;
			scores.insert(StringScore(&entry, score));
        }
    }

	for (std::set<StringScore>::iterator itr = scores.begin(); itr != scores.end(); ++itr){

		items += itr->entry->name;
		// Add the appropriate icon for the type of the identifier.
		if (itr->entry->type != Type_Unknown)
		{
			items += "?";
			items += '0' + itr->entry->type;
		}

		items += ' ';
	}
}

void AutoCompleteManager::addEntry(const char *name, Type type, const char *scope /*= ""*/)
{
	m_entries.insert(Entry(name, type, scope));
}

AutoCompleteManager::AutoCompleteManager()
{
	addEntry("function", Type_Function, "");
	addEntry("module", Type_Function, "");
}
