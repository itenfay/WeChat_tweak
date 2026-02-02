//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface BatchCheckCdnHitProcessor
{
    NSMutableArray *_uploadTaskList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *uploadTaskList; // @synthesize uploadTaskList=_uploadTaskList;
- (void)transNextState;
- (void)removeUploadTaskByFileID:(id)arg1;
- (id)findCheckInfoInArray:(id)arg1 withFileID:(id)arg2;
- (id)findUploadTaskWithIdentifier:(id)arg1;
- (id)findUploadTaskWithMd5:(id)arg1;
- (void)onBatchCheckMd5:(id)arg1 withFileidToAeskeys:(id)arg2;
- (void)batchCheckMd5:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)onHitCheckSucc:(id)arg1;
- (struct C2CUploadRequest)genBatchCheckCdnHitRequest;
- (void)start;
- (id)getStateName;
- (id)initWithContext:(id)arg1;

@end

