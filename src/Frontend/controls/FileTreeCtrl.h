#ifndef FILE_TREE_CTRL_H
#define FILE_TREE_CTRL_H

#include "wx/wx.h"
#include <wx/treectrl.h>

class FileTreeCtrl : public wxTreeCtrl
{
public:
	FileTreeCtrl();

	FileTreeCtrl(wxWindow *parent, wxWindowID id = wxID_ANY,
		const wxPoint& pos = wxDefaultPosition,
		const wxSize& size = wxDefaultSize,
		long style = wxTR_HAS_BUTTONS | wxTR_LINES_AT_ROOT,
		const wxValidator& validator = wxDefaultValidator,
		const wxString& name = wxTreeCtrlNameStr);

	void OnPaint(wxPaintEvent& event);

	DECLARE_EVENT_TABLE()

private:

};

#endif