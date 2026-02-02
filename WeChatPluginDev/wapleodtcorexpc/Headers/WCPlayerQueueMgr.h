//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString, WCPlayerView;

@interface WCPlayerQueueMgr
{
    _Bool _isMulinstance;
    int _maxPreloadCount;
    WCPlayerView *_playerView;
    NSMutableDictionary *_dicPlayerObj;
    NSMutableArray *_arrNewPreObjs;
    unsigned long long _totalCreateCount;
    unsigned long long _notHitCount;
    unsigned long long _hitCount;
    unsigned long long _hitAndReadyCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isMulinstance; // @synthesize isMulinstance=_isMulinstance;
@property(nonatomic) int maxPreloadCount; // @synthesize maxPreloadCount=_maxPreloadCount;
@property(nonatomic) unsigned long long hitAndReadyCount; // @synthesize hitAndReadyCount=_hitAndReadyCount;
@property(nonatomic) unsigned long long hitCount; // @synthesize hitCount=_hitCount;
@property(nonatomic) unsigned long long notHitCount; // @synthesize notHitCount=_notHitCount;
@property(nonatomic) unsigned long long totalCreateCount; // @synthesize totalCreateCount=_totalCreateCount;
@property(retain, nonatomic) NSMutableArray *arrNewPreObjs; // @synthesize arrNewPreObjs=_arrNewPreObjs;
@property(retain, nonatomic) NSMutableDictionary *dicPlayerObj; // @synthesize dicPlayerObj=_dicPlayerObj;
@property(nonatomic) __weak WCPlayerView *playerView; // @synthesize playerView=_playerView;
- (void)onViewDidAppear:(id)arg1 withVC:(id)arg2;
- (void)onPlayerStartPlay:(id)arg1;
- (void)createPlayers;
- (void)adjustPreloadPriority;
- (void)preloadWithArgs:(id)arg1;
- (void)removePlayerWithScene:(unsigned long long)arg1;
- (void)removePlayerInstance:(id)arg1;
- (id)getPlayerWithArgs:(id)arg1 frame:(struct CGRect)arg2 controlView:(id)arg3;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

