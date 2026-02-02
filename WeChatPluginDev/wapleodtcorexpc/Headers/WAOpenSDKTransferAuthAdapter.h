//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WATransferParamsModel, WAUserAuthorizeLogic, WxaExternalInfo;
@protocol WAOpenSDKTransferAuthAdapterDelegate;

@interface WAOpenSDKTransferAuthAdapter : NSObject
{
    id <WAOpenSDKTransferAuthAdapterDelegate> _delegate;
    id _userInfo;
    WAUserAuthorizeLogic *_logic;
    WATransferParamsModel *_model;
    WxaExternalInfo *_externalInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WxaExternalInfo *externalInfo; // @synthesize externalInfo=_externalInfo;
@property(retain, nonatomic) WATransferParamsModel *model; // @synthesize model=_model;
@property(retain, nonatomic) WAUserAuthorizeLogic *logic; // @synthesize logic=_logic;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <WAOpenSDKTransferAuthAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getCurrentViewController;
- (void)onRequestAuthorizeFail:(id)arg1;
- (void)onRequestAuthorizeOK;
- (void)onAuthorizeNeedConfirm:(id)arg1 cgiResponse:(id)arg2;
- (void)onAuthorizeConfirmEnd:(_Bool)arg1;
- (void)onAuthorizeConfirmDeny:(id)arg1 resultInfo:(id)arg2;
- (void)onAuthorizeConfirmAccept:(id)arg1 resultInfo:(id)arg2;
- (id)initWithModel:(id)arg1;
- (void)doConfirmRequest:(_Bool)arg1 scope:(id)arg2;
- (void)doAuth;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

