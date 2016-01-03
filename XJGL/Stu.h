#pragma once
#include "afxcmn.h"


// CStu 对话框

class CStu : public CDialog
{
	DECLARE_DYNAMIC(CStu)

public:
	CStu(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CStu();

// 对话框数据
	enum { IDD = IDD_STUDENT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	CListCtrl m_list;
};
