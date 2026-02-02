//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSMutableArray, NSString, WCFinderLbsLifeSyncTask;

@interface WCFinderLbsLifeSyncRequestManager
{
    NSData *_lastBuffer;
    NSMutableArray *_taskQueue;
    WCFinderLbsLifeSyncTask *_currentTask;
    NSString *_keyBufMd5;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *keyBufMd5; // @synthesize keyBufMd5=_keyBufMd5;
@property(retain, nonatomic) WCFinderLbsLifeSyncTask *currentTask; // @synthesize currentTask=_currentTask;
@property(retain, nonatomic) NSMutableArray *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
- (void)_syncWithTask:(id)arg1;
- (void)checkQueue;
- (void)syncWithTask:(id)arg1;
- (_Bool)_checkTaskCanIgnore:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

