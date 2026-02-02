//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UICollectionView;
@protocol MJPageViewDataSource, MJPageViewInnerProtocol;

@interface MJPageViewContentView
{
    _Bool _bScrollEnable;
    id <MJPageViewDataSource> _dataSource;
    id <MJPageViewInnerProtocol> _delegate;
    NSArray *_items;
    UICollectionView *_collectionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <MJPageViewInnerProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MJPageViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool bScrollEnable; // @synthesize bScrollEnable=_bScrollEnable;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)invalidateLayout;
- (void)changeSelectedFrom:(long long)arg1 to:(long long)arg2 animated:(_Bool)arg3;
- (void)reloadData;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

