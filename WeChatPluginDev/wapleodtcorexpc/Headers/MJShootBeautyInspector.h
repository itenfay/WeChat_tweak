//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MJPublisherSlider, MJShootBeautyInspectorViewModel, MMUIButton, NSString, UICollectionView;
@protocol MJShootBeautyInspectorDelegate;

@interface MJShootBeautyInspector
{
    _Bool _isInTemplateShootingMode;
    id <MJShootBeautyInspectorDelegate> _delegate;
    MMUIButton *_backButton;
    MMUIButton *_resetButton;
    MJPublisherSlider *_plainSlider;
    UICollectionView *_collectionView;
    CAGradientLayer *_panelBackgroundGradientLayer;
    MJShootBeautyInspectorViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJShootBeautyInspectorViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) CAGradientLayer *panelBackgroundGradientLayer; // @synthesize panelBackgroundGradientLayer=_panelBackgroundGradientLayer;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) MJPublisherSlider *plainSlider; // @synthesize plainSlider=_plainSlider;
@property(retain, nonatomic) MMUIButton *resetButton; // @synthesize resetButton=_resetButton;
@property(retain, nonatomic) MMUIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak id <MJShootBeautyInspectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isInTemplateShootingMode; // @synthesize isInTemplateShootingMode=_isInTemplateShootingMode;
- (_Bool)isItemAdjustable:(id)arg1;
- (void)accessibilityDecrementInSlider:(id)arg1;
- (void)accessibilityIncrementInSlider:(id)arg1;
- (void)updateSliderOnSelectedBeautyItemChanged;
- (void)sliderDidFinishChangeValue:(id)arg1;
- (void)sliderValueChanged:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)resetButtonDidTouchUpInside:(id)arg1;
- (void)backButtonDidTouchUpInside:(id)arg1;
- (void)layoutViews;
- (void)setupViews;
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

