#include "FileTreeCtrl.h"
#include <wx/event.h>

BEGIN_EVENT_TABLE(FileTreeCtrl, wxTreeCtrl)

//EVT_PAINT(FileTreeCtrl::OnPaint)

END_EVENT_TABLE()

FileTreeCtrl::FileTreeCtrl()
{
}

FileTreeCtrl::FileTreeCtrl(wxWindow * parent, wxWindowID id, const wxPoint & pos, const wxSize & size, 
	long style, const wxValidator & validator, const wxString & name):wxTreeCtrl(parent, id, pos, size, style, validator,
		name)
{
	SetDoubleBuffered(true);
}

void FileTreeCtrl::OnPaint(wxPaintEvent & evt)
{
	
}


