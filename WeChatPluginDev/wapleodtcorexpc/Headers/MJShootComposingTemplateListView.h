//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJCircleProgressView, MJShootComposingTemplatePanelViewModel, NSString, UICollectionView, UILabel, UIView;
@protocol MJShootComposingTemplateListViewDelegate;

@interface MJShootComposingTemplateListView
{
    _Bool _loadMoreTemplateDisabled;
    id <MJShootComposingTemplateListViewDelegate> _delegate;
    UICollectionView *_collectionView;
    UIView *_selectedBox;
    UILabel *_titleLabel;
    long long _itemAtCenterPoint;
    UIView *_progressBGView;
    MJCircleProgressView *_progressView;
    MJShootComposingTemplatePanelViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJShootComposingTemplatePanelViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MJCircleProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *progressBGView; // @synthesize progressBGView=_progressBGView;
@property(nonatomic) long long itemAtCenterPoint; // @synthesize itemAtCenterPoint=_itemAtCenterPoint;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *selectedBox; // @synthesize selectedBox=_selectedBox;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool loadMoreTemplateDisabled; // @synthesize loadMoreTemplateDisabled=_loadMoreTemplateDisabled;
@property(nonatomic) __weak id <MJShootComposingTemplateListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)impactFeedback;
- (void)removeLoadingUI;
- (void)showLoadingUI;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)templatePanelViewModelDidFetchItemsForDefaultTabSucceed:(id)arg1 items:(id)arg2;
- (void)templatePanelViewModel:(id)arg1 didFetchItemsForDefaultTab:(id)arg2 firstTime:(_Bool)arg3;
- (void)templatePanelViewModelDidFetchItemsForDefaultTabFailed:(id)arg1;
- (void)templatePanelViewModelDidFetchItemSucceed:(id)arg1 item:(id)arg2;
- (void)templatePanelViewModelDidFetchItemFailed:(id)arg1;
- (id)templateItemWithTemplateID:(id)arg1;
- (id)templateItemAtIndex:(unsigned long long)arg1;
- (id)currentSelectedTemplateItem;
- (unsigned long long)currentSelectedIndex;
- (id)calcSelectedIndexPath;
- (void)didSelectedItemAtIndexPath:(id)arg1 isUserClicked:(_Bool)arg2;
- (void)notifyPassThroughAndFeedback;
- (id)centralIndexPath;
- (void)reloadData;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)bindViews;
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

