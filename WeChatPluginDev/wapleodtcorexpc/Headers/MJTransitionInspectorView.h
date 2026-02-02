//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJTransitionInspectorViewModel, MMUIActivityIndicatorView, NSString, UICollectionView;
@protocol MJTransitionInspectorViewDelegate;

@interface MJTransitionInspectorView
{
    id <MJTransitionInspectorViewDelegate> _delegate;
    UICollectionView *_collectionView;
    MMUIActivityIndicatorView *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <MJTransitionInspectorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)updateCellSelection;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)loadContent;
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
@property(readonly, nonatomic) MJTransitionInspectorViewModel *viewModel; // @dynamic viewModel;

@end

