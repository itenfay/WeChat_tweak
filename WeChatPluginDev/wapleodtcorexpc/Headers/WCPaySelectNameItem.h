//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TenpaySecureCtrl, UILabel, WCPayTransferToBankCardCandidateView;

@interface WCPaySelectNameItem
{
    UILabel *m_nameLabel;
    _Bool m_isUnselectable;
    NSString *m_value;
    TenpaySecureCtrl *m_secureTextField;
    WCPayTransferToBankCardCandidateView *m_candidateView;
    unsigned int m_nameLenLimit;
}

- (void).cxx_destruct;
- (void)resignFirstResponder;
- (_Bool)onError:(id)arg1;
- (void)OnGetTenpaySecureCtrlSalt:(id)arg1 Date:(id)arg2 Error:(id)arg3;
- (id)getEncryptedValue;
- (id)getTextValue;
- (void)setReceiverName:(id)arg1;
- (void)setLengthLimit:(unsigned int)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)updateView;
- (void)initView:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)setCandidateView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

