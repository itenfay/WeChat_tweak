//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface StoreEmotionProductIdListObject
{
    NSMutableArray *_pids;
}

+ (id)getSavePath;
+ (id)getSaveRootDir;
+ (id)instance;
+ (void)initialize;
+ (void)PBArrayAdd_pids;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pids; // @synthesize pids=_pids;
- (void)addFirstPid:(id)arg1;
- (void)deletePid:(id)arg1;
- (id)getPids;
- (void)savePidToFile:(id)arg1;
- (void)savePidsToFile:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

