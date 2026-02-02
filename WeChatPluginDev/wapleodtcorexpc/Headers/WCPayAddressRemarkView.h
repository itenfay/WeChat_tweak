//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView, UIButton, UIColor, WCPayAddressInfo;
@protocol WCPayAddressRemarkViewDelegate;

@interface WCPayAddressRemarkView : UIView
{
    double _addressMaxLine;
    id <WCPayAddressRemarkViewDelegate> _m_delegate;
    WCPayAddressInfo *_address;
    double _fontSize;
    UIColor *_fontColor;
    UIView *_m_highlightView;
    RichTextView *_m_textView;
    UIButton *_m_button;
}

- (void).cxx_destruct;
@property(retain) UIButton *m_button; // @synthesize m_button=_m_button;
@property(retain) RichTextView *m_textView; // @synthesize m_textView=_m_textView;
@property(retain) UIView *m_highlightView; // @synthesize m_highlightView=_m_highlightView;
@property(retain) UIColor *fontColor; // @synthesize fontColor=_fontColor;
@property double fontSize; // @synthesize fontSize=_fontSize;
@property(retain) WCPayAddressInfo *address; // @synthesize address=_address;
@property __weak id <WCPayAddressRemarkViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property double addressMaxLine; // @synthesize addressMaxLine=_addressMaxLine;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)onCopy:(id)arg1;
- (void)handleMenuControllerWillHideMenuNotification:(id)arg1;
- (void)handleLongPressGestureRecognizer:(id)arg1;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (void)onClickButton;
- (void)updateButton;
- (void)updateTextView;
- (void)updateHighlightView;
- (void)updateView;
- (void)layoutSubviews;
- (void)updateAddress:(id)arg1;
- (id)initWithAddress:(id)arg1 fontSize:(double)arg2 fontColor:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

