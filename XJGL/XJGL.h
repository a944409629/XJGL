
// XJGL.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CXJGLApp: 
// �йش����ʵ�֣������ XJGL.cpp
//

class CXJGLApp : public CWinApp
{
public:
	CXJGLApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CXJGLApp theApp;