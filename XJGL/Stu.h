#pragma once
#include "afxcmn.h"


// CStu �Ի���

class CStu : public CDialog
{
	DECLARE_DYNAMIC(CStu)

public:
	CStu(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CStu();

// �Ի�������
	enum { IDD = IDD_STUDENT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	CListCtrl m_list;
};
