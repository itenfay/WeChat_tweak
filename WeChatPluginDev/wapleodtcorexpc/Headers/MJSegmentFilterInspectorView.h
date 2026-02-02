//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJMaterialLoadingStatusCoordinator, MJPublisherSlider, MJSegmentFilterInspectorViewModel, MMUIActivityIndicatorView, MMUILabel, NSIndexPath, NSString, UICollectionView, UIView;

@interface MJSegmentFilterInspectorView
{
    _Bool _didSelectTitleItem;
    _Bool _didSelectFilterItem;
    UICollectionView *_titleCollectionView;
    UICollectionView *_filterCollectionView;
    MJPublisherSlider *_plainSlider;
    MMUILabel *_valueLabel;
    UIView *_sliderContainerView;
    MMUIActivityIndicatorView *_loadingView;
    UIView *_contentView;
    NSIndexPath *_selectedTitleIndexPath;
    NSIndexPath *_selectedFilterIndexPath;
    MJMaterialLoadingStatusCoordinator *_coordinator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJMaterialLoadingStatusCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(nonatomic) _Bool didSelectFilterItem; // @synthesize didSelectFilterItem=_didSelectFilterItem;
@property(nonatomic) _Bool didSelectTitleItem; // @synthesize didSelectTitleItem=_didSelectTitleItem;
@property(retain, nonatomic) NSIndexPath *selectedFilterIndexPath; // @synthesize selectedFilterIndexPath=_selectedFilterIndexPath;
@property(retain, nonatomic) NSIndexPath *selectedTitleIndexPath; // @synthesize selectedTitleIndexPath=_selectedTitleIndexPath;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *sliderContainerView; // @synthesize sliderContainerView=_sliderContainerView;
@property(retain, nonatomic) MMUILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) MJPublisherSlider *plainSlider; // @synthesize plainSlider=_plainSlider;
@property(retain, nonatomic) UICollectionView *filterCollectionView; // @synthesize filterCollectionView=_filterCollectionView;
@property(retain, nonatomic) UICollectionView *titleCollectionView; // @synthesize titleCollectionView=_titleCollectionView;
- (void)setDefaultFilterIntensity;
- (void)updateSliderState;
- (void)sliderDidFinishChangeValue:(id)arg1;
- (void)sliderValueChanged:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)indexPathForItemAtLeftOfCollectionView:(id)arg1;
- (void)notifyDidSelectTitleItemWithIndexPath:(id)arg1;
- (void)selectAndHighlightTitleItem;
- (void)resetDidSelectItemFlags;
- (void)filterCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)titleCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 shouldScrollFilter:(_Bool)arg3;
- (double)sectionHeaderOffsetXWithItemAtIndexPath:(id)arg1;
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
- (void)loadFilters;
- (void)layoutViews;
- (void)setupViews;
- (void)setupData;
- (void)commonInit;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) MJSegmentFilterInspectorViewModel *viewModel; // @dynamic viewModel;

@end

