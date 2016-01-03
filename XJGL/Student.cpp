// Student.h : CStudent ���ʵ��



// CStudent ʵ��

// ���������� 2015��11��26��, 16:22

#include "stdafx.h"
#include "Student.h"
IMPLEMENT_DYNAMIC(CStudent, CRecordset)

CStudent::CStudent(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_StuNum = L"";
	m_StuPwd = L"";
	m_StuName = L"";
	m_StuAge = 0;
	m_StuSex = "";
	m_StuMajor = L"";
	m_StuCollege = L"";
	m_nFields = 7;
	m_nDefaultType = dynaset;
}
//#error ��ȫ���⣺�����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CStudent::GetDefaultConnect()
{
	return _T("DSN=XJGL;Description=\x5b66\x7c4d\x7ba1\x7406;UID=sa;PWD=yzq123;APP=Microsoft\x00ae Visual Studio\x00ae 2013;WSID=USER-20151012UB;DATABASE=XJGL");
}

CString CStudent::GetDefaultSQL()
{
	return _T("[dbo].[Student]");
}

void CStudent::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Text(pFX, _T("[StuNum]"), m_StuNum);
	RFX_Text(pFX, _T("[StuPwd]"), m_StuPwd);
	RFX_Text(pFX, _T("[StuName]"), m_StuName);
	RFX_Long(pFX, _T("[StuAge]"), m_StuAge);
	RFX_Text(pFX, _T("[StuSex]"), m_StuSex);
	RFX_Text(pFX, _T("[StuMajor]"), m_StuMajor);
	RFX_Text(pFX, _T("[StuCollege]"), m_StuCollege);

}
/////////////////////////////////////////////////////////////////////////////
// CStudent ���

#ifdef _DEBUG
void CStudent::AssertValid() const
{
	CRecordset::AssertValid();
}

void CStudent::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG


