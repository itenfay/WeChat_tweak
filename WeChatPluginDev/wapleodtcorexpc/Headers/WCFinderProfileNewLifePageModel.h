//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderProfileNewLifePageDataProvider;
@protocol WCFinderProfileNewLifePageModelDelegate;

@interface WCFinderProfileNewLifePageModel
{
    _Bool _hasError;
    _Bool _loading;
    _Bool _empty;
    id <WCFinderProfileNewLifePageModelDelegate> _delegate;
    NSString *_viewingFeedId;
    WCFinderProfileNewLifePageDataProvider *_dataProvider;
}

+ (id)overviewSectionTypes;
+ (int)tabId;
+ (_Bool)allowLimitMode;
+ (_Bool)shouldDisplay:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderProfileNewLifePageDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic, getter=isEmpty) _Bool empty; // @synthesize empty=_empty;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool hasError; // @synthesize hasError=_hasError;
@property(retain, nonatomic) NSString *viewingFeedId; // @synthesize viewingFeedId=_viewingFeedId;
@property(nonatomic) __weak id <WCFinderProfileNewLifePageModelDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)feedCount;
- (int)firstSelectTab;
- (unsigned int)parentEnterScene;
- (int)currentCommentScene;
- (void)privateRequestDataWithFirstPage:(_Bool)arg1;
- (void)requestNextPage;
- (void)requestFirstPage;
- (_Bool)hasMore;
- (id)cardViewModelList;
- (long long)shareCount;
- (long long)heartLikeCount;
- (long long)globalFavoriteCount;
- (long long)likeCount;
- (id)indexPathForViewingFeed;
- (void)setupDataProviderHandler;
- (void)doLoadCache;
- (void)requestPageData;
- (void)_updateNewLifeOverviewSection:(long long)arg1 modelList:(id)arg2 fillCache:(_Bool)arg3;
- (_Bool)shouldDisplayTab;
- (id)lastBuffer;
- (id)viewPageClassName;
- (id)displayName;

@end

