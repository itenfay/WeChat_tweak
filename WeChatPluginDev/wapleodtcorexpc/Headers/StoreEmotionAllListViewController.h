//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonLoadMoreFooterView, EmotionBannerSet, EmotionSetInfo, MMLoadMoreCollectionView, NSMutableArray, NSString, StoreEmotionAllListReportInfo, StoreEmotionGetEmotionListCgi, StoreEmotionPageShareLogic, UICollectionViewFlowLayout, UIView;

@interface StoreEmotionAllListViewController
{
    StoreEmotionAllListReportInfo *_reportInfo;
    EmotionBannerSet *_bannerSet;
    long long _extranceScene;
    MMLoadMoreCollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionLayout;
    EmoticonLoadMoreFooterView *_loadingFooterView;
    StoreEmotionGetEmotionListCgi *_getEmotionListCgi;
    NSMutableArray *_storeItems;
    EmotionSetInfo *_emotionSetInfo;
    StoreEmotionPageShareLogic *_shareLogic;
    UIView *_loadingView;
    unsigned long long _forwardCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long forwardCount; // @synthesize forwardCount=_forwardCount;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) StoreEmotionPageShareLogic *shareLogic; // @synthesize shareLogic=_shareLogic;
@property(retain, nonatomic) EmotionSetInfo *emotionSetInfo; // @synthesize emotionSetInfo=_emotionSetInfo;
@property(retain, nonatomic) NSMutableArray *storeItems; // @synthesize storeItems=_storeItems;
@property(retain, nonatomic) StoreEmotionGetEmotionListCgi *getEmotionListCgi; // @synthesize getEmotionListCgi=_getEmotionListCgi;
@property(retain, nonatomic) EmoticonLoadMoreFooterView *loadingFooterView; // @synthesize loadingFooterView=_loadingFooterView;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) MMLoadMoreCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) long long extranceScene; // @synthesize extranceScene=_extranceScene;
@property(retain, nonatomic) EmotionBannerSet *bannerSet; // @synthesize bannerSet=_bannerSet;
@property(retain, nonatomic) StoreEmotionAllListReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
- (void)onOperate:(id)arg1;
- (void)onGetEmotionListFinishedWithReqType:(unsigned int)arg1 Response:(id)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)onLoadDone;
- (void)onLoadMore;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)preferredStatusBarStyle;
- (void)setupRightBarButton;
- (void)initData;
- (void)initViews;
- (long long)pageScene;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithBannerSet:(id)arg1 extrance:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

