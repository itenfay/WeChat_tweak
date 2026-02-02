//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMDynamicColor, MMKCardNumberEditViewOnTextChangedCallback, MMKCardNumberEditViewOnTextEndEditingCallback, NSString, WCPayTenpaySecureCtrlItem;

@interface KindaCardNumberEditView
{
    MMKCardNumberEditViewOnTextChangedCallback *m_callback;
    MMKCardNumberEditViewOnTextEndEditingCallback *m_endEditingCallback;
    _Bool _m_bFocus;
    WCPayTenpaySecureCtrlItem *_m_textFieldItem;
    MMDynamicColor *_m_hintColor;
    MMDynamicColor *_m_textColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMDynamicColor *m_textColor; // @synthesize m_textColor=_m_textColor;
@property(retain, nonatomic) MMDynamicColor *m_hintColor; // @synthesize m_hintColor=_m_hintColor;
@property(nonatomic) _Bool m_bFocus; // @synthesize m_bFocus=_m_bFocus;
@property(retain, nonatomic) WCPayTenpaySecureCtrlItem *m_textFieldItem; // @synthesize m_textFieldItem=_m_textFieldItem;
- (_Bool)getSupportDynamicSize;
- (void)setText:(id)arg1;
- (int)getInputTextLength;
- (id)getTextColor;
- (void)setTextColor:(id)arg1;
- (id)getHintColor;
- (void)setHintColor:(id)arg1;
- (void)setHint:(id)arg1;
- (id)getHint;
- (_Bool)isBankCardNumber;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)setOnTextEndEditingCallback:(id)arg1;
- (void)setOnTextChangedCallback:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (id)getValue;
- (id)getView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

