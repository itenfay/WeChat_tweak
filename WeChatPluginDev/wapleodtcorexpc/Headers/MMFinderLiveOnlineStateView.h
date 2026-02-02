//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveGloryTopView, MMFinderLiveOnlineStateRewardCountView, MMFinderLiveOnlineStateSessionInfo, MMFinderLiveOnlineUserLogic, MMFinderLiveUserStateItem, MMPageSheetAdapter, MMUIActivityIndicatorView, MMWebImageView, NSMutableArray, NSString, RichTextView, UICollectionView, UILabel, UIView, WCPinBottomCollectionViewFlowLayout;
@protocol MMFinderLiveOnlineStateViewDataSource;

@interface MMFinderLiveOnlineStateView
{
    _Bool isOpening;
    _Bool _shouldShowRewardAmount;
    _Bool _shouldHeatValue;
    _Bool _liveRewardEnabled;
    _Bool _showNewRewardCountAndHeatValueStyle;
    _Bool _shouldRunningRank;
    _Bool _newStyleEnableFlag;
    _Bool _needShowNoUserLabel;
    _Bool _gloryListDataPrepared;
    _Bool _onlineStateUsersDataPrepared;
    unsigned int _liveOnlineMemberBoardVersion;
    MMFinderLiveOnlineUserLogic *onlineUserLogic;
    id <MMFinderLiveOnlineStateViewDataSource> _dataSource;
    unsigned long long _rewardTotalAmountInHeat;
    unsigned long long _heatValue;
    NSString *_liveHeatValueStr;
    unsigned long long _paidUserCount;
    NSString *_liveParticipateMemberCountStr;
    NSString *_liveOnlineCountStr;
    NSString *_anonymousOnlineCountStr;
    UICollectionView *_onlineUsersCollectionView;
    WCPinBottomCollectionViewFlowLayout *_onlineUsersCollectionLayout;
    NSMutableArray *_recentRewardCache;
    RichTextView *_noUserLabel;
    MMUIActivityIndicatorView *_onlineContentLoadingView;
    NSMutableArray *_sessionInfos;
    NSMutableArray *_onlineUsersSessionInfos;
    unsigned long long _previewLiveOnlineMemberCount;
    MMFinderLiveOnlineStateSessionInfo *_glorySessionInfo;
    MMPageSheetAdapter *_pageSheetAdapter;
    MMFinderLiveOnlineStateRewardCountView *_rewardCountView;
    MMFinderLiveGloryTopView *_gloryTopView;
    NSMutableArray *_gloryContacts;
    UIView *_adContainerView;
    MMWebImageView *_adImageView;
    UILabel *_adLogoLabel;
    UIView *_titleBarMaskView;
    NSString *_onlineStateAdUrl;
    unsigned long long _watchAdStartTs;
    MMFinderLiveUserStateItem *_myUserStateItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveUserStateItem *myUserStateItem; // @synthesize myUserStateItem=_myUserStateItem;
@property(nonatomic) unsigned long long watchAdStartTs; // @synthesize watchAdStartTs=_watchAdStartTs;
@property(retain, nonatomic) NSString *onlineStateAdUrl; // @synthesize onlineStateAdUrl=_onlineStateAdUrl;
@property(retain, nonatomic) UIView *titleBarMaskView; // @synthesize titleBarMaskView=_titleBarMaskView;
@property(retain, nonatomic) UILabel *adLogoLabel; // @synthesize adLogoLabel=_adLogoLabel;
@property(retain, nonatomic) MMWebImageView *adImageView; // @synthesize adImageView=_adImageView;
@property(retain, nonatomic) UIView *adContainerView; // @synthesize adContainerView=_adContainerView;
@property(retain, nonatomic) NSMutableArray *gloryContacts; // @synthesize gloryContacts=_gloryContacts;
@property(nonatomic) MMFinderLiveGloryTopView *gloryTopView; // @synthesize gloryTopView=_gloryTopView;
@property(nonatomic) _Bool onlineStateUsersDataPrepared; // @synthesize onlineStateUsersDataPrepared=_onlineStateUsersDataPrepared;
@property(nonatomic) _Bool gloryListDataPrepared; // @synthesize gloryListDataPrepared=_gloryListDataPrepared;
@property(retain, nonatomic) MMFinderLiveOnlineStateRewardCountView *rewardCountView; // @synthesize rewardCountView=_rewardCountView;
@property(retain, nonatomic) MMPageSheetAdapter *pageSheetAdapter; // @synthesize pageSheetAdapter=_pageSheetAdapter;
@property(retain, nonatomic) MMFinderLiveOnlineStateSessionInfo *glorySessionInfo; // @synthesize glorySessionInfo=_glorySessionInfo;
@property(nonatomic) unsigned long long previewLiveOnlineMemberCount; // @synthesize previewLiveOnlineMemberCount=_previewLiveOnlineMemberCount;
@property(retain, nonatomic) NSMutableArray *onlineUsersSessionInfos; // @synthesize onlineUsersSessionInfos=_onlineUsersSessionInfos;
@property(retain, nonatomic) NSMutableArray *sessionInfos; // @synthesize sessionInfos=_sessionInfos;
@property(nonatomic) _Bool needShowNoUserLabel; // @synthesize needShowNoUserLabel=_needShowNoUserLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *onlineContentLoadingView; // @synthesize onlineContentLoadingView=_onlineContentLoadingView;
@property(retain, nonatomic) RichTextView *noUserLabel; // @synthesize noUserLabel=_noUserLabel;
@property(retain, nonatomic) NSMutableArray *recentRewardCache; // @synthesize recentRewardCache=_recentRewardCache;
@property(retain, nonatomic) WCPinBottomCollectionViewFlowLayout *onlineUsersCollectionLayout; // @synthesize onlineUsersCollectionLayout=_onlineUsersCollectionLayout;
@property(retain, nonatomic) UICollectionView *onlineUsersCollectionView; // @synthesize onlineUsersCollectionView=_onlineUsersCollectionView;
@property(retain, nonatomic) NSString *anonymousOnlineCountStr; // @synthesize anonymousOnlineCountStr=_anonymousOnlineCountStr;
@property(nonatomic) unsigned int liveOnlineMemberBoardVersion; // @synthesize liveOnlineMemberBoardVersion=_liveOnlineMemberBoardVersion;
@property(retain, nonatomic) NSString *liveOnlineCountStr; // @synthesize liveOnlineCountStr=_liveOnlineCountStr;
@property(retain, nonatomic) NSString *liveParticipateMemberCountStr; // @synthesize liveParticipateMemberCountStr=_liveParticipateMemberCountStr;
@property(nonatomic) unsigned long long paidUserCount; // @synthesize paidUserCount=_paidUserCount;
@property(nonatomic) _Bool newStyleEnableFlag; // @synthesize newStyleEnableFlag=_newStyleEnableFlag;
@property(nonatomic) _Bool shouldRunningRank; // @synthesize shouldRunningRank=_shouldRunningRank;
@property(nonatomic, getter=isShowNewRewardCountAndHeatValueStyle) _Bool showNewRewardCountAndHeatValueStyle; // @synthesize showNewRewardCountAndHeatValueStyle=_showNewRewardCountAndHeatValueStyle;
@property(retain, nonatomic) NSString *liveHeatValueStr; // @synthesize liveHeatValueStr=_liveHeatValueStr;
@property(nonatomic) unsigned long long heatValue; // @synthesize heatValue=_heatValue;
@property(nonatomic) unsigned long long rewardTotalAmountInHeat; // @synthesize rewardTotalAmountInHeat=_rewardTotalAmountInHeat;
@property(nonatomic) _Bool liveRewardEnabled; // @synthesize liveRewardEnabled=_liveRewardEnabled;
@property(nonatomic) _Bool shouldHeatValue; // @synthesize shouldHeatValue=_shouldHeatValue;
@property(nonatomic) _Bool shouldShowRewardAmount; // @synthesize shouldShowRewardAmount=_shouldShowRewardAmount;
@property(nonatomic) __weak id <MMFinderLiveOnlineStateViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool isOpening; // @synthesize isOpening;
@property(retain, nonatomic) MMFinderLiveOnlineUserLogic *onlineUserLogic; // @synthesize onlineUserLogic;
- (_Bool)needShowGloryList;
- (void)onClickLastOneItem:(id)arg1;
- (_Bool)liveShowPrivacyIdentity;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setupOnlineUsersWith:(id)arg1;
- (void)setupRecentRewardUsersWith:(id)arg1 result:(id)arg2;
- (void)updateOnlineUsersRankWith:(id)arg1 onlineUserStateItems:(id)arg2;
- (void)setupOnlineUsersModelWith:(id)arg1 recentRewardUserItems:(id)arg2 result:(id)arg3;
- (void)setupNeedShowNoUserLabelModelWith:(id)arg1;
- (void)setupOnlineStateViewModelWith:(id)arg1 result:(id)arg2;
- (void)onFetchFinderOnlineUserListWithError:(id)arg1 onlineMemberResult:(id)arg2;
- (void)setupGloryListModelWith:(id)arg1 error:(id)arg2;
- (void)onGetLiveGloryList:(id)arg1 error:(id)arg2;
- (_Bool)onlineStateViewDataPrepared;
- (void)resetDataPreparedStatus;
- (void)updatePinnedBottomIndex;
- (void)tryCommitOnlineStateViewDataUpdate;
- (void)updateTitleBarColor;
- (void)pageSheetDidDisappear:(id)arg1;
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)pageSheetDidAppear:(id)arg1;
- (void)pageSheetWillAppear:(id)arg1;
- (void)onIntroductionButtonClicked;
- (void)fetchOnlineUserList;
- (void)reportOnlineStateAd:(unsigned long long)arg1;
- (void)closeWithAnimation:(_Bool)arg1;
- (void)openWithAnimation:(_Bool)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)startLoadingAnimation;
- (_Bool)shouldInstallContentViewPanGesture;
- (_Bool)shouldInstallCollectionViewInteractivePan;
- (void)layoutHalfScreenContentView;
- (void)setContentViewBackground;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setOnlineUserCount:(long long)arg1;
- (void)setOnlineViewCount:(unsigned long long)arg1;
- (void)dealloc;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)showRewardUserOnly;
- (id)onlineUsersScrollView;
- (void)onSwitchAcountPubbleClick:(id)arg1;
- (void)onSelectGiftButtonClickedWithUserItem:(id)arg1;
- (void)onGloryTopViewTipsClick;
- (void)onGloryHeadImageClickWith:(id)arg1;
- (void)onHeadImageClicked:(id)arg1 userItem:(id)arg2;
- (void)addRewardCountViewFromSessionInfos;
- (void)removeRewardCountViewFromSessionInfos;
- (void)showMoreRecentReward;
- (id)createTableFooterViewForTitle:(id)arg1 size:(struct CGSize)arg2;
- (id)createSectionHeaderForSessionInfo:(id)arg1 size:(struct CGSize)arg2;
- (double)getNoUserLabelHeight;
- (void)layoutNoUserLabel;
- (void)layoutLoadingView;
- (void)updateCollectionViewTop;
- (void)layoutAdContainerView;
- (void)updateTitleBarContentsAlphaWith:(id)arg1;
- (void)reloadCollectionViewIfNeedWith:(struct CGSize)arg1;
- (void)layoutContentView;
- (void)reloadSubtitleAndOnlineUsersView;
- (void)reloadData;
- (void)initView;
- (id)getOnlineButtonTitle:(unsigned long long)arg1;
- (void)updateSubTitleForPublicWith:(id)arg1;
- (void)updateSubTitleForUnpublicWith:(id)arg1;
- (void)updateTitleBarSubTitle;
- (void)updateTitleBarTitleForNewStyle;
- (void)updateTitleBarTitle;
- (id)getNoUserLabelTitle;
- (id)liveTask;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

