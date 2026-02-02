//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ICCollectionView, ICFlowModel, NSString;

@interface ICFlowViewController
{
    ICFlowModel *_model;
    ICCollectionView *_collectionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ICCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) ICFlowModel *model; // @synthesize model=_model;
- (void)updateFooterViewHidden:(_Bool)arg1;
- (void)flowModel:(id)arg1 deleteDataSectionsAt:(id)arg2;
- (void)flowModel:(id)arg1 insertDataSectionsAt:(id)arg2;
- (void)flowModel:(id)arg1 deleteDataItemsAt:(id)arg2;
- (void)flowModel:(id)arg1 insertDataItemsAt:(id)arg2;
- (void)flowModelReloadDataItems:(id)arg1;
- (void)flowModel:(id)arg1 didCancelLoadMore:(id)arg2;
- (void)flowModel:(id)arg1 didFinishLoadMore:(id)arg2 error:(id)arg3;
- (void)flowModelWillLoadMore:(id)arg1;
- (void)flowModel:(id)arg1 didFinishLoadNew:(id)arg2 error:(id)arg3;
- (void)flowModelWillLoadNew:(id)arg1;
- (void)startBatchFetching:(id)arg1;
- (_Bool)shouldBeginBatchFetching;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionLayout;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGRect)collectionViewFrame;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)reloadWithModel:(id)arg1;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

