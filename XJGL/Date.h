#pragma once


// CDate 对话框

class CDate : public CDialog
{
	DECLARE_DYNAMIC(CDate)

public:
	CDate(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDate();

// 对话框数据
	enum { IDD = IDD_DATE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
