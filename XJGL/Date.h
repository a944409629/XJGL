#pragma once


// CDate �Ի���

class CDate : public CDialog
{
	DECLARE_DYNAMIC(CDate)

public:
	CDate(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDate();

// �Ի�������
	enum { IDD = IDD_DATE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
