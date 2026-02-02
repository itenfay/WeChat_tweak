//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCSessionUBAConfigModel
{
    NSMutableArray *_sessionUBAConfigs;
    NSString *_originalJson;
}

+ (void)initialize;
+ (void)PBArrayAdd_originalJson;
+ (void)PBArrayAdd_sessionUBAConfigs;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *originalJson; // @synthesize originalJson=_originalJson;
@property(retain, nonatomic) NSMutableArray *sessionUBAConfigs; // @synthesize sessionUBAConfigs=_sessionUBAConfigs;
- (id)toString;
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

