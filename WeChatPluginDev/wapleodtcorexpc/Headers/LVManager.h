//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LVCacheManager, LVMinimize, NSMutableDictionary, NSString;

@interface LVManager
{
    _Bool _redDotOberver;
    LVMinimize *_minimize;
    LVCacheManager *_pageCache;
    NSMutableDictionary *_cachedExpt;
}

+ (id)shared;
- (void).cxx_destruct;
@property(nonatomic) _Bool redDotOberver; // @synthesize redDotOberver=_redDotOberver;
@property(retain, nonatomic) NSMutableDictionary *cachedExpt; // @synthesize cachedExpt=_cachedExpt;
@property(retain, nonatomic) LVCacheManager *pageCache; // @synthesize pageCache=_pageCache;
@property(retain, nonatomic) LVMinimize *minimize; // @synthesize minimize=_minimize;
- (void)onReddotChanged:(id)arg1 newReddotInfo:(id)arg2;
- (void)onFindFriendRedDotEvent:(id)arg1;
- (void)stopReddotObserver;
- (void)startReddotObserver;
- (void)setupSubmanagers;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceInit;
- (_Bool)openMainFeedCache;
- (int)playerDetailPrefetchRemainingTime;
- (_Bool)playerDetailPrefetchContinuePlayFeed;
- (_Bool)mainFeedCardShowDuration;
- (_Bool)mainFeedSilencePlay;
- (_Bool)mainFeedAutoPlay;
- (int)cellExposePercentage;
- (_Bool)shouldAutoPip;
- (_Bool)shouldAutoMinimize;
- (_Bool)isMainFeedFlutterChannel;
- (_Bool)isMainFeedFlutter;
- (int)mainFeedType;
- (_Bool)isPlayerDetailFlutter;
- (long long)playerDetailEnterType;
- (_Bool)enableBrowseChannel;
- (_Bool)exptBoolValueForKey:(id)arg1 defaultValue:(_Bool)arg2 ignoreCache:(_Bool)arg3;
- (int)exptIntValueForKey:(id)arg1 defaultValue:(int)arg2 ignoreCache:(_Bool)arg3;
- (id)exptStringValueForKey:(id)arg1 ignoreCache:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

