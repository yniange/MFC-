#include "pch.h"
#include "DllDlgFun.h"
#include "CDlgInDll.h"

int ShowDllDlg()
{
    // �����dll���Ҷ�Ӧ����Դ�����û������䣬
    // �ͻ������������ҶԻ����Ҳ�������������
    AFX_MANAGE_STATE(AfxGetStaticModuleState());
    CDlgInDll dlg;
    dlg.DoModal();
	return dlg.m_iDllDlgInputEdt;
}
