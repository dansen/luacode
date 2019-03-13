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

#include "FileUtility.h"

#include <shlobj.h>
#include <fstream>

static int _fileSize(const char * path)
{
	FILE * file = fopen(path, "rb");
	if (!file){
		return 0;
	}

	fseek(file, 0, SEEK_END);
	int size = ftell(file);
	fclose(file);

	return size;
}

std::string str2ansi(const char * str)
{
	int utf8Size = MultiByteToWideChar(CP_UTF8, 0, str, -1, NULL, 0);
	WCHAR * wszBuf = new WCHAR[utf8Size];
	memset(wszBuf, 0, sizeof(WCHAR)*utf8Size);
	MultiByteToWideChar(CP_UTF8, 0, str, -1, wszBuf, utf8Size);

	int ansiSize = WideCharToMultiByte(CP_ACP, 0, wszBuf, -1, NULL, 0, NULL, NULL);
	char * buf = new char[ansiSize];
	WideCharToMultiByte(CP_ACP, 0, wszBuf, -1, buf, ansiSize, NULL, NULL);
	std::string tmp = buf;
	delete[] buf;
	delete[] wszBuf;
	return tmp;
}

bool saveFile(const char * path, std::string & str)
{
	FILE * fp = fopen(path, "wb");

	if (str.empty() == false){
		int utf8Size = MultiByteToWideChar(CP_ACP, 0, str.c_str(), -1, NULL, 0);
		WCHAR * wszBuf = new WCHAR[utf8Size];
		memset(wszBuf, 0, sizeof(WCHAR)*utf8Size);
		MultiByteToWideChar(CP_ACP, 0, str.c_str(), -1, wszBuf, utf8Size);

		int ansiSize = WideCharToMultiByte(CP_UTF8, 0, wszBuf, -1, NULL, 0, NULL, NULL);
		char * buf = new char[ansiSize];
		WideCharToMultiByte(CP_UTF8, 0, wszBuf, -1, buf, ansiSize, NULL, NULL);
		
		fwrite(buf, ansiSize-1, 1, fp);

		delete[] buf;
		delete[] wszBuf;
	}

	fclose(fp);

	return true;
}

std::string fileStringANSI(const char * path)
{
	int size = _fileSize(path);
	FILE * fp = fopen(path, "rb");
	char * buf = new char[size+1];
	fread(buf, 1, size, fp);
	buf[size] = 0;
	fclose(fp);

	std::string tmp = str2ansi(buf);
	delete[] buf;

	return tmp;
}

void ShowFileInFolder (wxFileName& inPath) {
  if (!inPath.IsOk())
    return;

  typedef HRESULT (WINAPI* SHOpenFolderAndSelectItemsPtr)(
    LPCITEMIDLIST pidlFolder, 
    UINT cidl, 
    LPCITEMIDLIST* apidl, 
    DWORD dwFlags);

  wxString& fullPath = inPath.GetFullPath();  
  wxString& path = inPath.GetPath();

  static SHOpenFolderAndSelectItemsPtr openFolderFunction = NULL;
  static bool intializedFunction = true;

  if (intializedFunction) {
    intializedFunction = false;
    HMODULE shell32 = GetModuleHandle(wxT("shell32.dll"));
    if (shell32 == NULL)
      return;

    openFolderFunction = reinterpret_cast<SHOpenFolderAndSelectItemsPtr>(GetProcAddress(shell32, "SHOpenFolderAndSelectItems"));
    if (!openFolderFunction) {
      ShellExecute(NULL, _T("open"), fullPath.c_str(), NULL, NULL, SW_SHOW);
      return;
    }
  }

  IShellFolder* desktopFolder;
  HRESULT result = SHGetDesktopFolder(&desktopFolder);
  if(FAILED(result))
    return;

  LPITEMIDLIST folderPath;
  LPITEMIDLIST filePath;

  result = desktopFolder->ParseDisplayName(NULL, NULL, (LPOLESTR)(const wchar_t *)path.wc_str(wxConvUTF8), NULL, &folderPath, NULL);
  if (SUCCEEDED(result)) {  
    result = desktopFolder->ParseDisplayName(NULL, NULL, (LPOLESTR)(const wchar_t *)fullPath.wc_str(wxConvUTF8), NULL, &filePath, NULL);
    if (SUCCEEDED(result)) {

      const ITEMIDLIST* highlight[] = {
        {filePath},
      };

      (*openFolderFunction)(folderPath, ARRAYSIZE(highlight), highlight, NULL);      
    }
  }

  if (folderPath) {
	  CoTaskMemFree(folderPath);
	  CoTaskMemFree(filePath);
  }
    
  desktopFolder->Release();
}

const char * get_options_path()
{
	CHAR documents[MAX_PATH];
	HRESULT result = SHGetFolderPath(NULL, CSIDL_APPDATA | CSIDL_FLAG_CREATE, NULL, 0, documents);

	if (result != S_OK) {
		return 0;
	} 

	static char config_path[1024];
	sprintf(config_path, "%s/luacode/options.xml", documents);
	return config_path;
}

static int realpath(const char * rel_path, char * full)
{
	if (_fullpath(full, rel_path, MAX_PATH) != NULL)
		return 0;
	return 1;
}

std::string get_full_path(const char * path)
{
	char real[MAX_PATH];
	realpath(path, real);
	return real;
}

bool is_file_exist(const char * path)
{
	std::ifstream f(path);
	bool v = f.good();
	f.close();
	return v;
}


