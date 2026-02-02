//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, NSMutableArray, NSString, UICollectionView, UIScrollView;

@interface MMFinderLiveNewAnchorTaskMultiTargetsView
{
    _Bool _shouldShowNote;
    unsigned int _rewardProvideType;
    NSMutableArray *_stageItems;
    NSMutableArray *_headerY;
    UICollectionView *_taskCollectionView;
    UIScrollView *_progressScrollView;
    CAGradientLayer *_gradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIScrollView *progressScrollView; // @synthesize progressScrollView=_progressScrollView;
@property(retain, nonatomic) UICollectionView *taskCollectionView; // @synthesize taskCollectionView=_taskCollectionView;
@property(nonatomic) _Bool shouldShowNote; // @synthesize shouldShowNote=_shouldShowNote;
@property(retain, nonatomic) NSMutableArray *headerY; // @synthesize headerY=_headerY;
@property(nonatomic) unsigned int rewardProvideType; // @synthesize rewardProvideType=_rewardProvideType;
@property(retain, nonatomic) NSMutableArray *stageItems; // @synthesize stageItems=_stageItems;
- (void)refreshStatus;
- (void)reloadProgressScrollView;
- (void)checkMask:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)layoutUI;
- (void)setupUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

