// CDlgInDll.cpp: 实现文件
//

#include "pch.h"
#include "DllDlg.h"
#include "afxdialogex.h"
#include "CDlgInDll.h"


// CDlgInDll 对话框

IMPLEMENT_DYNAMIC(CDlgInDll, CDialogEx)

CDlgInDll::CDlgInDll(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DLL_DLG, pParent)
	, m_iDllDlgInputEdt(0)
{

}

CDlgInDll::~CDlgInDll()
{
}

void CDlgInDll::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_DLLDLG_INPUT_EDT, m_iDllDlgInputEdt);
	DDV_MinMaxUInt(pDX, m_iDllDlgInputEdt, 0, 100);
	DDX_Control(pDX, IDC_DLLDLG_SLIDER, m_CtrlDllDlgSlider);
}


BEGIN_MESSAGE_MAP(CDlgInDll, CDialogEx)
	ON_BN_CLICKED(IDOK, &CDlgInDll::OnBnClickedOk)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_DLLDLG_SLIDER, &CDlgInDll::OnNMCustomdrawDlldlgSlider)
END_MESSAGE_MAP()


// CDlgInDll 消息处理程序


void CDlgInDll::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}


BOOL CDlgInDll::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	m_CtrlDllDlgSlider.SetRange(0, 100);
	//m_CtrlDllDlgSlider.SetPos(0);
	m_CtrlDllDlgSlider.SetLineSize(5);
	m_CtrlDllDlgSlider.SetPageSize(20);

	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常: OCX 属性页应返回 FALSE
}


void CDlgInDll::OnNMCustomdrawDlldlgSlider(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: 在此添加控件通知处理程序代码
	int i_pos = m_CtrlDllDlgSlider.GetPos();
	CString strPos;
	strPos.Format(_T("%d"), i_pos);
	SetDlgItemText(IDC_DLLDLG_INPUT_EDT, strPos);

	*pResult = 0;
}
