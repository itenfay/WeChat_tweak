//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface MMFinderLiveGestureCache
{
    NSArray *_gestureDefaultEnabledLiveTags;
    NSMutableDictionary *_gesturesDict;
    NSMutableDictionary *_anchorSupportedGesturesDict;
    NSMutableArray *_validateCompletionQueue;
    NSMutableArray *_cacheUpdateQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *cacheUpdateQueue; // @synthesize cacheUpdateQueue=_cacheUpdateQueue;
@property(retain, nonatomic) NSMutableArray *validateCompletionQueue; // @synthesize validateCompletionQueue=_validateCompletionQueue;
@property(retain, nonatomic) NSMutableDictionary *anchorSupportedGesturesDict; // @synthesize anchorSupportedGesturesDict=_anchorSupportedGesturesDict;
@property(retain, nonatomic) NSMutableDictionary *gesturesDict; // @synthesize gesturesDict=_gesturesDict;
@property(retain, nonatomic) NSArray *gestureDefaultEnabledLiveTags; // @synthesize gestureDefaultEnabledLiveTags=_gestureDefaultEnabledLiveTags;
- (void)updateCacheWithUpdateDirectivesEx:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dequeueCacheUpdateWithUpdateDirectives:(id)arg1;
- (void)validateCachedGesturesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)onServiceInit;
- (void)updateCacheWithUpdateDirectives:(id)arg1;
- (id)cachedGestureWithId:(id)arg1;
- (void)cachedGesturesWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *anchorSupportedGestures;
@property(readonly, nonatomic) NSArray *gestures;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

