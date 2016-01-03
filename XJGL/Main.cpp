// Main.cpp : 实现文件
//

#include "stdafx.h"
#include "XJGL.h"
#include "Main.h"
#include "afxdialogex.h"
#include "Date.h"
#include "Stu.h"


// CMain 对话框

IMPLEMENT_DYNAMIC(CMain, CDialog)

CMain::CMain(CWnd* pParent /*=NULL*/)
	: CDialog(CMain::IDD, pParent)
{

}

CMain::~CMain()
{
}

void CMain::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMain, CDialog)
	ON_BN_CLICKED(IDC_CLASS, &CMain::OnBnClickedClass)
	ON_BN_CLICKED(IDC_10, &CMain::OnBnClicked10)
END_MESSAGE_MAP()


// CMain 消息处理程序


void CMain::OnBnClickedClass()
{
	// TODO:  在此添加控件通知处理程序代码
	CStu dlg1;
	dlg1.DoModal();
}


void CMain::OnBnClicked10()
{
	// TODO:  在此添加控件通知处理程序代码
	CDate dlg2;
	dlg2.DoModal();
}
