//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, WCFinderFeedArray, WCFinderProfileLiveDataFetcher, WCFinderStreamLoadingState;
@protocol WCFinderProfileLivePlaybackViewModelDelegate, WCFinderProfileLivePlaybackViewModelShowTabDelegate;

@interface WCFinderProfileLivePlaybackViewModel
{
    _Bool _isFetchingData;
    int _commentScene;
    WCFinderFeedArray *_feedArray;
    NSString *_finderUsername;
    id <WCFinderProfileLivePlaybackViewModelShowTabDelegate> _showTabDelegate;
    id <WCFinderProfileLivePlaybackViewModelDelegate> _delegate;
    WCFinderProfileLiveDataFetcher *_dataFetcher;
}

+ (_Bool)doLivePlayBackDidSelectItem:(id)arg1 fromVC:(id)arg2 dataFetcher:(id)arg3 feedArray:(id)arg4;
+ (_Bool)isValidLiveContentVM:(id)arg1;
+ (id)overviewSectionTypes;
+ (_Bool)allowLimitMode;
+ (_Bool)shouldDisplay:(id)arg1;
+ (int)tabId;
- (void).cxx_destruct;
@property(nonatomic) _Bool isFetchingData; // @synthesize isFetchingData=_isFetchingData;
@property(retain, nonatomic) WCFinderProfileLiveDataFetcher *dataFetcher; // @synthesize dataFetcher=_dataFetcher;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) __weak id <WCFinderProfileLivePlaybackViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WCFinderProfileLivePlaybackViewModelShowTabDelegate> showTabDelegate; // @synthesize showTabDelegate=_showTabDelegate;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) WCFinderFeedArray *feedArray; // @synthesize feedArray=_feedArray;
- (void)onFinderStickTopChanged:(id)arg1;
@property(readonly, nonatomic) unsigned long long refreshTime;
- (_Bool)checkPurchaseUserCount:(id)arg1;
- (void)openFeedDidSelectVC:(id)arg1 fromVC:(id)arg2 beforeDisplay:(CDUnknownBlockType)arg3;
- (_Bool)livePlayBackDidSelectItem:(id)arg1 fromVC:(id)arg2;
- (void)didClickContentVM:(id)arg1 fromVC:(id)arg2 beforeDisplay:(CDUnknownBlockType)arg3 complete:(CDUnknownBlockType)arg4;
- (_Bool)isValidFeedContentVM:(id)arg1;
- (void)onFinderLiveReplayStickyTopTo:(id)arg1;
- (void)onFinderLiveReplayStatusUpdated:(id)arg1 replayStatus:(unsigned int)arg2;
- (void)onFinderLiveShareViewReplayStatusUpdated:(id)arg1 liveInfo:(id)arg2;
- (void)onFinderLiveReplaySettingUpdated:(id)arg1 replayEnabled:(_Bool)arg2;
- (void)onFinderDataItemDelete:(id)arg1;
@property(readonly, nonatomic) _Bool isAuthorPerspective;
@property(readonly, nonatomic) _Bool showTab;
- (id)viewPageClassName;
- (id)displayName;
- (id)createContentVMFromDataItems:(id)arg1;
- (void)fetchNextLiveDataItems;
- (void)reFetchNextLiveDataItems;
- (void)_updateLiveOverViewSection:(long long)arg1 fillCache:(_Bool)arg2;
- (void)requestPageData;
- (_Bool)shouldDisplayTab;
@property(readonly, nonatomic) NSArray *liveDataItemArray;
@property(readonly, nonatomic) WCFinderStreamLoadingState *loadingState;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

