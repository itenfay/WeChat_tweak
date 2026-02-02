//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCFinderProfileADPlugin, WCFinderStreamLoadingState, WCFinderUserPageParams;

@interface WCFinderProfileFeedFetcher : NSObject
{
    _Bool _filterLiveFeed;
    _Bool _dropFeedForFirstPageFetched;
    _Bool _mininLocalPostingFeed;
    _Bool _isAuthor;
    _Bool _isLoadingFristPage;
    WCFinderStreamLoadingState *_loadingState;
    WCFinderStreamLoadingState *_pullingState;
    WCFinderUserPageParams *_params;
    NSString *_dataScene;
    unsigned long long _refreshTime;
    unsigned long long _firstPageRequestCount;
    CDUnknownBlockType _feedMapper;
    WCFinderProfileADPlugin *_adPlugin;
    unsigned long long _minTid;
    NSMutableArray *_waitFetchingBlock;
    NSMutableArray *_tempStorageUpFeeds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *tempStorageUpFeeds; // @synthesize tempStorageUpFeeds=_tempStorageUpFeeds;
@property(retain, nonatomic) NSMutableArray *waitFetchingBlock; // @synthesize waitFetchingBlock=_waitFetchingBlock;
@property(nonatomic) _Bool isLoadingFristPage; // @synthesize isLoadingFristPage=_isLoadingFristPage;
@property(nonatomic) unsigned long long minTid; // @synthesize minTid=_minTid;
@property(retain, nonatomic) WCFinderProfileADPlugin *adPlugin; // @synthesize adPlugin=_adPlugin;
@property(copy, nonatomic) CDUnknownBlockType feedMapper; // @synthesize feedMapper=_feedMapper;
@property(nonatomic) unsigned long long firstPageRequestCount; // @synthesize firstPageRequestCount=_firstPageRequestCount;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(retain, nonatomic) NSString *dataScene; // @synthesize dataScene=_dataScene;
@property(retain, nonatomic) WCFinderUserPageParams *params; // @synthesize params=_params;
@property(nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
@property(nonatomic) _Bool mininLocalPostingFeed; // @synthesize mininLocalPostingFeed=_mininLocalPostingFeed;
@property(nonatomic) _Bool dropFeedForFirstPageFetched; // @synthesize dropFeedForFirstPageFetched=_dropFeedForFirstPageFetched;
@property(nonatomic) _Bool filterLiveFeed; // @synthesize filterLiveFeed=_filterLiveFeed;
@property(retain, nonatomic) WCFinderStreamLoadingState *pullingState; // @synthesize pullingState=_pullingState;
@property(retain, nonatomic) WCFinderStreamLoadingState *loadingState; // @synthesize loadingState=_loadingState;
- (void)fetchDiagnosisData:(id)arg1;
- (id)profilePullingState;
- (id)profileLoadingState;
- (void)profileRequestPrePage:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)profileRequestNextPage:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)profileRequestFirstPage:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)_mergePostingFeedWithDataItemArray:(id)arg1;
- (id)copy;
- (id)_userPagePullFetcher;
- (id)_userPageFetcher:(_Bool)arg1 isFirstPage:(_Bool)arg2;
- (id)userPageFetcher:(_Bool)arg1 isFirstPage:(_Bool)arg2;
- (id)mapContentVMS:(id)arg1;
- (id)mapFeed:(id)arg1;
- (void)wakeWaitBlock;
- (void)_fetchPageData:(id)arg1 firstPage:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)_upFetchPageData:(id)arg1 originFeedArray:(id)arg2 isFirst:(_Bool)arg3 complete:(CDUnknownBlockType)arg4;
- (void)requestPrePage:(id)arg1 originFeedArray:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)requestPointedPage:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)requestNextPage:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)requestFristPage:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)loadCache:(id)arg1;
- (id)username;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

