//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UICollectionView;
@protocol WCFinderSelectPanelViewDelegate;

@interface WCFinderSelectPanelView
{
    id <WCFinderSelectPanelViewDelegate> _delegate;
    UICollectionView *_collectionView;
    NSArray *_gridModelArray;
    struct CGRect _lastCellRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect lastCellRect; // @synthesize lastCellRect=_lastCellRect;
@property(retain, nonatomic) NSArray *gridModelArray; // @synthesize gridModelArray=_gridModelArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <WCFinderSelectPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)reloadDataWrap;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)genSelectedGridModels;
- (void)reloadWithGridModels:(id)arg1;
- (void)setUpCollectionView;
- (id)initWithFrame:(struct CGRect)arg1 backgroundColor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

