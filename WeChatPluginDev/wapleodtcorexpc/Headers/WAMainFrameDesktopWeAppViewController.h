//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WADesktopStarListViewModel, WARecentStarListViewModel;
@protocol WAMainFrameDesktopWeAppViewControllerDelegate;

@interface WAMainFrameDesktopWeAppViewController
{
    WADesktopStarListViewModel *_myViewModel;
    WARecentStarListViewModel *_recentViewModel;
    _Bool _isMy;
    long long _reportState;
    long long _lastReportIndex;
    long long _moreStartIndex;
    long long _moreEndIndex;
    id <WAMainFrameDesktopWeAppViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WAMainFrameDesktopWeAppViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onWeAppItemOpened:(id)arg1;
- (void)reportClickWeApp:(id)arg1 index:(long long)arg2;
- (void)reportClickSearch;
- (_Bool)collectionView:(id)arg1 itemDidCommitToStarAtIdexPath:(id)arg2;
- (void)collectionView:(id)arg1 layout:(id)arg2 onLongPress:(id)arg3 indexPath:(id)arg4;
- (_Bool)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)configureCell:(id)arg1;
- (id)sceneNote:(long long)arg1;
- (unsigned long long)uiScene;
- (void)viewDidLayoutSubviews;
- (void)updateViewAnimated:(_Bool)arg1;
- (void)updateRefreshFooterHiddenState;
- (void)initCollectionView;
- (void)setIsInEditMode:(_Bool)arg1;
- (id)reportSessionId;
- (void)startLoadingBlocked;
- (void)reset;
- (void)reloadData;
- (void)scrollToBottom;
- (long long)itemCount;
- (void)setReportDelegate:(id)arg1;
- (_Bool)sectionIsWeApp:(id)arg1;
- (_Bool)canShowSearch;
- (void)initOperationWindow;
- (void)switchWeAppType:(_Bool)arg1;
- (id)createViewModel;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

