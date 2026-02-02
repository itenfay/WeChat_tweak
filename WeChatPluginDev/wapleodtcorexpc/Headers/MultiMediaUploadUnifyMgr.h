//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MultiMediaUploadProcessController, NSMutableArray, NSString;
@protocol RecordUploadCDNMgrDelegate;

@interface MultiMediaUploadUnifyMgr : NSObject
{
    _Bool _bJustUploadDataWithoutMD5Hit;
    id <RecordUploadCDNMgrDelegate> _delegate;
    MultiMediaUploadProcessController *_currentTask;
    NSMutableArray *_arrUploadingTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrUploadingTask; // @synthesize arrUploadingTask=_arrUploadingTask;
@property(retain, nonatomic) MultiMediaUploadProcessController *currentTask; // @synthesize currentTask=_currentTask;
@property(nonatomic) __weak id <RecordUploadCDNMgrDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool bJustUploadDataWithoutMD5Hit; // @synthesize bJustUploadDataWithoutMD5Hit=_bJustUploadDataWithoutMD5Hit;
- (void)onMultiMediaUploadProcessFlowFinish:(id)arg1;
- (void)onHistoryRecordDataUploadFinish:(id)arg1 cdnInfo:(id)arg2 errorMsg:(id)arg3;
- (void)onUploadRecordMsgDataSuccess:(id)arg1;
- (void)OnUploadProgressChanged:(id)arg1 total:(unsigned long long)arg2 remain:(unsigned long long)arg3;
- (void)onNeedUpdateMediaWrap:(id)arg1 bitSet:(int)arg2;
- (id)getTaskWithMsgWrap:(id)arg1;
- (void)checkQueue;
- (void)StopUploadMultiMediaMsgByUsername:(id)arg1;
- (void)StopUploadMultiMediaMsg:(id)arg1;
- (void)StartUploadMultiMediaMsg:(id)arg1;
- (_Bool)IsMultiMediaMsgUploading:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

