//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveGiftWallInfo, MMFinderLiveTask, MMFinderLiveTaskId, MMLiveHalfScreenTitleBarView, MMUIButton, MMUILabel, NSArray, NSMutableArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIImageView, UIScrollView, UIView;

@interface MMFinderLiveWishListDetailForAnchorPanel
{
    _Bool _isAchieved;
    _Bool _isActive;
    unsigned int _totalPrice;
    CDUnknownBlockType _clickModifyButtonCallBlock;
    CDUnknownBlockType _giftWallBoardClickButtonCallBlock;
    MMFinderLiveTaskId *_taskId;
    UIView *_contentView;
    UIScrollView *_scrollContentView;
    MMUILabel *_headerTitleLabel;
    MMLiveHalfScreenTitleBarView *_titleBarView;
    MMUIButton *_settingButton;
    MMUILabel *_priceTitleLabel;
    UIImageView *_wishAchievedIconView;
    UIImageView *_coinIconView;
    MMUILabel *_priceLabel;
    NSMutableArray *_targetGiftViews;
    NSArray *_lastRewardWishList;
    NSArray *_liveRewardWishes;
    unsigned long long _totalTargetCount;
    unsigned long long _totalCurCount;
    UICollectionView *_giftWallCollectionView;
    UICollectionViewFlowLayout *_giftWallCollectionLayout;
    double _lastCollectionViewWidth;
    MMUILabel *_giftWallTitleLabel;
    MMUIButton *_helpButton;
    FinderLiveGiftWallInfo *_giftWallInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveGiftWallInfo *giftWallInfo; // @synthesize giftWallInfo=_giftWallInfo;
@property(retain, nonatomic) MMUIButton *helpButton; // @synthesize helpButton=_helpButton;
@property(retain, nonatomic) MMUILabel *giftWallTitleLabel; // @synthesize giftWallTitleLabel=_giftWallTitleLabel;
@property(nonatomic) double lastCollectionViewWidth; // @synthesize lastCollectionViewWidth=_lastCollectionViewWidth;
@property(retain, nonatomic) UICollectionViewFlowLayout *giftWallCollectionLayout; // @synthesize giftWallCollectionLayout=_giftWallCollectionLayout;
@property(retain, nonatomic) UICollectionView *giftWallCollectionView; // @synthesize giftWallCollectionView=_giftWallCollectionView;
@property(nonatomic) unsigned int totalPrice; // @synthesize totalPrice=_totalPrice;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) _Bool isAchieved; // @synthesize isAchieved=_isAchieved;
@property(nonatomic) unsigned long long totalCurCount; // @synthesize totalCurCount=_totalCurCount;
@property(nonatomic) unsigned long long totalTargetCount; // @synthesize totalTargetCount=_totalTargetCount;
@property(retain, nonatomic) NSArray *liveRewardWishes; // @synthesize liveRewardWishes=_liveRewardWishes;
@property(retain, nonatomic) NSArray *lastRewardWishList; // @synthesize lastRewardWishList=_lastRewardWishList;
@property(retain, nonatomic) NSMutableArray *targetGiftViews; // @synthesize targetGiftViews=_targetGiftViews;
@property(retain, nonatomic) MMUILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIImageView *coinIconView; // @synthesize coinIconView=_coinIconView;
@property(retain, nonatomic) UIImageView *wishAchievedIconView; // @synthesize wishAchievedIconView=_wishAchievedIconView;
@property(retain, nonatomic) MMUILabel *priceTitleLabel; // @synthesize priceTitleLabel=_priceTitleLabel;
@property(retain, nonatomic) MMUIButton *settingButton; // @synthesize settingButton=_settingButton;
@property(retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBarView; // @synthesize titleBarView=_titleBarView;
@property(retain, nonatomic) MMUILabel *headerTitleLabel; // @synthesize headerTitleLabel=_headerTitleLabel;
@property(retain, nonatomic) UIScrollView *scrollContentView; // @synthesize scrollContentView=_scrollContentView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType giftWallBoardClickButtonCallBlock; // @synthesize giftWallBoardClickButtonCallBlock=_giftWallBoardClickButtonCallBlock;
@property(copy, nonatomic) CDUnknownBlockType clickModifyButtonCallBlock; // @synthesize clickModifyButtonCallBlock=_clickModifyButtonCallBlock;
- (_Bool)isGiftWallEnable;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)onRemoveCurrentRewardWish;
- (void)handleCreateNewWishButtonClick;
- (void)onHelpButtonClick;
- (void)onSettingButton;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateGiftWallHeaderInfo;
- (void)reloadData;
- (void)updateCollectionLayout;
- (double)contentHeight;
- (double)contentWidth;
- (void)layoutPriceView;
- (void)layoutTitleBarView;
- (void)layoutContentView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)pageSheetDidAppear;
- (void)pageSheetWillAppear;
- (void)realShowWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)updateWithWishes:(id)arg1 totalTargetCount:(unsigned long long)arg2 totalCurCount:(unsigned long long)arg3 isAchieved:(_Bool)arg4 isActive:(_Bool)arg5;
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

