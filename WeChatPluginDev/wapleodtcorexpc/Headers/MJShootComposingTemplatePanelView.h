//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJShootComposingTemplatePanelViewModel, NSArray, NSIndexPath, NSLayoutConstraint, NSString, UICollectionView, UIScrollView, UIStackView, UIView;
@protocol MJShootComposingTemplatePanelViewDelegate;

@interface MJShootComposingTemplatePanelView
{
    MJShootComposingTemplatePanelViewModel *_viewModel;
    id <MJShootComposingTemplatePanelViewDelegate> _delegate;
    NSIndexPath *_selectedTitleIndexPath;
    UICollectionView *_titleCollectionView;
    UIScrollView *_scrollView;
    UIStackView *_scrollContentView;
    UIView *_indicatorView;
    NSIndexPath *_anchoredIndexPath;
    NSLayoutConstraint *_indicatorLeading;
    NSLayoutConstraint *_indicatorTrailing;
    NSArray *_pageViews;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *pageViews; // @synthesize pageViews=_pageViews;
@property(retain, nonatomic) NSLayoutConstraint *indicatorTrailing; // @synthesize indicatorTrailing=_indicatorTrailing;
@property(retain, nonatomic) NSLayoutConstraint *indicatorLeading; // @synthesize indicatorLeading=_indicatorLeading;
@property(retain, nonatomic) NSIndexPath *anchoredIndexPath; // @synthesize anchoredIndexPath=_anchoredIndexPath;
@property(retain, nonatomic) UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(readonly, nonatomic) UIStackView *scrollContentView; // @synthesize scrollContentView=_scrollContentView;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UICollectionView *titleCollectionView; // @synthesize titleCollectionView=_titleCollectionView;
@property(retain, nonatomic) NSIndexPath *selectedTitleIndexPath; // @synthesize selectedTitleIndexPath=_selectedTitleIndexPath;
@property(nonatomic) __weak id <MJShootComposingTemplatePanelViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MJShootComposingTemplatePanelViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)calcSelectedTitleIndexPath;
- (void)reloadDataWithSelectedTemplateID:(id)arg1;
- (void)reloadData;
- (void)shootComposingTemplatePageView:(id)arg1 didEndDisplayingTemplateItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)shootComposingTemplatePageView:(id)arg1 willDisplayTemplateItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)shootComposingTemplatePageView:(id)arg1 didSelectItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (long long)currentPageIndex;
- (double)currentPosition;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)uninstallIndicatorConstraints;
- (void)anchorIndicatorToTrailing;
- (void)anchorIndicatorToLeading;
- (void)anchorIndicatorToCell:(id)arg1 atIndexPath:(id)arg2;
- (void)updateLineViewLayoutWithIndexPath:(id)arg1;
- (void)scrollToPageAtIndexPath:(id)arg1;
- (void)scrollToPageAtIndexPath:(id)arg1 shouldScrollPageView:(_Bool)arg2;
- (void)titleCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 shouldScrollPageView:(_Bool)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)findPageViewWithCurrentDowloadingTemplateID:(id)arg1;
- (void)bindViews;
- (void)layoutViews;
- (void)setupPanelTemplateCollectionView;
- (void)setupPanelTitleLineView;
- (void)setupPanelTitleCollectionView;
- (void)setupViews;
- (void)commonInit;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

