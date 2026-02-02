//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, NSString, UIColor, WCFinderEmptyTipsView, WCFinderPageViewContainer;
@protocol WCFinderTabPageViewBasicProtocol, WCFinderTabPageViewDataSource, WCFinderTabPageViewDelegate;

@interface WCFinderTabPageView : UIView
{
    _Bool _alwaysDisplayTabContainer;
    _Bool _delayPageViewCreateTime;
    _Bool _scrollToSwitchTabEnabled;
    _Bool _lazyLoadingDisabled;
    _Bool _pageViewContainerBounceDisabled;
    _Bool _autoResizeMinContentSizeDisabled;
    _Bool _enableHeaderViewBounce;
    _Bool _enableFixHeaderWidth;
    _Bool _tabViewFollowScrollDisabled;
    _Bool _tabViewContainerBlurEffectEnabled;
    id <WCFinderTabPageViewDataSource> _dataSource;
    id <WCFinderTabPageViewDelegate> _delegate;
    UIColor *_tabViewContainerBackgroundColor;
    UIColor *_tabViewContainerBlurColor;
    unsigned long long _selectedIndex;
    unsigned long long _selectedFilterIndex;
    UIView *_headerView;
    UIView<WCFinderTabPageViewBasicProtocol> *_tabViewContainer;
    WCFinderPageViewContainer *_pageViewContainer;
    double _topInset;
    double _hoverOffset;
    UIView *_tabViewContainerWithBlur;
    UIView *_tabBlurView;
    WCFinderEmptyTipsView *_emptyTipsView;
    NSMutableDictionary *_index2PageViewDict;
    NSMutableDictionary *_identifier2HeaderClassMap;
    NSMutableDictionary *_identifier2TabContainerClassMap;
    NSMutableDictionary *_identifier2TabClassMap;
    NSMutableDictionary *_identifier2PageClassMap;
    unsigned long long _tabCount;
    unsigned long long _preSelectIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long preSelectIndex; // @synthesize preSelectIndex=_preSelectIndex;
@property(nonatomic) unsigned long long tabCount; // @synthesize tabCount=_tabCount;
@property(nonatomic) _Bool tabViewContainerBlurEffectEnabled; // @synthesize tabViewContainerBlurEffectEnabled=_tabViewContainerBlurEffectEnabled;
@property(retain, nonatomic) NSMutableDictionary *identifier2PageClassMap; // @synthesize identifier2PageClassMap=_identifier2PageClassMap;
@property(retain, nonatomic) NSMutableDictionary *identifier2TabClassMap; // @synthesize identifier2TabClassMap=_identifier2TabClassMap;
@property(retain, nonatomic) NSMutableDictionary *identifier2TabContainerClassMap; // @synthesize identifier2TabContainerClassMap=_identifier2TabContainerClassMap;
@property(retain, nonatomic) NSMutableDictionary *identifier2HeaderClassMap; // @synthesize identifier2HeaderClassMap=_identifier2HeaderClassMap;
@property(retain, nonatomic) NSMutableDictionary *index2PageViewDict; // @synthesize index2PageViewDict=_index2PageViewDict;
@property(retain, nonatomic) WCFinderEmptyTipsView *emptyTipsView; // @synthesize emptyTipsView=_emptyTipsView;
@property(retain, nonatomic) UIView *tabBlurView; // @synthesize tabBlurView=_tabBlurView;
@property(retain, nonatomic) UIView *tabViewContainerWithBlur; // @synthesize tabViewContainerWithBlur=_tabViewContainerWithBlur;
@property(nonatomic) double hoverOffset; // @synthesize hoverOffset=_hoverOffset;
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
@property(retain, nonatomic) WCFinderPageViewContainer *pageViewContainer; // @synthesize pageViewContainer=_pageViewContainer;
@property(retain, nonatomic) UIView<WCFinderTabPageViewBasicProtocol> *tabViewContainer; // @synthesize tabViewContainer=_tabViewContainer;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) unsigned long long selectedFilterIndex; // @synthesize selectedFilterIndex=_selectedFilterIndex;
@property(nonatomic) _Bool tabViewFollowScrollDisabled; // @synthesize tabViewFollowScrollDisabled=_tabViewFollowScrollDisabled;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UIColor *tabViewContainerBlurColor; // @synthesize tabViewContainerBlurColor=_tabViewContainerBlurColor;
@property(retain, nonatomic) UIColor *tabViewContainerBackgroundColor; // @synthesize tabViewContainerBackgroundColor=_tabViewContainerBackgroundColor;
@property(nonatomic) _Bool enableFixHeaderWidth; // @synthesize enableFixHeaderWidth=_enableFixHeaderWidth;
@property(nonatomic) _Bool enableHeaderViewBounce; // @synthesize enableHeaderViewBounce=_enableHeaderViewBounce;
@property(nonatomic) _Bool autoResizeMinContentSizeDisabled; // @synthesize autoResizeMinContentSizeDisabled=_autoResizeMinContentSizeDisabled;
@property(nonatomic) _Bool pageViewContainerBounceDisabled; // @synthesize pageViewContainerBounceDisabled=_pageViewContainerBounceDisabled;
@property(nonatomic) _Bool lazyLoadingDisabled; // @synthesize lazyLoadingDisabled=_lazyLoadingDisabled;
@property(nonatomic) _Bool scrollToSwitchTabEnabled; // @synthesize scrollToSwitchTabEnabled=_scrollToSwitchTabEnabled;
@property(nonatomic) _Bool delayPageViewCreateTime; // @synthesize delayPageViewCreateTime=_delayPageViewCreateTime;
@property(nonatomic) _Bool alwaysDisplayTabContainer; // @synthesize alwaysDisplayTabContainer=_alwaysDisplayTabContainer;
@property(nonatomic) __weak id <WCFinderTabPageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WCFinderTabPageViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)onWillSwitchPageWithType:(unsigned long long)arg1;
- (void)linkedContentOffsetYDidChange:(id)arg1;
- (void)finderPageViewContainer:(id)arg1 switchPageViewFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)finderPageViewContainerDidEndSwitchingPage:(id)arg1;
- (void)finderPageViewContainerWillSwitchPage:(id)arg1 type:(unsigned long long)arg2;
- (double)heightOfDisableScrollPageArea;
- (id)finderPageViewContainer:(id)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (void)finderTabPageView:(id)arg1 didSelectFilterAtIndex:(unsigned long long)arg2;
- (void)finderTabPageView:(id)arg1 didSelectIndex:(unsigned long long)arg2 isTriggerByUser:(_Bool)arg3;
- (id)pageViewAtIndex:(unsigned long long)arg1;
- (id)tabViewAtIndex:(unsigned long long)arg1;
- (double)heightForTabViewAtIndex:(unsigned long long)arg1;
- (id)filterNameArrayAtIndex:(unsigned long long)arg1;
- (id)getTabViewArray;
- (id)getTabViewContainer;
- (double)heightForTabViewContainer;
- (id)getEmptyTipsConfig;
- (double)lengthForHeaderViewChangeAlpha;
- (id)getHeaderView;
- (double)heightForHeaderView;
- (double)getHoverOffset;
- (double)getTopInset;
- (unsigned long long)numberOfTabPage;
- (void)moveAllViewsAboveToPageViewAtIndex:(unsigned long long)arg1;
- (void)moveAllViewsAboveToTop;
- (void)updateTabViewContainerAlpha;
- (void)reload;
- (id)dequeuePageViewWithIdentifier:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)dequeueTabViewWithIdentifier:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)dequeueTabViewContainerWithIdentifier:(id)arg1;
- (id)dequeueHeaderViewWithIdentifier:(id)arg1;
- (void)registerClass:(Class)arg1 forPageViewIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forTabViewIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forTabViewContainerIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forHeaderViewIdentifier:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

