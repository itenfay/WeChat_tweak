//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMKEditTextOnTextChangedCallback, NSString, TPIDKeyboardView, WCPayPhoneTextItem;

@interface KindaPhoneEditText
{
    TPIDKeyboardView *keyboardView;
    MMKEditTextOnTextChangedCallback *m_callback;
    WCPayPhoneTextItem *_m_textFieldPhoneItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayPhoneTextItem *m_textFieldPhoneItem; // @synthesize m_textFieldPhoneItem=_m_textFieldPhoneItem;
- (void)showTip:(id)arg1 tips:(id)arg2;
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

