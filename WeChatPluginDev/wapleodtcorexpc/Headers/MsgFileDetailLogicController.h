//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSString, ShareDataToOpenSDKController, UINavigationController, WCUIAlertView;
@protocol AppDetailDelegate;

@interface MsgFileDetailLogicController
{
    CMessageWrap *m_wrapMsg;
    NSString *m_nsUsrName;
    _Bool m_bFileExpired;
    _Bool m_bRegister;
    _Bool m_bDownloading;
    _Bool m_bHasRevoke;
    _Bool m_bIsFileExistInSvr;
    ShareDataToOpenSDKController *m_shareOpenSDKController;
    _Bool _isRestartDownloadWhenRealtimeUploadComplete;
    _Bool _canMsgLocate;
    int _uploadStatus;
    id <AppDetailDelegate> _m_delegate;
    WCUIAlertView *_alertView;
    NSString *_fileId;
    UINavigationController *_showNavigationController;
    CDUnknownBlockType _bottomLeftAction;
    CDUnknownBlockType _bottomLeftString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType bottomLeftString; // @synthesize bottomLeftString=_bottomLeftString;
@property(copy, nonatomic) CDUnknownBlockType bottomLeftAction; // @synthesize bottomLeftAction=_bottomLeftAction;
@property(retain, nonatomic) UINavigationController *showNavigationController; // @synthesize showNavigationController=_showNavigationController;
@property(nonatomic) _Bool canMsgLocate; // @synthesize canMsgLocate=_canMsgLocate;
@property(nonatomic) _Bool isRestartDownloadWhenRealtimeUploadComplete; // @synthesize isRestartDownloadWhenRealtimeUploadComplete=_isRestartDownloadWhenRealtimeUploadComplete;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(nonatomic) int uploadStatus; // @synthesize uploadStatus=_uploadStatus;
@property(retain, nonatomic) WCUIAlertView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) __weak id <AppDetailDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) CMessageWrap *m_wrapMsg; // @synthesize m_wrapMsg;
- (void)pressSessionSourceButton;
- (id)sessionSourceButtonTitle;
- (_Bool)canShowSessionSourceButton;
- (_Bool)onMsgLocate;
- (_Bool)needShowLocateBtn;
- (void)onLanTransfer:(id)arg1 clientDownloadOK:(id)arg2;
- (_Bool)checkUpdateFileDetailViewController:(id)arg1 state:(unsigned int)arg2;
- (void)tryRegisterMsgExt;
- (void)startDownloadAppMsgUploading;
- (void)stopDownloadAppMsgByUser;
- (id)getHandOffItem;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (_Bool)isMinimizeEnable;
- (id)getMinimizeTaskData;
- (_Bool)configWithMinimizeData:(id)arg1;
- (void)updateDownloadProgress:(id)arg1;
- (void)updateStatusWhenDownloadFinish:(id)arg1;
- (void)unRegisterExtension;
- (void)handleModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModEnterpriseMsg:(id)arg1 Brand:(id)arg2 WrapMsg:(id)arg3;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)onCheckAppAttachRet:(id)arg1 isExistInSvr:(_Bool)arg2 taskInfo:(id)arg3;
- (unsigned int)isRealtimeUploadingStatus;
- (unsigned int)getMsgUiDownloadStatus;
- (id)getMusicLocalFileDataUnit;
- (int)getFileExpiredDays;
- (void)cancelGetAppMsgStateNotUpload;
- (void)shareToFriend;
- (long long)getMsgSvrID;
- (id)GetMsg;
- (unsigned long long)GetTempSize;
- (id)GetTmpFilePath;
- (id)GetFilePath;
- (id)GetFileName;
- (unsigned long long)GetFileSize;
- (id)getFileIdentifier;
- (id)GetForwardData;
- (unsigned int)GetPreviewType;
- (_Bool)canAddToFavorites;
- (_Bool)canShowMsgForwardToDevice;
- (_Bool)forbidOperation;
- (_Bool)isDownloading;
- (void)OnOpenByOtherAppWithHasOpen:(_Bool)arg1;
- (void)OnOpened;
- (void)OnForwardToDevice:(id)arg1;
- (id)generateFavoriteItem;
- (_Bool)OnPreviewFile:(unsigned int)arg1;
- (void)onForwardToContact:(id)arg1;
- (void)checkIsFileExistInSvr;
- (void)stopDownload;
- (void)startDownload;
- (void)tryRegister;
- (void)dealloc;
- (void)commonInitWithMsg:(id)arg1 userName:(id)arg2;
- (id)initWithMsgWrap:(id)arg1 userName:(id)arg2 canMsgLocate:(_Bool)arg3 bottomLeftAction:(CDUnknownBlockType)arg4 bottomLeftString:(CDUnknownBlockType)arg5 ofNavController:(id)arg6;
- (id)initWithMsgWrap:(id)arg1 userName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

