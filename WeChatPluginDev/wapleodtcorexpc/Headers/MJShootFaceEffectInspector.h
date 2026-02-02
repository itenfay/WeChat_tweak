//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MJMaterialLoadingStatusCoordinator, MJShootFaceEffectInspectorViewModel, MMUIButton, MMUILabel, NSString, UICollectionView;
@protocol MJShootFaceEffectInspectorDelegate;

@interface MJShootFaceEffectInspector
{
    id <MJShootFaceEffectInspectorDelegate> _delegate;
    MJShootFaceEffectInspectorViewModel *_viewModel;
    MJMaterialLoadingStatusCoordinator *_coordinator;
    UICollectionView *_faceEffectCollectionView;
    CAGradientLayer *_panelBackgroundGradientLayer;
    MMUIButton *_dismissButton;
    MMUILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) CAGradientLayer *panelBackgroundGradientLayer; // @synthesize panelBackgroundGradientLayer=_panelBackgroundGradientLayer;
@property(retain, nonatomic) UICollectionView *faceEffectCollectionView; // @synthesize faceEffectCollectionView=_faceEffectCollectionView;
@property(retain, nonatomic) MJMaterialLoadingStatusCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) MJShootFaceEffectInspectorViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <MJShootFaceEffectInspectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)dismissButtonDidTouchUpInside:(id)arg1;
- (void)setupForShowing;
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

