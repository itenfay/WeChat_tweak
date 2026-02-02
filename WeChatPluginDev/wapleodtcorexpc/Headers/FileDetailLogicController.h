//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol FileDetailLogicDelegate;

@interface FileDetailLogicController
{
    id <FileDetailLogicDelegate> _m_fileDetailLogicDelegate;
    NSString *_tmpFilePath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tmpFilePath; // @synthesize tmpFilePath=_tmpFilePath;
@property(nonatomic) __weak id <FileDetailLogicDelegate> m_fileDetailLogicDelegate; // @synthesize m_fileDetailLogicDelegate=_m_fileDetailLogicDelegate;
- (void)pressSessionSourceButton;
- (id)sessionSourceButtonTitle;
- (_Bool)canShowSessionSourceButton;
- (_Bool)onMsgLocate;
- (_Bool)needShowLocateBtn;
- (void)stopDownloadAppMsgByUser;
- (void)presentMinimizeViewController:(id)arg1 key:(id)arg2 openContext:(id)arg3;
- (_Bool)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)arg1;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (void)onRemoveMinimizedTask:(id)arg1;
- (void)onEnterRecentUsedTask:(id)arg1;
- (_Bool)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRecoverTaskData:(id)arg1;
- (_Bool)configWithMinimizeData:(id)arg1;
- (_Bool)isMinimizeEnable;
- (id)pendingTaskContextWithGenerateType:(unsigned long long)arg1 fileVC:(id)arg2;
- (id)getMinimizeKey;
- (void)reportMenuOp:(unsigned long long)arg1 fileName:(id)arg2 fileSize:(unsigned long long)arg3 fileType:(id)arg4;
- (void)reportMenuOp:(unsigned long long)arg1;
- (void)sendHandOffOpenCommand;
- (id)getHandOffItem;
- (id)getMusicLocalFileDataUnit;
- (id)getMinimizeTaskData;
- (int)getFileExpiredDays;
- (void)cancelGetAppMsgStateNotUpload;
- (_Bool)isViewBePopedStopDownload;
- (_Bool)forbidOperation;
- (void)shareToFriend;
- (void)tryRegisterMsgExt;
- (void)startDownloadAppMsgUploading;
- (_Bool)checkUpdateFileDetailViewController:(id)arg1 state:(unsigned int)arg2;
- (unsigned int)isRealtimeUploadingStatus;
- (unsigned int)getMsgUiDownloadStatus;
- (void)OnFileDetailVCDidAppear;
- (id)GetMsg;
- (long long)getMsgSvrID;
- (id)GetFileName;
- (id)GetTmpFilePath;
- (id)GetFilePath;
- (unsigned long long)GetFileSize;
- (id)getFileIdentifier;
- (unsigned long long)GetTempSize;
- (id)GetForwardData;
- (unsigned int)GetPreviewType;
- (_Bool)canAddToFavorites;
- (void)OnOpenByOtherAppWithHasOpen:(_Bool)arg1;
- (void)OnOpened;
- (void)OnScollToButtom;
- (void)OnOpenByWeApp:(id)arg1;
- (void)OnOpenByApp:(id)arg1;
- (id)getToSaveUrl;
- (_Bool)performCommonAction:(id)arg1;
- (_Bool)performCustomizeAction:(id)arg1;
- (void)addDebugActionsIn:(id)arg1;
- (id)genActionItem:(id)arg1 iconName:(id)arg2 iconColor:(id)arg3;
- (void)customizeActionSheetInFirstRow:(id)arg1 secondRow:(id)arg2;
- (_Bool)canShowMsgForwardToDevice;
- (_Bool)autoDownload;
- (_Bool)isDownloading;
- (void)onForwardToContact:(id)arg1;
- (id)generateFavoriteItem;
- (void)OnAddToFavorites;
- (void)OnForwardToDevice:(id)arg1;
- (void)openInDiskUsageDetailViewController:(id)arg1;
- (void)symbolicateAndForward:(id)arg1;
- (_Bool)OnPreviewFile:(unsigned int)arg1;
- (void)checkIsFileExistInSvr;
- (void)stopDownload;
- (void)startDownload;

@end

