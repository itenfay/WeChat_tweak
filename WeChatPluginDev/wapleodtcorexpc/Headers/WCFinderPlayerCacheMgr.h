//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCFinderPlayerCacheMgr
{
    NSMutableDictionary *_playerCaches;
}

+ (id)cacheKeyForTid:(id)arg1 scene:(int)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *playerCaches; // @synthesize playerCaches=_playerCaches;
- (_Bool)isPlayerInCache:(id)arg1;
- (id)playerForKey:(id)arg1;
- (void)removePlayerForKey:(id)arg1;
- (void)cachePlayer:(id)arg1 forKey:(id)arg2;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

