//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NewLifeMMKVKeyModel;

@interface NewLifePrefetchManager : NSObject
{
    _Bool _findPageVisible;
    NSMutableArray *_configs;
    NewLifeMMKVKeyModel *_mmkvModel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool findPageVisible; // @synthesize findPageVisible=_findPageVisible;
@property(retain, nonatomic) NewLifeMMKVKeyModel *mmkvModel; // @synthesize mmkvModel=_mmkvModel;
@property(retain, nonatomic) NSMutableArray *configs; // @synthesize configs=_configs;
- (void)finderRedDotDataRevokedWithPathKey:(id)arg1;
- (void)finderRedDotDataReceiveWithPathKey:(id)arg1 isAlreadExistRedDot:(_Bool)arg2;
- (void)updateFindPageVisible:(_Bool)arg1;
- (id)getPrefetchConfigWithType:(long long)arg1 identifierId:(id)arg2;
- (void)clearAllConfigs;
- (id)currentConfigWithType:(long long)arg1;
- (void)tryPrefetchWith:(id)arg1;
- (void)updateEntrancePrefetchConfig;
- (void)updateEntranceReddotPrefetchConfig;
- (id)generalPrefetchConfig;
- (id)reddotPrefetchConfig;
- (_Bool)addOrUpdatePrefetchConfig:(id)arg1;
- (id)initWith:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

