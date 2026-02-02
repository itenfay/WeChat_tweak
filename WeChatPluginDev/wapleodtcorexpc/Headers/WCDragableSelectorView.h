//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, WCCollectViewReorder, WCDragCollectionView;
@protocol WCDragableSelectorViewDelegate;

@interface WCDragableSelectorView
{
    WCDragCollectionView *_collectionView;
    WCCollectViewReorder *_collectionViewReorder;
    NSMutableDictionary *_cellImageViewDic;
    _Bool _scrollEnabled;
    id <WCDragableSelectorViewDelegate> _dragDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) __weak id <WCDragableSelectorViewDelegate> dragDelegate; // @synthesize dragDelegate=_dragDelegate;
- (_Bool)onEndCollectionViewCellMovement:(long long)arg1;
- (void)onCollectionViewCellMoved:(struct CGPoint)arg1;
- (id)getCellImageViewArray;
- (void)xd_collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)xd_collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reload;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (int)calMaxImagePerRow;
- (double)calCollectionViewWidth;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

