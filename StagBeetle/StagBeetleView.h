
// StagBeetleView.h : interface of the CStagBeetleView class
//

#pragma once


class CStagBeetleView : public CFormView
{
protected: // create from serialization only
	CStagBeetleView() noexcept;
	DECLARE_DYNCREATE(CStagBeetleView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_STAGBEETLE_FORM };
#endif

// Attributes
public:
	CStagBeetleDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CStagBeetleView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in StagBeetleView.cpp
inline CStagBeetleDoc* CStagBeetleView::GetDocument() const
   { return reinterpret_cast<CStagBeetleDoc*>(m_pDocument); }
#endif

