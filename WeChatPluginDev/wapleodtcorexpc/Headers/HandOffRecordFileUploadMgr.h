//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CdnRecordMediaInfo, NSMutableArray, NSString;
@protocol HandOffCDNUploadMgrDelegate;

@interface HandOffRecordFileUploadMgr
{
    id <HandOffCDNUploadMgrDelegate> _delegate;
    NSMutableArray *_fileInfoQueue;
    NSMutableArray *_deletingItems;
    CdnRecordMediaInfo *_curTaskInfo;
    long long _lastUploadProgressTime;
}

- (void).cxx_destruct;
@property(nonatomic) long long lastUploadProgressTime; // @synthesize lastUploadProgressTime=_lastUploadProgressTime;
@property(retain, nonatomic) CdnRecordMediaInfo *curTaskInfo; // @synthesize curTaskInfo=_curTaskInfo;
@property(retain, nonatomic) NSMutableArray *deletingItems; // @synthesize deletingItems=_deletingItems;
@property(retain, nonatomic) NSMutableArray *fileInfoQueue; // @synthesize fileInfoQueue=_fileInfoQueue;
@property(nonatomic) __weak id <HandOffCDNUploadMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)UploadOk:(id)arg1;
- (void)UploadFail;
- (void)startUploadAppAttach:(id)arg1 enableHitCheck:(_Bool)arg2;
- (void)startUploadAppAttach:(id)arg1;
- (void)StopUpload:(id)arg1;
- (void)StopCurUpload;
- (void)StartUpload:(id)arg1;
- (void)CheckQueue;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

