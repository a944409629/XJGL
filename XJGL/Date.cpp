// Date.cpp : 实现文件
//

#include "stdafx.h"
#include "XJGL.h"
#include "Date.h"
#include "afxdialogex.h"


// CDate 对话框

IMPLEMENT_DYNAMIC(CDate, CDialog)

CDate::CDate(CWnd* pParent /*=NULL*/)
	: CDialog(CDate::IDD, pParent)
{

}

CDate::~CDate()
{
}

void CDate::DoDataExchange(CDataExchange* pDX)
{
	SetTimer(1, 1000, NULL);
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDate, CDialog)
	ON_WM_TIMER()
END_MESSAGE_MAP()


// CDate 消息处理程序


void CDate::OnTimer(UINT_PTR nIDEvent)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	CString strTime = CTime::GetCurrentTime().Format("%H-%M-%S");
	CEdit *showTime = (CEdit*)GetDlgItem(IDC_EDIT1);
	showTime->SetWindowText(strTime);
	CDialog::OnTimer(nIDEvent);
}
