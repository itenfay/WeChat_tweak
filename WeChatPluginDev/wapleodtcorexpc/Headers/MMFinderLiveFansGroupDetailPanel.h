//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFansGroupDetailNavBar, MMFinderLiveFansGroupIntimacyInfo, MMFinderLiveFansGroupSignView, MMFinderLiveTask, MMFinderLiveTaskId, MMUILabel, NSMutableArray, NSString, RichTextView, UICollectionView, UIView, WCFinderAnimationLoadingView;

@interface MMFinderLiveFansGroupDetailPanel
{
    _Bool _useDefaultIntimacy;
    _Bool _isFetching;
    _Bool _isReserveLiveModing;
    _Bool _isAfterJoin;
    CDUnknownBlockType _onReserveLiveNotificationBlock;
    CDUnknownBlockType _onClickJoinSuperfanCallback;
    MMFinderLiveTaskId *_taskId;
    UIView *_panelView;
    MMFinderLiveFansGroupDetailNavBar *_navBar;
    UIView *_upgradeHeaderView;
    MMUILabel *_myWarmHeartValueLabel;
    MMFinderLiveFansGroupSignView *_signView;
    RichTextView *_upgradeTipLabel;
    RichTextView *_superfanTipLabel;
    UIView *_upgradeInfoContainerView;
    UIView *_settingHeaderView;
    MMUILabel *_settingHeaderTitleLabel;
    UICollectionView *_upgradeDetailCollectView;
    NSMutableArray *_fansGroupUpgradeInfoList;
    WCFinderAnimationLoadingView *_loadingView;
    MMFinderLiveFansGroupIntimacyInfo *_fansGroupIntimacyInfo;
    unsigned long long _reserveLiveContinueModCnt;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAfterJoin; // @synthesize isAfterJoin=_isAfterJoin;
@property(nonatomic) unsigned long long reserveLiveContinueModCnt; // @synthesize reserveLiveContinueModCnt=_reserveLiveContinueModCnt;
@property(nonatomic) _Bool isReserveLiveModing; // @synthesize isReserveLiveModing=_isReserveLiveModing;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(retain, nonatomic) MMFinderLiveFansGroupIntimacyInfo *fansGroupIntimacyInfo; // @synthesize fansGroupIntimacyInfo=_fansGroupIntimacyInfo;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSMutableArray *fansGroupUpgradeInfoList; // @synthesize fansGroupUpgradeInfoList=_fansGroupUpgradeInfoList;
@property(retain, nonatomic) UICollectionView *upgradeDetailCollectView; // @synthesize upgradeDetailCollectView=_upgradeDetailCollectView;
@property(retain, nonatomic) MMUILabel *settingHeaderTitleLabel; // @synthesize settingHeaderTitleLabel=_settingHeaderTitleLabel;
@property(retain, nonatomic) UIView *settingHeaderView; // @synthesize settingHeaderView=_settingHeaderView;
@property(retain, nonatomic) UIView *upgradeInfoContainerView; // @synthesize upgradeInfoContainerView=_upgradeInfoContainerView;
@property(retain, nonatomic) RichTextView *superfanTipLabel; // @synthesize superfanTipLabel=_superfanTipLabel;
@property(retain, nonatomic) RichTextView *upgradeTipLabel; // @synthesize upgradeTipLabel=_upgradeTipLabel;
@property(retain, nonatomic) MMFinderLiveFansGroupSignView *signView; // @synthesize signView=_signView;
@property(retain, nonatomic) MMUILabel *myWarmHeartValueLabel; // @synthesize myWarmHeartValueLabel=_myWarmHeartValueLabel;
@property(retain, nonatomic) UIView *upgradeHeaderView; // @synthesize upgradeHeaderView=_upgradeHeaderView;
@property(retain, nonatomic) MMFinderLiveFansGroupDetailNavBar *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType onClickJoinSuperfanCallback; // @synthesize onClickJoinSuperfanCallback=_onClickJoinSuperfanCallback;
@property(copy, nonatomic) CDUnknownBlockType onReserveLiveNotificationBlock; // @synthesize onReserveLiveNotificationBlock=_onReserveLiveNotificationBlock;
@property(nonatomic) _Bool useDefaultIntimacy; // @synthesize useDefaultIntimacy=_useDefaultIntimacy;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)reportForOpenFansGroupDetailPage;
- (void)showInView:(id)arg1 animated:(_Bool)arg2;
- (void)showWithAnimated:(_Bool)arg1;
- (_Bool)isSelfSuperfan;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)buySuperfan;
- (void)modifyFansGroupReserveLive:(_Bool)arg1;
- (unsigned int)getCurrentComplete:(id)arg1;
- (unsigned int)getAllGainIntimacy:(id)arg1;
- (unsigned int)getGainIntimacy:(id)arg1;
- (void)updateFansGroupUpgradeInfoList;
- (double)getUpgradeTipLabelMaxWidth;
- (unsigned int)getCurrentIntimacy;
- (void)refreshUI;
- (void)refreshFansGroupIntimacy;
- (id)getIntroductionUrl:(id)arg1;
- (void)clearSubViews:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)detailCollectionViewCell:(id)arg1 onViewImageWithURLString:(id)arg2 image:(id)arg3 sourceImageView:(id)arg4;
- (void)detailCollectionViewCell:(id)arg1 didModifyFansGroupReserveLive:(_Bool)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)createLoadingView;
- (void)layoutLoadingView;
- (void)layoutUpgradeDetailCollectView;
- (void)layoutSuperfanTipLabel;
- (void)layoutUpgradeTipLabel;
- (void)layoutCurrentLevelAndSign;
- (void)reportAudienceReserveLiveNotificationInfo:(long long)arg1;
- (void)layoutMyWarmHeartValueLabel;
- (void)layoutNavBar;
- (void)layoutSettingHeaderTitleLabel;
- (double)getContentHeightForCurrentScreenHeight;
- (double)contentHeight;
- (double)contentWidth;
- (double)getSettingHeaderViewHeight;
- (double)getUpgradeHeaderViewHeight;
- (void)updateSettingHeaderViewHeight;
- (void)updateUpgradeHeaderViewHeight;
- (void)layoutSettingHeaderView;
- (void)updateUpgradInfoContainerViewHeight;
- (void)layoutUpgradeHeaderView;
- (void)layoutPanelView;
- (void)updateWidgetsAlpha;
- (void)layoutUI;
- (void)layoutSubviews;
- (_Bool)shouldAdaptToDarkLight;
- (void)setupPageSheetConfig;
- (void)unResgisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (void)innerInit;
- (id)initWithTaskId:(id)arg1 afterJoin:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

