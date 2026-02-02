//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UICollectionView, UICollectionViewFlowLayout, WAMainFrameTaskBarSectionOtherViewCell, WAMainFrameTaskBarSectionViewModel;
@protocol WAMainFrameTaskBarSectionOtherViewDelegate;

@interface WAMainFrameTaskBarSectionOtherView
{
    long long _selectedIndex;
    WAMainFrameTaskBarSectionOtherViewCell *_highlightedCell;
    id <WAMainFrameTaskBarSectionOtherViewDelegate> _delegate;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_layout;
    WAMainFrameTaskBarSectionViewModel *_viewModel;
}

+ (long long)contentHeight:(long long)arg1;
+ (long long)cellHeight;
+ (long long)cellWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) WAMainFrameTaskBarSectionViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <WAMainFrameTaskBarSectionOtherViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)addToMinimize:(long long)arg1;
- (void)addToMinimize;
- (void)deleteItem:(long long)arg1;
- (void)onClickDelete:(id)arg1;
- (void)deleteItem;
- (void)handleLongPress:(id)arg1;
- (_Bool)supportAddToMinimize;
- (void)reload;
- (void)layoutSubviews;
- (void)updateAccessibilityFrame;
- (void)initCollectionView;
- (void)prepareForReuse;
- (void)initView;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

