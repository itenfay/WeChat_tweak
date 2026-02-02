//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJShootVisagePanelViewModel, MMUILabel, MMUIView, NSString, UICollectionView;
@protocol MJShootVisagePanelViewControllerDelegate;

@interface MJShootVisagePanelViewController
{
    id <MJShootVisagePanelViewControllerDelegate> _delegate;
    MJShootVisagePanelViewModel *_viewModel;
    MMUIView *_contentView;
    MMUILabel *_titleLabel;
    UICollectionView *_collectionView;
    double _cellHorizontalPadding;
}

- (void).cxx_destruct;
@property(nonatomic) double cellHorizontalPadding; // @synthesize cellHorizontalPadding=_cellHorizontalPadding;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MJShootVisagePanelViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <MJShootVisagePanelViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)setupViews;
- (void)setupPageSheetConfig;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

