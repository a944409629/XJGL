// Main.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "XJGL.h"
#include "Main.h"
#include "afxdialogex.h"
#include "Date.h"
#include "Stu.h"


// CMain �Ի���

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


// CMain ��Ϣ�������


void CMain::OnBnClickedClass()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CStu dlg1;
	dlg1.DoModal();
}


void CMain::OnBnClicked10()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CDate dlg2;
	dlg2.DoModal();
}
