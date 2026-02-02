//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderMusicTopicInfo, NSMutableArray, NSString, WCFinderAnimationLoadingView, WCFinderDataItem, WCFinderFeedAudioHelper, WCFinderMusicAuthorsActionSheet, WCFinderMusicCardBriefView, WCFinderMusicEventHeaderView, WCFinderMusicEventViewModel, WCFinderScrollActionSheet, WCFinderTabPageView, WCFinderTopicRouteParams, WCPlayerView;
@protocol WCFinderMusicEventViewDelegate;

@interface WCFinderMusicEventView : UIView
{
    _Bool _isHalfScreenMode;
    _Bool _isOnPostLoading;
    id <WCFinderMusicEventViewDelegate> _delegate;
    WCFinderTopicRouteParams *_params;
    WCFinderMusicEventViewModel *_viewModel;
    NSMutableArray *_pageViewManagerArray;
    FinderMusicTopicInfo *_musicTopicInfo;
    NSString *_topicTitle;
    WCFinderDataItem *_anchorSetRingBtnDataItem;
    WCFinderFeedAudioHelper *_feedAudioHelper;
    WCFinderAnimationLoadingView *_loadingView;
    WCFinderMusicCardBriefView *_cardBriefView;
    UIView *_firstAppearForegroundView;
    WCFinderTabPageView *_tabPageView;
    WCFinderMusicEventHeaderView *_headerView;
    WCFinderScrollActionSheet *_moreActionSheet;
    WCFinderMusicAuthorsActionSheet *_authorsActionSheet;
    WCPlayerView *_playerView;
    NSString *_traceId;
    unsigned long long _enterTime;
    long long _exposeCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long exposeCount; // @synthesize exposeCount=_exposeCount;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(nonatomic) _Bool isOnPostLoading; // @synthesize isOnPostLoading=_isOnPostLoading;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak WCFinderMusicAuthorsActionSheet *authorsActionSheet; // @synthesize authorsActionSheet=_authorsActionSheet;
@property(retain, nonatomic) WCFinderScrollActionSheet *moreActionSheet; // @synthesize moreActionSheet=_moreActionSheet;
@property(nonatomic) __weak WCFinderMusicEventHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) WCFinderTabPageView *tabPageView; // @synthesize tabPageView=_tabPageView;
@property(retain, nonatomic) UIView *firstAppearForegroundView; // @synthesize firstAppearForegroundView=_firstAppearForegroundView;
@property(retain, nonatomic) WCFinderMusicCardBriefView *cardBriefView; // @synthesize cardBriefView=_cardBriefView;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderFeedAudioHelper *feedAudioHelper; // @synthesize feedAudioHelper=_feedAudioHelper;
@property(retain, nonatomic) WCFinderDataItem *anchorSetRingBtnDataItem; // @synthesize anchorSetRingBtnDataItem=_anchorSetRingBtnDataItem;
@property(copy, nonatomic) NSString *topicTitle; // @synthesize topicTitle=_topicTitle;
@property(retain, nonatomic) FinderMusicTopicInfo *musicTopicInfo; // @synthesize musicTopicInfo=_musicTopicInfo;
@property(retain, nonatomic) NSMutableArray *pageViewManagerArray; // @synthesize pageViewManagerArray=_pageViewManagerArray;
@property(retain, nonatomic) WCFinderMusicEventViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderTopicRouteParams *params; // @synthesize params=_params;
@property(nonatomic) _Bool isHalfScreenMode; // @synthesize isHalfScreenMode=_isHalfScreenMode;
@property(nonatomic) __weak id <WCFinderMusicEventViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getCardBriefView;
- (id)postMgrGetVideoTemplateInfo:(id)arg1;
- (id)postMgrPatMusicGetGroupId:(id)arg1;
- (id)postMgrGetRecommendedMusicInfoFromShoot:(_Bool)arg1 postMgr:(id)arg2;
- (id)onPostFollowMuiscFeedId:(id)arg1;
- (id)onPostFollowTemplateFeedId;
- (id)onPostMusicIds:(id)arg1;
- (id)postMgrGetMusicInfo;
- (_Bool)postMgrEnableOpenAlbum:(id)arg1;
- (void)postMgrWillOpenAlbum:(id)arg1;
- (id)postMgrSourceInfo:(id)arg1;
- (id)postMgrGetExtStatsReportStrValue;
- (id)getRefDataItemForExtStatsReport;
- (void)onClickMusicAuthorView:(id)arg1;
- (void)_openSingerInfoActionBySingerInfo:(id)arg1;
- (void)reportMusicSingerWithReportType:(long long)arg1 authors:(id)arg2;
- (void)reportMusicFavWithReportType:(long long)arg1 addFav:(_Bool)arg2;
- (void)reportMusicPlayWithReportType:(long long)arg1;
- (void)reportTabPageWithReportType:(long long)arg1 tabName:(id)arg2;
- (id)getUdfKvDict;
- (void)onMusicEventPlayBtnStateChanged:(long long)arg1 musicInfo:(id)arg2;
- (void)onMusicEventHeaderViewClickProfile:(id)arg1 contactInfo:(id)arg2;
- (void)onMusicEventHeaderClickLikeEduBubble;
- (void)onMusicEventHeaderClickLikeBtn:(id)arg1;
- (void)onMusicEventHeaderClickRingBtn:(id)arg1;
- (void)onMusicEventHeaderViewClickFavBtn:(id)arg1;
- (void)onMusicEventHeaderClickRecommendMusicActionButtonWithMusicInfo:(id)arg1;
- (void)onMusicEventHeaderClickTemplate;
- (void)onBriefHeaderClickJoinBtn:(id)arg1 musicIdPrefix:(id)arg2;
- (void)onMusicEventHeaderClickJoinBtn:(id)arg1 musicIdPrefix:(id)arg2;
- (void)finderEventDescriptionViewController:(id)arg1 didClickUrl:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)finderMusicTopicInvalidWithErrorCode:(int)arg1 errMsg:(id)arg2;
- (_Bool)enableSetRing;
- (void)finderMusicMgrFetchListSucPullType:(unsigned long long)arg1 innerTabType:(int)arg2 dataArray:(id)arg3;
- (void)finderEventFeedOrderChangedInHotTab;
- (id)finderGetMusicSongId;
- (void)finderMusicPostAction;
- (_Bool)shouldSetFeedRingtone:(id)arg1;
- (void)finderMusicReloadAllData;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)getMusicTopicInfoModel;
- (id)generTopicShareItemWithTopicTitleWithType:(int)arg1;
- (void)reportForwordWith:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (id)getCurMediaListObject;
- (void)reloadDataWrap;
- (void)onConfirmButtonClicked;
- (id)onFinderMusicBgmFeedDataItem;
- (id)onFinderMusicBGMFeedId;
- (void)onFinderEventTabListError;
- (void)reportMusicExtStatsReportByActionType:(int)arg1 InfoDic:(id)arg2;
- (id)genClickActionExtStatsReportValue;
- (void)reportMusicPageExtStatsReport;
- (void)doExposeHeaderDataReport;
- (void)onFinderMusicTopicHeaderViewNeedRefresh;
- (void)headerViewWillDisplayInFinderTabPageView:(id)arg1;
- (void)finderTabPageView:(id)arg1 switchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (_Bool)isNotchScreen;
- (void)finderTabPageView:(id)arg1 targetAlphaOfTabContainerChanged:(double)arg2;
- (double)topInsetOfFinderTabPageView:(id)arg1;
- (struct UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (struct CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (id)finderTabPageView:(id)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (id)finderTabPageView:(id)arg1 tabViewAtIndex:(unsigned long long)arg2;
- (double)heightForHeaderViewInFinderTabPageView:(id)arg1;
- (id)getMusicTopicReportDic;
- (id)headerViewInFinderTabPageView:(id)arg1;
- (void)updateHeaderViewPostRingBtnFrom:(id)arg1;
- (long long)numberOfTabPageInFinderTabPageView:(id)arg1;
- (id)gen21874UdfKvDict;
- (id)getShareDataItem;
- (void)checkShouldDownloadFirstVideo;
- (id)currentViewController;
- (id)genDownloadMediaInfo;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (void)initFirstAppearForegroundView;
- (double)topInset;
- (void)viewWillLayoutSubviews;
- (void)viewDidBePopedOrDismissed;
- (void)viewDidBePushOrPresent;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (id)getItemArrayConfig;
- (void)onClickMoreButton;
- (void)updateWithParams:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

