//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppCommunicateData, MMTipsViewController, NSString, OpenApiParameter, UINavigationController;

@interface SendAppMsgToWCHandler
{
    OpenApiParameter *_parameter;
    UINavigationController *m_confirmViewController;
    MMTipsViewController *_tipsViewController;
    _Bool _canReturnRightShareResult;
    _Bool _isCancelled;
    UINavigationController *_m_navigationController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) _Bool canReturnRightShareResult; // @synthesize canReturnRightShareResult=_canReturnRightShareResult;
@property(retain, nonatomic) UINavigationController *m_navigationController; // @synthesize m_navigationController=_m_navigationController;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getGameShareInfo:(id)arg1 appId:(id)arg2;
- (void)handleGetGameShareDataFail;
- (void)reportShareResult:(int)arg1;
- (void)removeAuthViewController;
- (void)shareAuthViewControllerDidFail:(id)arg1;
- (void)shareAuthViewControllerDidSuccess:(id)arg1 redirectUrl:(id)arg2 extraInfo:(id)arg3;
- (void)shareAuthViewControllerDidRedirect:(id)arg1;
- (void)shareAuthViewControllerDidCancel:(id)arg1;
- (void)doAppAuth;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)showAlertView;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)handleUploadTask:(id)arg1 mediaMessage:(id)arg2;
- (void)sendTimeLineWithComunicateData:(id)arg1 withAppID:(id)arg2 extraInfo:(id)arg3;
- (void)closeConfirmView;
- (void)showConfirmView;
- (id)sendTimeLineGameShareCardWithComunicateData:(id)arg1 withAppID:(id)arg2 extraInfo:(id)arg3;
- (id)sendTimeLineFeedWithComunicateData:(id)arg1;
- (id)sendTimeLineWeAppWithComunicateData:(id)arg1;
- (id)genUploadTaskWithVideoPath:(id)arg1 comunicateData:(id)arg2 withAppID:(id)arg3 extraInfo:(id)arg4;
- (id)sendTimeLineVideoFileWithComunicateData:(id)arg1 withAppID:(id)arg2 extraInfo:(id)arg3;
- (_Bool)checkVideoDataWithPath:(id)arg1 pickerScene:(unsigned long long)arg2 extraInfo:(id)arg3;
- (id)saveVideoData:(id)arg1;
- (id)saveAndCheckVideoWithComunicateData:(id)arg1 pickerScene:(unsigned long long)arg2 extraInfo:(id)arg3;
- (id)getTmpFilePathWithMP4Ext;
- (id)sendTimeLineVideoWithComunicateData:(id)arg1;
- (id)sendTimeLineMusicWithComunicateData:(id)arg1 shareType:(long long)arg2;
- (id)sendTimeLinePhotoWithComunicateData:(id)arg1;
- (id)sendTimeLineTextWithComunicateData:(id)arg1;
- (void)launchAppAndSendRespWithErrCode:(int)arg1 errStr:(id)arg2;
- (void)clearAllHandleAndReturn3rdApp:(int)arg1;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)clearAllHandle;
- (void)cancelAllHandle;
- (_Bool)shouldStayInWechat;
@property(readonly, nonatomic) AppCommunicateData *appData;
@property(readonly, nonatomic) NSString *appId;
- (void)cancelSendAppMsgToWC;
- (void)sendAppMsgToWC:(id)arg1;
- (void)dealloc;
- (id)init;
- (long long)currentAuthorizationStatus;
- (void)showAlertWithMessage:(id)arg1 handle:(CDUnknownBlockType)arg2;
- (void)handleFormUploadTaskError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)asyncGenUploadTaskWithLocalIdentifier:(id)arg1 withAppID:(id)arg2 extraInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

