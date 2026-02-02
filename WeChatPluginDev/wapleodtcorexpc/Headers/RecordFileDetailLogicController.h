//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, MMUIViewController, MsgRecordDataWrap, NSString;
@protocol MsgRecordFileDetailDelegate;

@interface RecordFileDetailLogicController
{
    MsgRecordDataWrap *m_recordDataWrap;
    ForwardMessageLogicController *m_forwardMsgLogic;
    MMUIViewController *m_fileDetailViewController;
    id <MsgRecordFileDetailDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MsgRecordFileDetailDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)stopDownloadAppMsgByUser;
- (id)getHandOffItem;
- (_Bool)isMinimizeEnable;
- (id)getMinimizeTaskData;
- (_Bool)configWithMinimizeData:(id)arg1;
- (id)getCurrentViewController;
- (void)OnDownloadRecordMessagePart:(id)arg1 DataId:(id)arg2 PartLen:(unsigned int)arg3 TotalLen:(unsigned int)arg4;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(_Bool)arg3;
- (_Bool)HandleDownloadRepeatRecordMessageFail:(id)arg1 DataId:(id)arg2 failRetCode:(int)arg3;
- (void)OnDownloadRecordMessageFail:(id)arg1 DataId:(id)arg2 failRetCode:(int)arg3;
- (void)OnDownloadRecordMessageExpired:(id)arg1 DataId:(id)arg2;
- (id)getMusicLocalFileDataUnit;
- (unsigned int)getMsgUiDownloadStatus;
- (id)GetFileName;
- (unsigned long long)GetTempSize;
- (id)GetTmpFilePath;
- (id)GetFilePath;
- (unsigned long long)GetFileSize;
- (id)GetForwardData;
- (unsigned int)GetPreviewType;
- (_Bool)isViewBePopedStopDownload;
- (_Bool)isDownloading;
- (void)onForwardToContact:(id)arg1;
- (_Bool)OnPreviewFile:(unsigned int)arg1;
- (void)stopDownload;
- (void)startDownload;
- (id)initWithRecordDataWrap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

