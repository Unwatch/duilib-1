#ifndef LabelUI_h__
#define LabelUI_h__
/*/////////////////////////////////////////////////////////////
//
// �ļ�����	:	LabelUI.h
// ������		: 	daviyang35@QQ.com
// ����ʱ��	:	2014-11-27 22:18:43
// ˵��			:	
/////////////////////////////////////////////////////////////*/
#pragma once

class DIRECTUI_API CLabelUI
	: public CControlUI
{
public:
	CLabelUI(void);
	virtual ~CLabelUI(void);
	UI_DECLARE_DYNCREATE();

	virtual LPCTSTR GetClass() const;
	virtual LPVOID GetInterface(LPCTSTR lpszClass);

	virtual bool EventHandler(TEventUI& event);
	virtual void Render(IUIRender* pRender, LPCRECT pRcPaint);
	virtual void SetAttribute(LPCTSTR lpszName, LPCTSTR lpszValue);

};

#endif // LabelUI_h__
