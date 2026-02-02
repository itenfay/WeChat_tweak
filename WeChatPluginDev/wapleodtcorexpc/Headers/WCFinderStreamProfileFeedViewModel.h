//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSData, NSMutableArray, NSString, WCFinderJustWatchCollectionFeedItem, WCFinderProfileCollectionListLayout, WCFinderProfileTagFeedViewModel, WCFinderTagListViewLayout, WCFinderTopicInfo;
@protocol WCFinderStreamProfileFeedViewModelDelegate;

@interface WCFinderStreamProfileFeedViewModel
{
    _Bool _hasTags;
    _Bool _hasCollections;
    _Bool _isPullingFeedModel;
    _Bool _hiddenTags;
    _Bool _displayTopicExpanded;
    id <WCFinderStreamProfileFeedViewModelDelegate> _delegate;
    unsigned long long _refreshTime;
    NSString *_username;
    WCFinderJustWatchCollectionFeedItem *_justWatchCollectionFeedItem;
    WCFinderTagListViewLayout *_tagListLayout;
    WCFinderProfileCollectionListLayout *_collectionListLayout;
    NSMutableArray *_topicVMS;
    WCFinderProfileTagFeedViewModel *_justWatchPageVM;
    long long _selectedTopicId;
    NSArray *_collectionInfos;
    NSData *_collectionLastBuffer;
}

+ (id)findIndexFromContentVMS:(id)arg1 oldTid:(id)arg2 oldIdx:(long long *)arg3 newTid:(id)arg4 newIdx:(long long *)arg5;
+ (_Bool)allowLimitMode;
+ (id)overviewSectionTypes;
+ (_Bool)pageIsRequired;
+ (int)tabId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *collectionLastBuffer; // @synthesize collectionLastBuffer=_collectionLastBuffer;
@property(retain, nonatomic) NSArray *collectionInfos; // @synthesize collectionInfos=_collectionInfos;
@property(nonatomic) _Bool displayTopicExpanded; // @synthesize displayTopicExpanded=_displayTopicExpanded;
@property(nonatomic) _Bool hiddenTags; // @synthesize hiddenTags=_hiddenTags;
@property(nonatomic) long long selectedTopicId; // @synthesize selectedTopicId=_selectedTopicId;
@property(retain, nonatomic) WCFinderProfileTagFeedViewModel *justWatchPageVM; // @synthesize justWatchPageVM=_justWatchPageVM;
@property(retain, nonatomic) NSMutableArray *topicVMS; // @synthesize topicVMS=_topicVMS;
@property(retain, nonatomic) WCFinderProfileCollectionListLayout *collectionListLayout; // @synthesize collectionListLayout=_collectionListLayout;
@property(retain, nonatomic) WCFinderTagListViewLayout *tagListLayout; // @synthesize tagListLayout=_tagListLayout;
@property(nonatomic) _Bool isPullingFeedModel; // @synthesize isPullingFeedModel=_isPullingFeedModel;
@property(retain, nonatomic) WCFinderJustWatchCollectionFeedItem *justWatchCollectionFeedItem; // @synthesize justWatchCollectionFeedItem=_justWatchCollectionFeedItem;
@property(nonatomic) _Bool hasCollections; // @synthesize hasCollections=_hasCollections;
@property(nonatomic) _Bool hasTags; // @synthesize hasTags=_hasTags;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) __weak id <WCFinderStreamProfileFeedViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFeedManager:(id)arg1 onPostingFeedSuccess:(id)arg2;
- (void)ensurePullableJustWatchData:(id)arg1 watchAction:(id)arg2;
- (void)fetchJustWatchFeed:(CDUnknownBlockType)arg1;
- (void)tryPrefetchJustWatchFeedInfo;
- (void)retryFirstPageData;
- (void)onTopicFeedVMDataCountDecreaseLesThan3:(id)arg1;
- (void)refreshTopics;
- (id)displayTopics;
- (id)ensureTopicPageVM:(id)arg1 fromArray:(id)arg2;
- (void)updateLayoutItem;
- (void)_updateTopicInfoList:(id)arg1;
- (void)updateTopicList:(id)arg1 collectionInfos:(id)arg2;
- (id)allFeedViewModel;
- (id)topicFeedVMForTopicId:(unsigned long long)arg1;
@property(readonly, nonatomic) WCFinderProfileTagFeedViewModel *displayingTopicFeedVM;
@property(retain, nonatomic) WCFinderTopicInfo *selectedTopicInfo;
- (id)viewPageClassName;
- (id)displayName;
- (void)cleanProfileShowJustWatch;
@property(readonly, nonatomic) _Bool isAuthorPerspective;
- (void)_handleJustWatchAfterResp:(id)arg1;
- (void)requestFirstPageData;
- (id)firstCollectionInfo;
- (void)updateCollectionAndTagShowState;
- (_Bool)shouldShowCollectionNextEpisodeShortcut;
- (_Bool)shouldShowCollectionListShortcut;
- (_Bool)shouldShowCollectionListView;
- (_Bool)forbidCollectionList;
- (id)genCollectionDetailListViewModel;
- (void)updateCollectionList:(id)arg1;
- (id)init;
- (void)_updateMoreFeedOverviewSection;
- (void)_updateCollectionOverviewSection:(unsigned long long)arg1 infoList:(id)arg2;
- (void)requestPageData;
- (id)pullableFeedModel;
- (_Bool)shouldDisplayTab;
- (void)doLoadCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

