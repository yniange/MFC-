
// MainProgramDlg.h: 头文件
//

#pragma once

#include "..\\DllDlg\\DllDlgFun.h"

#if _DEBUG
#pragma comment(lib,"..\\x64\\Debug\\DllDlg.lib")
#else
#pragma comment(lib,"..\\x64\\Release\\DllDlg.lib")
#endif

//_declspec(dllimport) int ShowDllDlg();

// CMainProgramDlg 对话框
class CMainProgramDlg : public CDialogEx
{
// 构造
public:
	CMainProgramDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MAINPROGRAM_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedShowdlldlgBtn();
	// 主程序对话框输出文本框
	int m_iMainProgramOutputEdt;
};
