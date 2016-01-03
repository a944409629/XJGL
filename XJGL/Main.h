#pragma once


// CMain 对话框

class CMain : public CDialog
{
	DECLARE_DYNAMIC(CMain)

public:
	CMain(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CMain();

// 对话框数据
	//enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedClass();
	afx_msg void OnBnClicked10();
};
