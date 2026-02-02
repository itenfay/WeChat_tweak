//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJPictureAdjustmentValueItem, MJPublisherBidirectionalSlider, MJPublisherSlider, MJSegmentPictureInspectorViewModel, MMUILabel, NSString, UICollectionView, UIView;

@interface MJSegmentPictureInspectorView
{
    UICollectionView *_collectionView;
    MJPublisherSlider *_plainSlider;
    MJPublisherBidirectionalSlider *_bidirectionalSlider;
    MMUILabel *_valueLabel;
    UIView *_containerView;
    UIView *_contentView;
    MJPictureAdjustmentValueItem *_selectedItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJPictureAdjustmentValueItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMUILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) MJPublisherBidirectionalSlider *bidirectionalSlider; // @synthesize bidirectionalSlider=_bidirectionalSlider;
@property(retain, nonatomic) MJPublisherSlider *plainSlider; // @synthesize plainSlider=_plainSlider;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)updateSliderWithValueItem:(id)arg1;
- (void)updateSlider:(id)arg1 withValueItem:(id)arg2;
- (id)calcSelectedIndexPath;
- (void)sliderDidFinishChangeValue:(id)arg1;
- (void)sliderValueChanged:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)bindViews;
- (void)layoutViews;
- (void)setupViews;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) MJSegmentPictureInspectorViewModel *viewModel; // @dynamic viewModel;

@end

