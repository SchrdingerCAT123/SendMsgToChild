// Child_Dlg.cpp : implementation file
//

#include "pch.h"
#include "MFC_Test.h"
#include "Child_Dlg.h"
#include "afxdialogex.h"


// Child_Dlg dialog

IMPLEMENT_DYNAMIC(Child_Dlg, CDialogEx)

Child_Dlg::Child_Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CHILD_DLG, pParent)
{

}

Child_Dlg::~Child_Dlg()
{
}

void Child_Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Child_Dlg, CDialogEx)
	ON_MESSAGE(WM_USERMESSAGE, OnMyMessage)
END_MESSAGE_MAP()


// Child_Dlg message handlers
LRESULT Child_Dlg::OnMyMessage(WPARAM wParam, LPARAM lParam)
{
	MessageBox(L"recv msg success");
	return 0;
}