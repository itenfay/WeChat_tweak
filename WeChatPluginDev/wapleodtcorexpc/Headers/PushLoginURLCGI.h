//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CheckQRCodeLoginCGI, NSString, WCAccountManualAuthControlLogic;
@protocol PushLoginURLCGIDelegate;

@interface PushLoginURLCGI
{
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
    int _loginType;
    id <PushLoginURLCGIDelegate> _delegate;
    NSString *_userName;
    NSString *_password;
    CheckQRCodeLoginCGI *_checkQRCodeCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CheckQRCodeLoginCGI *checkQRCodeCgi; // @synthesize checkQRCodeCgi=_checkQRCodeCgi;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) int loginType; // @synthesize loginType=_loginType;
@property(nonatomic) __weak id <PushLoginURLCGIDelegate> delegate; // @synthesize delegate=_delegate;
- (id)OnCheckQRCodeLogicGetCurrentViewController;
- (void)OnCheckQRCodeLoginScaned:(id)arg1 nickName:(id)arg2 authUrl:(id)arg3;
- (void)OnCheckQRCodeLoginConfirmedWithUserName:(id)arg1 pwd:(id)arg2 nickName:(id)arg3 headImageURL:(id)arg4;
- (void)OnCheckQRCodeLoginCancel;
- (void)OnCheckQRCodeLoginExpried;
- (void)OnCheckQRCodeLoginFail;
- (void)OnCheckQRCodeLoginUUIDExpired;
- (_Bool)onManualAuthControlLogicError:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (void)doAuthWithType:(int)arg1;
- (void)stopRequest;
- (void)onPushLoginURLReturnWithResponse:(id)arg1;
- (void)startRequest;
- (void)onTimeCheckExpired;
- (void)stopExpiredTimeCheck;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

