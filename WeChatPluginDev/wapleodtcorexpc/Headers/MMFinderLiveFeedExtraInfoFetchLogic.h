//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveStreamGetAsyncLoadInfoConfig, MMFinderLiveFeedExtraInfoFetcher, MMTimer, NSString;

@interface MMFinderLiveFeedExtraInfoFetchLogic : NSObject
{
    _Bool _started;
    FinderLiveStreamGetAsyncLoadInfoConfig *_asyncLoadInfoConfig;
    CDUnknownBlockType _refreshItemsBlock;
    MMFinderLiveFeedExtraInfoFetcher *_fetcher;
    MMTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) MMFinderLiveFeedExtraInfoFetcher *fetcher; // @synthesize fetcher=_fetcher;
@property(copy, nonatomic) CDUnknownBlockType refreshItemsBlock; // @synthesize refreshItemsBlock=_refreshItemsBlock;
@property(retain, nonatomic) FinderLiveStreamGetAsyncLoadInfoConfig *asyncLoadInfoConfig; // @synthesize asyncLoadInfoConfig=_asyncLoadInfoConfig;
- (void)onFeedEntertainmentCardUpdate:(unsigned long long)arg1 previewInfo:(id)arg2;
- (void)onFeedAggregationCardUpdate:(id)arg1 card:(id)arg2;
- (void)onFeedExtraInfoFetchConfigUpdate;
- (void)onFeedHighlightTagUpdate:(unsigned long long)arg1 tag:(id)arg2;
- (void)internalFetch;
- (void)triggeFetch;
- (void)stop;
- (void)start;
- (long long)timerInterval;
- (_Bool)enable;
@property(readonly, nonatomic) int commentScene;
- (void)dealloc;
- (id)initWithCommentScene:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

