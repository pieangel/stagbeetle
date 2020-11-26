
// StagBeetleView.cpp : implementation of the CStagBeetleView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "StagBeetle.h"
#endif

#include "StagBeetleDoc.h"
#include "StagBeetleView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CStagBeetleView

IMPLEMENT_DYNCREATE(CStagBeetleView, CFormView)

BEGIN_MESSAGE_MAP(CStagBeetleView, CFormView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CStagBeetleView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CStagBeetleView construction/destruction

CStagBeetleView::CStagBeetleView() noexcept
	: CFormView(IDD_STAGBEETLE_FORM)
{
	// TODO: add construction code here

}

CStagBeetleView::~CStagBeetleView()
{
}

void CStagBeetleView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BOOL CStagBeetleView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CStagBeetleView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	ResizeParentToFit();

}


// CStagBeetleView printing


void CStagBeetleView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CStagBeetleView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CStagBeetleView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CStagBeetleView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CStagBeetleView::OnPrint(CDC* pDC, CPrintInfo* /*pInfo*/)
{
	// TODO: add customized printing code here
}

void CStagBeetleView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CStagBeetleView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CStagBeetleView diagnostics

#ifdef _DEBUG
void CStagBeetleView::AssertValid() const
{
	CFormView::AssertValid();
}

void CStagBeetleView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CStagBeetleDoc* CStagBeetleView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CStagBeetleDoc)));
	return (CStagBeetleDoc*)m_pDocument;
}
#endif //_DEBUG


// CStagBeetleView message handlers
