#pragma once


// Tab1Dlg dialog

class Tab1Dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Tab1Dlg)

public:
	Tab1Dlg(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Tab1Dlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_TEST_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
