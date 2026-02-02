//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCAccountGraphicVerifyControlLogicDelegate;

@interface WCAccountGraphicVerifyControlLogic
{
    _Bool m_bFromManualAuth;
    id <WCAccountGraphicVerifyControlLogicDelegate> m_delegate;
}

+ (_Bool)isGraphicVerifyError:(id)arg1;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGraphicVerifyChangeImage;
- (void)onGraphicVerifyBack;
- (void)onGraphicVerifyWithVerifyCode:(id)arg1;
- (_Bool)startAuth:(id)arg1;
- (void)startLogicFromManualAuth:(_Bool)arg1;
- (void)stopLogic;
- (void)parseImg;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

