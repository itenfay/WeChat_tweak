//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCommonActionSheetPicker, MMFinderLiveGlobalRewardLevelView, MMFinderLiveRewardLevelConfigs, MMFinderLiveTaskId, MMUIActivityIndicatorView, MMUIButton, MMUILabel, NSArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIImageView;

@interface MMFinderLiveBuyGiftPacketViewController
{
    _Bool _wecoinBalanceUpdated;
    _Bool _fetchWecoinBalanceFinished;
    unsigned int _targetLevel;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveGlobalRewardLevelView *_globalRewardLevelView;
    MMFinderLiveGlobalRewardLevelView *_globalRewardLevelPreviewView;
    NSString *_makeOrderRequestId;
    long long _balance;
    MMUIActivityIndicatorView *_loadingIndicator;
    MMUILabel *_giftPacksHeaderLabel;
    MMUIButton *_selectGiftsButton;
    UICollectionView *_giftPacksCollectionView;
    UIImageView *_collectionGradientBackgroundView;
    UICollectionViewFlowLayout *_giftPacksCollectionLayout;
    double _lastCollectionViewWidth;
    MMCommonActionSheetPicker *_levelPicker;
    NSArray *_giftItemViewModels;
    MMFinderLiveRewardLevelConfigs *_levelConfig;
    UIImageView *_wecoinIconView;
    MMUILabel *_priceInWecoinLabel;
    MMUIButton *_purchaseButton;
    MMUILabel *_announcementLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *announcementLabel; // @synthesize announcementLabel=_announcementLabel;
@property(retain, nonatomic) MMUIButton *purchaseButton; // @synthesize purchaseButton=_purchaseButton;
@property(retain, nonatomic) MMUILabel *priceInWecoinLabel; // @synthesize priceInWecoinLabel=_priceInWecoinLabel;
@property(retain, nonatomic) UIImageView *wecoinIconView; // @synthesize wecoinIconView=_wecoinIconView;
@property(retain, nonatomic) MMFinderLiveRewardLevelConfigs *levelConfig; // @synthesize levelConfig=_levelConfig;
@property(retain, nonatomic) NSArray *giftItemViewModels; // @synthesize giftItemViewModels=_giftItemViewModels;
@property(retain, nonatomic) MMCommonActionSheetPicker *levelPicker; // @synthesize levelPicker=_levelPicker;
@property(nonatomic) double lastCollectionViewWidth; // @synthesize lastCollectionViewWidth=_lastCollectionViewWidth;
@property(retain, nonatomic) UICollectionViewFlowLayout *giftPacksCollectionLayout; // @synthesize giftPacksCollectionLayout=_giftPacksCollectionLayout;
@property(retain, nonatomic) UIImageView *collectionGradientBackgroundView; // @synthesize collectionGradientBackgroundView=_collectionGradientBackgroundView;
@property(retain, nonatomic) UICollectionView *giftPacksCollectionView; // @synthesize giftPacksCollectionView=_giftPacksCollectionView;
@property(retain, nonatomic) MMUIButton *selectGiftsButton; // @synthesize selectGiftsButton=_selectGiftsButton;
@property(retain, nonatomic) MMUILabel *giftPacksHeaderLabel; // @synthesize giftPacksHeaderLabel=_giftPacksHeaderLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(nonatomic) _Bool fetchWecoinBalanceFinished; // @synthesize fetchWecoinBalanceFinished=_fetchWecoinBalanceFinished;
@property(nonatomic) _Bool wecoinBalanceUpdated; // @synthesize wecoinBalanceUpdated=_wecoinBalanceUpdated;
@property(nonatomic) long long balance; // @synthesize balance=_balance;
@property(retain, nonatomic) NSString *makeOrderRequestId; // @synthesize makeOrderRequestId=_makeOrderRequestId;
@property(nonatomic) unsigned int targetLevel; // @synthesize targetLevel=_targetLevel;
@property(retain, nonatomic) MMFinderLiveGlobalRewardLevelView *globalRewardLevelPreviewView; // @synthesize globalRewardLevelPreviewView=_globalRewardLevelPreviewView;
@property(retain, nonatomic) MMFinderLiveGlobalRewardLevelView *globalRewardLevelView; // @synthesize globalRewardLevelView=_globalRewardLevelView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (id)audienceLogReporter;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onMMFinderLiveRewardGiftPacketSettingViewChooseGiftPacketViewModel:(id)arg1 targetRank:(unsigned int)arg2;
- (void)commonActionSheetPicker:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 pickItem:(id)arg4;
- (void)commonPickerConfirm:(id)arg1 selectedRows:(id)arg2;
- (void)commonPickerDismissed:(id)arg1;
- (void)onGlobalRewardLevelEditButtonClicked;
- (void)buyCoinCancel:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinSuccess:(id)arg1;
- (void)chargeCoinWithRechargeScene:(unsigned int)arg1;
- (void)consumeDidCancel:(id)arg1;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)consumeCoinWithBillNo:(id)arg1 requestId:(id)arg2 respBuff:(id)arg3 totalWecoinAmount:(long long)arg4;
- (void)onGiftsReselectClicked:(id)arg1;
- (void)onPurchaseButtonClicked:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)fetchWecoinBalance;
- (void)reloadAndRefreshData;
- (void)updateTargetRank:(unsigned int)arg1;
- (void)stopProductListLoading;
- (void)startProductListLoadingNonBlock;
- (id)toast;
- (id)levelComponent;
- (void)dismissLevelPicker;
- (void)showLevelPicker;
- (void)layoutPriceInWecoin;
- (void)layoutUI;
- (id)liveTask;
- (void)purchase;
- (void)reloadData;
- (void)updateCollectionLayout;
- (void)initViews;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

