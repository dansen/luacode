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

#ifndef AUTO_COMPLETE_MANAGER_H
#define AUTO_COMPLETE_MANAGER_H

#include "Project.h"

#include <wx/wx.h>

#include <vector>
#include <set>
#include <functional>
//
// Forward declarations.
//

class Project;

/**
 * This class is responsible for maintaining the list of tokens that can complete
 * what the user is typing in.
 */
class AutoCompleteManager
{

public:

    enum Type
    {
        Type_Unknown,
        Type_Function,
        Type_Class,
		Type_KeyWord,
        Type_Variable,
    };

	AutoCompleteManager();

	void addEntry(const char * name, Type type, const char * scope = "");

    /**
     * Rebuiilds the list of autocompletions from the symbols in the specified project.
     */
    void RebuildFromProject(const Project* project);

    /**
     * Gets a list of the autocompletions matching the specified prefix. If member is true,
     * only autocompletions that are members of some scope are included. The return items
     * string is in the format used by Scintilla to display autocompletions.
     */
	void GetMatchingItems(const wxString& module, const wxString& prefix, bool member, wxString& items) const;
	/**
	* Adds the autocompletions for the specified file.
	*/
	void BuildFromFile(const Project::File* file);

    struct Entry
    {

        Entry();
        Entry(const wxString& name, Type type, const wxString& scope = "");

        bool operator<(const Entry& entry) const;

        wxString    name;
        wxString    lowerCaseName;
        Type        type;
		unsigned int hashVal;
        wxString    scope;
    };
private:
	static std::hash<std::string> hashFN;
	typedef std::set<Entry>::iterator ENTRY_ITR;
    std::set<Entry>  m_entries;

};

#endif