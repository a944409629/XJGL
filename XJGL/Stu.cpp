// Stu.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "XJGL.h"
#include "Stu.h"
#include "afxdialogex.h"
#include "Student.h"

// CStu �Ի���

IMPLEMENT_DYNAMIC(CStu, CDialog)

CStu::CStu(CWnd* pParent /*=NULL*/)
	: CDialog(CStu::IDD, pParent)
{

}

CStu::~CStu()
{
}

void CStu::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_list);
}


BEGIN_MESSAGE_MAP(CStu, CDialog)
END_MESSAGE_MAP()


// CStu ��Ϣ�������


BOOL CStu::OnInitDialog()
{
	CDialog::OnInitDialog();
	UpdateData(true);
	// ��������...���˵�����ӵ�ϵͳ�˵��С�
	CRect rect;
	m_list.GetClientRect(&rect);
	m_list.SetExtendedStyle(m_list.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
	m_list.InsertColumn(0, _T("ѧ��"), LVCFMT_CENTER, rect.Width() / 4, 0);
	//m_list.InsertColumn(1, _T("����"), LVCFMT_CENTER, rect.Width() / 4, 1);
	m_list.InsertColumn(1, _T("����"), LVCFMT_CENTER, rect.Width() / 4, 1);
	m_list.InsertColumn(2, _T("����"), LVCFMT_CENTER, rect.Width() / 4, 2);
	m_list.InsertColumn(3, _T("�Ա�"), LVCFMT_CENTER, rect.Width() / 4, 3);
	m_list.InsertColumn(4, _T("רҵ"), LVCFMT_CENTER, rect.Width() / 4, 4);
	m_list.InsertColumn(5, _T("ѧԺ"), LVCFMT_CENTER, rect.Width() / 4, 5);
	int i;
	CString temp, string, string1;
	CStudent stu;
	if (stu.IsOpen())
	{
		stu.Close();
	}
	else
	{
		stu.Open();
	}
	stu.MoveFirst();
	for (i = 0; i < 30; i++)
	{
		m_list.InsertItem(i, (stu.m_StuNum));
		//m_list.SetItemText(i, 1, (stu.m_StuPwd));
		m_list.SetItemText(i, 1, (stu.m_StuName));
		string1.Format(L"%d", stu.m_StuAge);
		m_list.SetItemText(i, 2, (string1));
		string.Format(L"%s", stu.m_StuSex);
		m_list.SetItemText(i, 3, (string));
		m_list.SetItemText(i, 4, (stu.m_StuMajor));
		m_list.SetItemText(i, 5, (stu.m_StuCollege));
		stu.MoveNext();
	}
	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣:  OCX ����ҳӦ���� FALSE
}
