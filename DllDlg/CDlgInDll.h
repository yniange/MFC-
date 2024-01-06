#pragma once
#include "afxdialogex.h"
#include "framework.h"

// CDlgInDll 对话框

class CDlgInDll : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgInDll)

public:
	CDlgInDll(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDlgInDll();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLL_DLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	// 文本编辑框变量
	unsigned int m_iDllDlgInputEdt;
	afx_msg void OnBnClickedOk();
	// 动态链接库对话框中的Slider控件
	CSliderCtrl m_CtrlDllDlgSlider;
	virtual BOOL OnInitDialog();
	afx_msg void OnNMCustomdrawDlldlgSlider(NMHDR* pNMHDR, LRESULT* pResult);
};
