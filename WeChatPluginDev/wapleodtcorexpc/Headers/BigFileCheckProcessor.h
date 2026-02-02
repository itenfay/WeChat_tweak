//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSMutableArray, NSString;

@interface BigFileCheckProcessor
{
    CMessageWrap *_msgWrap;
    NSMutableArray *_bigFileTasks;
    NSMutableArray *_uploadTaskList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *uploadTaskList; // @synthesize uploadTaskList=_uploadTaskList;
@property(retain, nonatomic) NSMutableArray *bigFileTasks; // @synthesize bigFileTasks=_bigFileTasks;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
- (void)convertUploadBigFileRecordData:(id)arg1;
- (void)onBatchCheckBigFileUploadResult:(_Bool)arg1 respList:(id)arg2 wrapMsg:(id)arg3 errMsg:(id)arg4;
- (void)transformToNextState;
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

