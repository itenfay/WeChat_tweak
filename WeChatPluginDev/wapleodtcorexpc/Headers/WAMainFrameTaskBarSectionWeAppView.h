//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSIndexPath, NSString, UIButton, UICollectionView, UIImageView, UILabel, UIView, WAMainFrameTaskBarDeleteActionWindow, WAMainFrameTaskBarSectionWeAppViewModel, WAStarCollectionViewLayout;
@protocol WAMainFrameTaskBarSectionWeAppViewDelegate;

@interface WAMainFrameTaskBarSectionWeAppView
{
    WAStarCollectionViewLayout *_layout;
    UIView *_line;
    UIView *_bottomArea;
    UIButton *_bottomClickArea;
    UIView *_emptyContainer;
    UILabel *_emptyLabel;
    UIView *_emptySearchContainer;
    UIImageView *_emptySearchIcon;
    UILabel *_emptySearchLabel;
    _Bool _inAddStarArea;
    _Bool _isDraging;
    _Bool _isInEditMode;
    WAMainFrameTaskBarDeleteActionWindow *_operationWindow;
    WAMainFrameTaskBarSectionWeAppViewModel *_viewModel;
    id <WAMainFrameTaskBarSectionWeAppViewDelegate> _delegate;
    UICollectionView *_collectionView;
    NSIndexPath *_selectedIndexPath;
    UIView *_searchArea;
    UIView *_topRightArea;
    UILabel *_moreLabel;
    UIView *_moreContainer;
    UIImageView *_moreIcon;
}

+ (double)totalCellHeight:(id)arg1 maxShowCount:(long long)arg2;
+ (_Bool)isIpadNotSplit;
+ (int)contentHeight:(id)arg1 maxShowCount:(long long)arg2;
+ (id)titleFont;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *moreIcon; // @synthesize moreIcon=_moreIcon;
@property(retain, nonatomic) UIView *moreContainer; // @synthesize moreContainer=_moreContainer;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(nonatomic) _Bool isInEditMode; // @synthesize isInEditMode=_isInEditMode;
@property(retain, nonatomic) UIView *topRightArea; // @synthesize topRightArea=_topRightArea;
@property(retain, nonatomic) UIView *searchArea; // @synthesize searchArea=_searchArea;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <WAMainFrameTaskBarSectionWeAppViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAMainFrameTaskBarSectionWeAppViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WAMainFrameTaskBarDeleteActionWindow *operationWindow; // @synthesize operationWindow=_operationWindow;
- (void)handleClickSearch;
- (void)handleClickStar;
- (void)showTipsViewController:(id)arg1;
- (void)deleteToSection;
- (void)animateRemoveItem:(long long)arg1;
- (_Bool)isInStarList:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)onLongPress:(id)arg1;
- (_Bool)commonStarItem:(id)arg1 position:(int)arg2;
- (_Bool)collectionView:(id)arg1 itemDidCommitToStarAtIdexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 itemDidCommitToDeleteAtIdexPath:(id)arg2;
- (void)collectionView:(id)arg1 itemDidMoveOutDeleteAreaAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 itemDidMoveInDeleteAreaAtIndexPath:(id)arg2 viewCenter:(struct CGPoint)arg3;
- (_Bool)collectionView:(id)arg1 itemCenterIsInDeleteArea:(struct CGPoint)arg2;
- (void)collectionView:(id)arg1 layout:(id)arg2 onLongPress:(id)arg3 indexPath:(id)arg4;
- (void)collectionView:(id)arg1 layout:(id)arg2 didEndDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 didMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 willMoveToIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 layout:(id)arg2 willEndDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 didEndAnimateToPos:(id)arg3;
- (id)collectionView:(id)arg1 itemAnimateBackToPostion:(id)arg2;
- (void)collectionView:(id)arg1 dragingView:(id)arg2 didDragToPosition:(struct CGPoint)arg3;
- (struct CGPoint)collectionView:(id)arg1 dragViewToPointForItemAtIndexPath:(id)arg2;
- (struct CGPoint)collectionView:(id)arg1 dragViewFromPointForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 dragViewForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldDoCustomDeleteAnimation:(id)arg2;
- (_Bool)isLimitMode;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (_Bool)isCommonUseWeApp;
- (_Bool)isMyWeApp;
- (void)onItemClick:(id)arg1 position:(long long)arg2;
- (void)onClickMore;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onItemTapd:(id)arg1;
- (void)handleEmptyState:(_Bool)arg1;
- (void)updateMoreView;
- (void)updateTitle;
- (void)reload;
- (float)gapSize;
- (void)prepareForReuse;
- (void)hideOperationWindow;
- (void)showOperationWindow;
- (void)layoutSubviews;
- (void)initCollectionView;
- (void)initOperationWindow;
- (void)initEmptyView;
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

