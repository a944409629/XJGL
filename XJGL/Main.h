#pragma once


// CMain �Ի���

class CMain : public CDialog
{
	DECLARE_DYNAMIC(CMain)

public:
	CMain(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CMain();

// �Ի�������
	//enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedClass();
	afx_msg void OnBnClicked10();
};
