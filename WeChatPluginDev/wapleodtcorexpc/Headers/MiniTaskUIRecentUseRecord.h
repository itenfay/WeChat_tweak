//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MiniTaskUIRecentUseRecord
{
    unsigned int _lastUpdateTime;
    NSString *_taskInnerKey;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)PBArrayAdd_taskInnerKey;
- (void).cxx_destruct;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(copy, nonatomic) NSString *taskInnerKey; // @synthesize taskInnerKey=_taskInnerKey;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

