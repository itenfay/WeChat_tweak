//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMCommonCgiUploadInfo, NSString, ParallelUploadRequest_Param, WCBaseCgi;
@protocol MMCommonCgiUploadTaskDelegate;

@interface MMCommonCgiUploadTask : NSObject
{
    _Bool _isRunning;
    NSString *_taskId;
    long long _retryCount;
    MMCommonCgiUploadInfo *_taskInfo;
    ParallelUploadRequest_Param *_initialParam;
    NSString *_uploadId;
    long long _maxRetryCount;
    id <MMCommonCgiUploadTaskDelegate> _delegate;
    WCBaseCgi *_uploadCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCBaseCgi *uploadCgi; // @synthesize uploadCgi=_uploadCgi;
@property(nonatomic) __weak id <MMCommonCgiUploadTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) NSString *uploadId; // @synthesize uploadId=_uploadId;
@property(retain, nonatomic) ParallelUploadRequest_Param *initialParam; // @synthesize initialParam=_initialParam;
@property(retain, nonatomic) MMCommonCgiUploadInfo *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (void)baseCgi:(id)arg1 didFailWithError:(id)arg2 response:(id)arg3;
- (void)baseCgi:(id)arg1 didGetResponse:(id)arg2;
- (id)createUploadCgi;
- (void)stopUploadTask;
- (void)startUploadTask;
- (id)initWithTaskInfo:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

