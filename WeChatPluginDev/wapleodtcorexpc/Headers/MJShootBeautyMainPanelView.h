//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MJMaterialLoadingStatusCoordinator, MJShootBeautyInspectorViewModel, MMUIButton, NSIndexPath, NSString, UICollectionView, UICollectionViewFlowLayout, UILabel;
@protocol MJShootBeautyMainPanelViewDelegate;

@interface MJShootBeautyMainPanelView
{
    id <MJShootBeautyMainPanelViewDelegate> _delegate;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    CAGradientLayer *_panelBackgroundGradientLayer;
    MMUIButton *_dismissButton;
    MJShootBeautyInspectorViewModel *_viewModel;
    MJMaterialLoadingStatusCoordinator *_coordinator;
    NSIndexPath *_selectedIndexPath;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) MJMaterialLoadingStatusCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) MJShootBeautyInspectorViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MMUIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) CAGradientLayer *panelBackgroundGradientLayer; // @synthesize panelBackgroundGradientLayer=_panelBackgroundGradientLayer;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <MJShootBeautyMainPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)beautyMainPanelItemCellDidSelectEdit:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)dismissButtonDidTouchUpInside:(id)arg1;
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

