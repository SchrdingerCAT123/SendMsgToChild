// Tab1Dlg.cpp : implementation file
//

#include "pch.h"
#include "MFC_Test.h"
#include "Tab1Dlg.h"
#include "afxdialogex.h"


// Tab1Dlg dialog

IMPLEMENT_DYNAMIC(Tab1Dlg, CDialogEx)

Tab1Dlg::Tab1Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFC_TEST_DIALOG, pParent)
{

}

Tab1Dlg::~Tab1Dlg()
{
}

void Tab1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Tab1Dlg, CDialogEx)
END_MESSAGE_MAP()


// Tab1Dlg message handlers
