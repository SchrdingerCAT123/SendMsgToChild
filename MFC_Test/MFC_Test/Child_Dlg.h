#pragma once


// Child_Dlg dialog

class Child_Dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Child_Dlg)

public:
	Child_Dlg(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Child_Dlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CHILD_DLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	afx_msg LRESULT OnMyMessage(WPARAM wParam, LPARAM lParam); // add msg process
	DECLARE_MESSAGE_MAP()
};
