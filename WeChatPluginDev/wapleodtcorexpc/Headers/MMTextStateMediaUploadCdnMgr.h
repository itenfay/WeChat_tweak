//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTextStateMediaUploadTaskInfo, NSMutableArray;
@protocol MMTextStateMediaUploadCdnMgrDelegate;

@interface MMTextStateMediaUploadCdnMgr
{
    id <MMTextStateMediaUploadCdnMgrDelegate> _delegate;
    NSMutableArray *_taskQueue;
    MMTextStateMediaUploadTaskInfo *_curTaskInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTextStateMediaUploadTaskInfo *curTaskInfo; // @synthesize curTaskInfo=_curTaskInfo;
@property(retain, nonatomic) NSMutableArray *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(nonatomic) __weak id <MMTextStateMediaUploadCdnMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportCDNKV;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnInit;
- (void)onTextStateUploadCdnSuccess:(id)arg1;
- (void)onTextStateUploadRetryFail:(id)arg1;
- (void)addRetryQueueWithTask:(id)arg1;
- (void)startUploadTextStateTask;
- (void)CheckQueue;
- (void)retryUploadTaskInfoWithTaskInfo:(id)arg1;
- (void)startUploadTextStateTaskInfo:(id)arg1;
- (void)startUploadLivePhotoMedia:(id)arg1 tid:(id)arg2;
- (void)startUploadImageMedia:(id)arg1 tid:(id)arg2;
- (void)startUploadWithVideoPath:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 tid:(id)arg4;
- (id)createSightDraftWithVideoPath:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3;
- (id)genTaskInfoWithSightDraftItem:(id)arg1 thumbPath:(id)arg2 tid:(id)arg3;
- (void)reloadQueue;
- (id)initWithDelegate:(id)arg1;

@end

