//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, WAOpenSDKJSEventHandleLogic;

@interface WCBusinessJumpMgr
{
    NSMutableDictionary *_dictCallBackInfo;
    WAOpenSDKJSEventHandleLogic *_openSDKJSEventHandler;
    WAOpenSDKJSEventHandleLogic *_qrCodeJSEventHandler;
    WAOpenSDKJSEventHandleLogic *_newOpenSDKJSEventHandler;
}

+ (_Bool)isUniversalLinksBusinessJumpMiniProgram:(id)arg1;
+ (id)getBusinessName:(id)arg1;
- (void).cxx_destruct;
- (id)getNavigationControllerToPushOrPresentVC;
- (void)internalHandleJump:(id)arg1 translateInfo:(id)arg2 parentViewController:(id)arg3;
- (_Bool)isBusinessJump:(id)arg1;
- (void)processTranslateRefreshTokenResult:(id)arg1 result:(id)arg2 parentViewController:(id)arg3 jumpViewController:(id)arg4;
- (void)processTranslateRedirectUrlResult:(id)arg1 result:(id)arg2 parentViewController:(id)arg3 jumpViewController:(id)arg4;
- (void)processTranslateResult:(id)arg1 result:(id)arg2 parentViewController:(id)arg3 originUrl:(id)arg4 translateInfo:(id)arg5 jumpViewController:(id)arg6 extParams:(id)arg7;
- (_Bool)processQRCodeJSEvent:(id)arg1 runtimeAppid:(id)arg2 runtimeLaunchScene:(long long)arg3 qrCodeUuid:(id)arg4 invokeDic:(id)arg5 parentViewController:(id)arg6;
- (void)handleJumpFromQRCode:(id)arg1 parentViewController:(id)arg2;
- (void)handleJumpFromInner:(id)arg1 parentViewController:(id)arg2 sceneValue:(long long)arg3 extranInfo:(id)arg4;
- (void)handleJumpFromNativeApp:(id)arg1 parentViewController:(id)arg2 sceneValue:(long long)arg3;
- (void)handleJumpFromOuter:(id)arg1 bundleId:(id)arg2 parentViewController:(id)arg3;
- (void)handleJumpFromJSAPI:(id)arg1 parentViewController:(id)arg2 scene:(unsigned int)arg3;
- (void)handleTransferApiWithURLString:(id)arg1 openParam:(id)arg2;
- (void)handleJumpFromOpenSDK:(id)arg1 openParam:(id)arg2 parentViewController:(id)arg3 extraInfo:(id)arg4;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

