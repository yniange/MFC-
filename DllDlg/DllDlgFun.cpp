#include "pch.h"
#include "DllDlgFun.h"
#include "CDlgInDll.h"

int ShowDllDlg()
{
    // 在这个dll查找对应的资源，如果没这条语句，
    // 就会在主程序中找对话框，找不到，不弹窗。
    AFX_MANAGE_STATE(AfxGetStaticModuleState());
    CDlgInDll dlg;
    dlg.DoModal();
	return dlg.m_iDllDlgInputEdt;
}
