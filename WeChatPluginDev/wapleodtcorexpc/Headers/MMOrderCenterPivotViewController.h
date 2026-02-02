//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UIScrollView, UIView;
@protocol MMOrderCenterTabNumberingDataProvider;

@interface MMOrderCenterPivotViewController
{
    NSArray *_items;
    UIScrollView *_tabScrollView;
    UIView *_tabContainerView;
    UIView *_currentTabIndicatorBarView;
    UIScrollView *_pageContainerView;
    long long _selectedIndex;
    id <MMOrderCenterTabNumberingDataProvider> _tabNumberingProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MMOrderCenterTabNumberingDataProvider> tabNumberingProvider; // @synthesize tabNumberingProvider=_tabNumberingProvider;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UIScrollView *pageContainerView; // @synthesize pageContainerView=_pageContainerView;
@property(retain, nonatomic) UIView *currentTabIndicatorBarView; // @synthesize currentTabIndicatorBarView=_currentTabIndicatorBarView;
@property(retain, nonatomic) UIView *tabContainerView; // @synthesize tabContainerView=_tabContainerView;
@property(retain, nonatomic) UIScrollView *tabScrollView; // @synthesize tabScrollView=_tabScrollView;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)updateTabNumberingWithTabCountItems:(id)arg1;
- (void)fetchAndUpdateTabNumberingWithForce:(_Bool)arg1;
- (void)attachViewControllerAtIndex:(long long)arg1;
- (void)selectItemAtIndex:(long long)arg1 scrollPageContainer:(_Bool)arg2;
- (void)layoutControllers;
- (void)layoutTabs;
- (void)onGlobalOrderRefreshRequestedByOrderTableViewController:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onTabViewTapped:(id)arg1;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)updateNumbering:(long long)arg1 atIndex:(long long)arg2;
- (void)updateDisplayName:(id)arg1 atIndex:(long long)arg2;
- (id)initWithItems:(id)arg1 tabNumberingProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

