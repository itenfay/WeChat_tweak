//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MJMaterialLoadingStatusCoordinator, MJPublisherSlider, MJShootFilterInspectorViewModel, MMUIButton, NSIndexPath, NSString, UICollectionView, UILabel, UIView;
@protocol MJShootFilterInspectorDelegate;

@interface MJShootFilterInspector
{
    id <MJShootFilterInspectorDelegate> _delegate;
    MMUIButton *_dismissButton;
    MJPublisherSlider *_plainSlider;
    UICollectionView *_titleCollectionView;
    UICollectionView *_filterCollectionView;
    CAGradientLayer *_panelBackgroundGradientLayer;
    NSIndexPath *_selectedTitleIndexPath;
    MJShootFilterInspectorViewModel *_viewModel;
    MJMaterialLoadingStatusCoordinator *_coordinator;
    UIView *_lineView;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) MJMaterialLoadingStatusCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) MJShootFilterInspectorViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSIndexPath *selectedTitleIndexPath; // @synthesize selectedTitleIndexPath=_selectedTitleIndexPath;
@property(retain, nonatomic) CAGradientLayer *panelBackgroundGradientLayer; // @synthesize panelBackgroundGradientLayer=_panelBackgroundGradientLayer;
@property(retain, nonatomic) UICollectionView *filterCollectionView; // @synthesize filterCollectionView=_filterCollectionView;
@property(retain, nonatomic) UICollectionView *titleCollectionView; // @synthesize titleCollectionView=_titleCollectionView;
@property(retain, nonatomic) MJPublisherSlider *plainSlider; // @synthesize plainSlider=_plainSlider;
@property(retain, nonatomic) MMUIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(nonatomic) __weak id <MJShootFilterInspectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)relayoutLineView;
- (id)indexPathForItemAtCenterOfCollectionView:(id)arg1;
- (void)notifyDidSelectTitleItemWithIndexPath:(id)arg1;
- (void)accessibilityDecrementInSlider:(id)arg1;
- (void)accessibilityIncrementInSlider:(id)arg1;
- (void)sliderDidFinishChangeValue:(id)arg1;
- (void)sliderValueChanged:(id)arg1;
- (void)hideSliderAnimated:(_Bool)arg1;
- (void)showSliderAnimated:(_Bool)arg1;
- (void)updateSliderOnSelectedFilterItemChanged;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)filterCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)titleCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 shouldScrollFilter:(_Bool)arg3;
- (void)titleCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)dismissButtonDidTouchUpInside:(id)arg1;
- (void)setupForShowing;
- (void)layoutViews;
- (void)setupViews;
- (void)setupData;
- (void)commonInit;
- (void)layoutSubviews;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

