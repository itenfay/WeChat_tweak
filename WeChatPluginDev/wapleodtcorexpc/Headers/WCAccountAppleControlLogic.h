//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppleIDBindLogic, NSString, WCAccountManualAuthControlLogic;

@interface WCAccountAppleControlLogic
{
    WCAccountManualAuthControlLogic *_manualAuthLogic;
    AppleIDBindLogic *_appleIDBindLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AppleIDBindLogic *appleIDBindLogic; // @synthesize appleIDBindLogic=_appleIDBindLogic;
@property(retain, nonatomic) WCAccountManualAuthControlLogic *manualAuthLogic; // @synthesize manualAuthLogic=_manualAuthLogic;
- (void)reportAction:(unsigned long long)arg1;
- (_Bool)onManualAuthControlLogicError:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (void)startRegisterWithTicket:(id)arg1;
- (void)startManualAuthWithWrap:(id)arg1;
- (void)onAuthorizeAppleIDFailedWithError:(id)arg1;
- (void)onAuthorizeAppleIDSuceededWithWrap:(id)arg1;
- (void)onRequestAuthorizeFromAppleFinished:(_Bool)arg1;
- (id)getViewController;
- (void)startLogic;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

