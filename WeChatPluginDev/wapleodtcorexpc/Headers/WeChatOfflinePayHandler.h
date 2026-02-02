//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, OpenApiParameter, WCShareAuthViewController;

@interface WeChatOfflinePayHandler : NSObject
{
    OpenApiParameter *_parameter;
    WCShareAuthViewController *_authVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCShareAuthViewController *authVC; // @synthesize authVC=_authVC;
@property(retain, nonatomic) OpenApiParameter *parameter; // @synthesize parameter=_parameter;
- (void)onSDKOpenOfflinePayLogicDidStop;
- (id)makeBizCustomLinkIfNeed;
- (void)shareAuthViewControllerDidFail:(id)arg1;
- (void)shareAuthViewControllerDidSuccess:(id)arg1 redirectUrl:(id)arg2 extraInfo:(id)arg3;
- (void)shareAuthViewControllerDidCancel:(id)arg1;
- (void)startAuth;
- (void)startOfflinePay;
- (void)onPreEnterWechatDone;
- (void)cancelWeChatOfflinePay;
- (void)startWeChatOfflinePay:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

