//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSMutableArray, NSString, UICollectionView, UICollectionViewDiffableDataSource, UILabel, UITapGestureRecognizer, WCFinderAnimationLoadingView, WCFinderStreamFooterView;

@interface WCFinderCommentHeatUpContactListController
{
    _Bool _continueFlag;
    _Bool _isFetchingData;
    UICollectionView *_collectionView;
    UICollectionViewDiffableDataSource *_diffSource;
    WCFinderStreamFooterView *_footerView;
    WCFinderAnimationLoadingView *_loadingView;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    NSMutableArray *_heatUpCellViewModels;
    NSData *_lastBuffer;
    NSString *_tid;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFetchingData; // @synthesize isFetchingData=_isFetchingData;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSMutableArray *heatUpCellViewModels; // @synthesize heatUpCellViewModels=_heatUpCellViewModels;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderStreamFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *diffSource; // @synthesize diffSource=_diffSource;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)clickRetryAction;
- (_Bool)canPrefetchData;
- (_Bool)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (id)transFormFromHelps:(id)arg1;
- (void)fetchData;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)resetDetailToInitStatusWithRetry:(unsigned long long)arg1;
- (id)snapShot;
- (id)loadContentView;
- (struct UIEdgeInsets)contentInset;
- (void)updateTitleWithCount:(unsigned long long)arg1;
- (void)viewDidLoad;
- (id)initWithPromotionInfo:(id)arg1 tid:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

