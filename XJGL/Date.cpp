// Date.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "XJGL.h"
#include "Date.h"
#include "afxdialogex.h"


// CDate �Ի���

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


// CDate ��Ϣ�������


void CDate::OnTimer(UINT_PTR nIDEvent)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString strTime = CTime::GetCurrentTime().Format("%H-%M-%S");
	CEdit *showTime = (CEdit*)GetDlgItem(IDC_EDIT1);
	showTime->SetWindowText(strTime);
	CDialog::OnTimer(nIDEvent);
}
