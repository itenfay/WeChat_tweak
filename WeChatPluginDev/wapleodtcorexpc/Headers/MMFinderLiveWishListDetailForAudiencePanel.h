//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveGiftWallInfo, MMFinderLiveSharePubbleTipView, MMFinderLiveTask, MMFinderLiveTaskId, MMLiveHalfScreenTitleBarView, MMUIButton, MMUILabel, NSMutableArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIScrollView, UIView;
@protocol MMFinderLiveWishListDetailForAudiencePanelDelegate;

@interface MMFinderLiveWishListDetailForAudiencePanel
{
    _Bool _wecoinBalanceUpdated;
    id <MMFinderLiveWishListDetailForAudiencePanelDelegate> _operationDelegate;
    CDUnknownBlockType _giftWallBoardClickButtonCallBlock;
    CDUnknownBlockType _giftWallHeadImgeSettingGuideClickCallBlock;
    long long _balance;
    MMFinderLiveTaskId *_taskId;
    UIView *_contentView;
    UIScrollView *_scrollContentView;
    MMUILabel *_titleLabel;
    MMLiveHalfScreenTitleBarView *_titleBarView;
    MMUILabel *_targetGiftTitleLabel;
    NSMutableArray *_targetGiftViews;
    UICollectionView *_giftWallCollectionView;
    UICollectionViewFlowLayout *_giftWallCollectionLayout;
    double _lastCollectionViewWidth;
    MMUILabel *_giftWallTitleLabel;
    MMUIButton *_helpButton;
    MMFinderLiveSharePubbleTipView *_tipsPubbleView;
    FinderLiveGiftWallInfo *_giftWallInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveGiftWallInfo *giftWallInfo; // @synthesize giftWallInfo=_giftWallInfo;
@property(retain, nonatomic) MMFinderLiveSharePubbleTipView *tipsPubbleView; // @synthesize tipsPubbleView=_tipsPubbleView;
@property(retain, nonatomic) MMUIButton *helpButton; // @synthesize helpButton=_helpButton;
@property(retain, nonatomic) MMUILabel *giftWallTitleLabel; // @synthesize giftWallTitleLabel=_giftWallTitleLabel;
@property(nonatomic) double lastCollectionViewWidth; // @synthesize lastCollectionViewWidth=_lastCollectionViewWidth;
@property(retain, nonatomic) UICollectionViewFlowLayout *giftWallCollectionLayout; // @synthesize giftWallCollectionLayout=_giftWallCollectionLayout;
@property(retain, nonatomic) UICollectionView *giftWallCollectionView; // @synthesize giftWallCollectionView=_giftWallCollectionView;
@property(retain, nonatomic) NSMutableArray *targetGiftViews; // @synthesize targetGiftViews=_targetGiftViews;
@property(retain, nonatomic) MMUILabel *targetGiftTitleLabel; // @synthesize targetGiftTitleLabel=_targetGiftTitleLabel;
@property(retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBarView; // @synthesize titleBarView=_titleBarView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIScrollView *scrollContentView; // @synthesize scrollContentView=_scrollContentView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool wecoinBalanceUpdated; // @synthesize wecoinBalanceUpdated=_wecoinBalanceUpdated;
@property(nonatomic) long long balance; // @synthesize balance=_balance;
@property(copy, nonatomic) CDUnknownBlockType giftWallHeadImgeSettingGuideClickCallBlock; // @synthesize giftWallHeadImgeSettingGuideClickCallBlock=_giftWallHeadImgeSettingGuideClickCallBlock;
@property(copy, nonatomic) CDUnknownBlockType giftWallBoardClickButtonCallBlock; // @synthesize giftWallBoardClickButtonCallBlock=_giftWallBoardClickButtonCallBlock;
@property(nonatomic) __weak id <MMFinderLiveWishListDetailForAudiencePanelDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (id)audienceLogReporter;
- (_Bool)isGiftWallEnable;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)onSendAnchorWishGiftWithGiftItem:(id)arg1;
- (void)onTapContentView:(id)arg1;
- (void)onHelpButtonClick;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)hidePubbleTipsView;
- (void)updateTipsPubbleViewLocation;
- (void)showPubbleTipsView;
- (void)updateGiftWallHeaderInfo;
- (void)reloadData;
- (void)updateCollectionLayout;
- (double)contentHeight;
- (double)contentWidth;
- (void)layoutTitleBarView;
- (void)layoutContentView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)fetchWecoinBalance;
- (void)updateWithWishes:(id)arg1 totalTargetCount:(unsigned long long)arg2 totalCurCount:(unsigned long long)arg3 isAchieved:(_Bool)arg4 isActive:(_Bool)arg5;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)pageSheetDidDisappear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillAppear;
- (void)showWithAnimated:(_Bool)arg1;
- (void)initViews;
- (void)setupPageSheetConfig;
- (void)unResgisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (void)innerInit;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

