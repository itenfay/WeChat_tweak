//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, MultiMediaUploadTask, NSMutableArray, NSString;

@interface TaskListUploadProcessor
{
    CMessageWrap *_msgWrap;
    unsigned long long _uploadTaskTotalSize;
    NSMutableArray *_uploadTaskList;
    MultiMediaUploadTask *_currentTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MultiMediaUploadTask *currentTask; // @synthesize currentTask=_currentTask;
@property(retain, nonatomic) NSMutableArray *uploadTaskList; // @synthesize uploadTaskList=_uploadTaskList;
@property(nonatomic) unsigned long long uploadTaskTotalSize; // @synthesize uploadTaskTotalSize=_uploadTaskTotalSize;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
- (void)OnMultiMediaUploadTask:(id)arg1 progressChange:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnMultiMediaUploadTaskSucc:(id)arg1;
- (void)OnMultiMediaUploadTaskFail:(id)arg1;
- (unsigned long long)getUploadTaskTotalSize;
- (unsigned long long)remainUploadSize:(id)arg1 exceptTask:(id)arg2;
- (void)checkUploadQueue;
- (id)getStateName;
- (void)stop;
- (void)start;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

