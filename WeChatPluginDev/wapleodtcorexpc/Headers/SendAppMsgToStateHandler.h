//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSString, OpenApiImageCdnUploader, OpenApiParameter, UINavigationController, WXMediaInternalMessage, WXSceneInternalMessage;

@interface SendAppMsgToStateHandler : NSObject
{
    OpenApiParameter *_parameter;
    UINavigationController *_m_navigationController;
    OpenApiImageCdnUploader *_uploader;
    WXMediaInternalMessage *_mediaMessage;
    WXSceneInternalMessage *_sceneInfo;
    MMUIViewController *_statePublishVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *statePublishVC; // @synthesize statePublishVC=_statePublishVC;
@property(retain, nonatomic) WXSceneInternalMessage *sceneInfo; // @synthesize sceneInfo=_sceneInfo;
@property(retain, nonatomic) WXMediaInternalMessage *mediaMessage; // @synthesize mediaMessage=_mediaMessage;
@property(retain, nonatomic) OpenApiImageCdnUploader *uploader; // @synthesize uploader=_uploader;
@property(retain, nonatomic) UINavigationController *m_navigationController; // @synthesize m_navigationController=_m_navigationController;
- (void)onTextStatePublishCancelled;
- (void)onTextStatePublished;
- (void)launchAppAndSendRespWithErrCode:(int)arg1 errMsg:(id)arg2;
- (void)launchAppAndSendRespWithErrCode:(int)arg1;
- (_Bool)isNeedAppendUpgradeH5WithDataItem:(id)arg1;
- (void)showStateVCWithSourceInfo:(id)arg1 dataItem:(id)arg2 sourceName:(id)arg3;
- (void)publishVideoFileState;
- (void)pullStateForMusicVideo;
- (void)pullStateForImage;
- (void)pullStateForText;
- (void)showStateVC:(id)arg1;
- (void)generateJumpDataItem:(CDUnknownBlockType)arg1;
- (id)generateSourceInfo;
- (void)showUnsupportErrVC;
- (void)shareAuthViewControllerDidSuccess:(id)arg1 redirectUrl:(id)arg2 extraInfo:(id)arg3;
- (void)shareAuthViewControllerDidFail:(id)arg1;
- (void)shareAuthViewControllerDidCancel:(id)arg1;
- (void)clearAllHandleAndReturn3rdApp;
- (void)clearAllHandle;
- (void)clearAuthHandle;
- (void)doAppAuth;
- (void)sendAppMsgToState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

