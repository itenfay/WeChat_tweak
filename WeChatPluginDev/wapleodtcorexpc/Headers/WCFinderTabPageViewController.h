//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMScrollView, NSMutableArray, NSString, UIColor, UIView, WCFinderTabPageModel;
@protocol WCFinderTabPageViewBasicProtocol;

@interface WCFinderTabPageViewController
{
    _Bool _enableScrollPage;
    WCFinderTabPageModel *_currentSelectPageModel;
    double _tabMargin;
    UIColor *_scrollViewBackgroundColor;
    double _fontSize;
    double _topInset;
    double _bottomInset;
    double _lineMargin;
    NSMutableArray *_tabPageModelArray;
    MMScrollView *_tabScrollView;
    UIView<WCFinderTabPageViewBasicProtocol> *_tabView;
    unsigned long long _hasAddViewFlag;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long hasAddViewFlag; // @synthesize hasAddViewFlag=_hasAddViewFlag;
@property(retain, nonatomic) UIView<WCFinderTabPageViewBasicProtocol> *tabView; // @synthesize tabView=_tabView;
@property(nonatomic) __weak MMScrollView *tabScrollView; // @synthesize tabScrollView=_tabScrollView;
@property(retain, nonatomic) NSMutableArray *tabPageModelArray; // @synthesize tabPageModelArray=_tabPageModelArray;
@property(nonatomic) double lineMargin; // @synthesize lineMargin=_lineMargin;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UIColor *scrollViewBackgroundColor; // @synthesize scrollViewBackgroundColor=_scrollViewBackgroundColor;
@property(nonatomic) double tabMargin; // @synthesize tabMargin=_tabMargin;
@property(retain, nonatomic) WCFinderTabPageModel *currentSelectPageModel; // @synthesize currentSelectPageModel=_currentSelectPageModel;
@property(nonatomic) _Bool enableScrollPage; // @synthesize enableScrollPage=_enableScrollPage;
- (void)finderTabPageView:(id)arg1 didSelectIndex:(unsigned long long)arg2 isTriggerByUser:(_Bool)arg3;
- (_Bool)_hasChildViewDidAddWithIndex:(unsigned long long)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)_addChildViewToScrollViewWithIndex:(unsigned long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)replaceTabViewControllerWith:(id)arg1 AtIndex:(unsigned long long)arg2;
- (void)removeAllChildViewController;
- (void)removeChildViewControllerWithIndex:(unsigned long long)arg1;
- (void)addChildViewControllerWithIndex:(unsigned long long)arg1;
- (void)switchTabPageViewControllerFrom:(id)arg1 to:(id)arg2 isTriggerByUser:(_Bool)arg3;
- (void)_setSelectVCIndex:(unsigned long long)arg1 shouldScroll:(_Bool)arg2 isTriggerByUser:(_Bool)arg3;
- (void)setSelectVCIndex:(unsigned long long)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)_childViewTransitionIsAppear:(_Bool)arg1 childViewController:(id)arg2;
- (void)childViewControllerDisAppear:(id)arg1;
- (void)childViewControllerAppear:(id)arg1;
- (void)setUpTabScrollView;
- (void)reloadToIndex:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)configureTabPageHeaderView:(id)arg1;
- (id)genTabHeaderViewWithTabPageModelArray:(id)arg1 alignment:(long long)arg2;
- (id)genTabHeaderViewWithTabPageModelArray:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidPresent:(_Bool)arg1;
- (void)viewWillPresent:(_Bool)arg1;
- (void)viewDidPush:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)resetWithTabPageModelArray:(id)arg1 toIndex:(unsigned long long)arg2 alignment:(long long)arg3;
- (void)resetWithTabPageModelArray:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)setTabName:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithTabPageModelArray:(id)arg1 tabHeaderView:(id)arg2;
- (id)initWithTabPageModelArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

