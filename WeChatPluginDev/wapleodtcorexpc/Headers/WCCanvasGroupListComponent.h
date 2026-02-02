//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMScrollView, MMTimer, NSMutableArray, NSString, UILabel, UIView, WCCanvasAdPageIndicator, WCCanvasArrowRightIcon;

@interface WCCanvasGroupListComponent
{
    _Bool _needRelayout;
    _Bool _shouldFixSearchCanvas;
    _Bool _carouselRunningFlag;
    _Bool _componentAppearedFlag;
    _Bool _componentBackgroundFlag;
    _Bool _componentDraggingFlag;
    _Bool _turnPageAnimatingFlag;
    unsigned int _m_iCurIndex;
    UIView *_m_blackMask;
    MMScrollView *_m_scrollView;
    WCCanvasAdPageIndicator *_pageIndicator;
    NSMutableArray *_m_arrTable;
    UILabel *_m_pageLabel;
    long long _pageLabelCurrentPage;
    WCCanvasArrowRightIcon *_arrowRightIcon;
    MMTimer *_autoCarouselTimer;
}

+ (double)calcHeightForTableViewWithGroup:(id)arg1 maxWidth:(double)arg2 advertiseInfo:(id)arg3 orientation:(long long)arg4;
+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool turnPageAnimatingFlag; // @synthesize turnPageAnimatingFlag=_turnPageAnimatingFlag;
@property(nonatomic) _Bool componentDraggingFlag; // @synthesize componentDraggingFlag=_componentDraggingFlag;
@property(nonatomic) _Bool componentBackgroundFlag; // @synthesize componentBackgroundFlag=_componentBackgroundFlag;
@property(nonatomic) _Bool componentAppearedFlag; // @synthesize componentAppearedFlag=_componentAppearedFlag;
@property(nonatomic) _Bool carouselRunningFlag; // @synthesize carouselRunningFlag=_carouselRunningFlag;
@property(retain, nonatomic) MMTimer *autoCarouselTimer; // @synthesize autoCarouselTimer=_autoCarouselTimer;
@property(nonatomic) _Bool shouldFixSearchCanvas; // @synthesize shouldFixSearchCanvas=_shouldFixSearchCanvas;
@property(nonatomic) _Bool needRelayout; // @synthesize needRelayout=_needRelayout;
@property(retain, nonatomic) WCCanvasArrowRightIcon *arrowRightIcon; // @synthesize arrowRightIcon=_arrowRightIcon;
@property(nonatomic) long long pageLabelCurrentPage; // @synthesize pageLabelCurrentPage=_pageLabelCurrentPage;
@property(retain, nonatomic) UILabel *m_pageLabel; // @synthesize m_pageLabel=_m_pageLabel;
@property(retain, nonatomic) NSMutableArray *m_arrTable; // @synthesize m_arrTable=_m_arrTable;
@property(nonatomic) unsigned int m_iCurIndex; // @synthesize m_iCurIndex=_m_iCurIndex;
@property(retain, nonatomic) WCCanvasAdPageIndicator *pageIndicator; // @synthesize pageIndicator=_pageIndicator;
@property(retain, nonatomic) MMScrollView *m_scrollView; // @synthesize m_scrollView=_m_scrollView;
@property(retain, nonatomic) UIView *m_blackMask; // @synthesize m_blackMask=_m_blackMask;
- (void)setPageIndicatorFrame;
- (void)updatePageIndicatorByScrollView;
- (void)turnPage;
- (void)turnPageImmediatelyAndInitTimer;
- (void)stopAutoCarousel;
- (void)tryStartAutoCarousel;
- (void)adjustScrollView;
- (long long)getViewIndexFromDataIndex:(long long)arg1;
- (long long)getDataIndexFromViewIndex:(long long)arg1;
- (_Bool)hasPreloadWebViewInScrollGroupComponent;
- (double)getPreloadWebViewBottomInScrollGroupComponent;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)componentWillEnterForeground;
- (void)componentDidEnterBackground;
- (void)componentReportAddExposureCountWithPage:(long long)arg1;
- (void)notifyDisappearPage:(long long)arg1;
- (void)notifyFullyAppearPage:(long long)arg1;
- (void)notifyWillAppearPage:(long long)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)initArrowRightIcon;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setPageCtrlColorFor:(unsigned int)arg1;
- (void)setPageCtrlTo:(unsigned int)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)shareComponentDidBeClickedWithType:(long long)arg1;
- (id)randomPickFetchRandomPickCardComponent;
- (_Bool)encoreShakeShouldForbidShakeSpecialView;
- (void)componentReportAddExposureCount;
- (void)componentWillResumeState:(_Bool)arg1;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentDidFullyAppearInMainScreen:(_Bool)arg1;
- (void)componentWillAppearInMainScreen:(_Bool)arg1;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (_Bool)shouldShowDownDirectionIcon;
- (_Bool)shouldForbidDelegateShowArrowDown;
- (_Bool)shouldShowRightDirectionIcon:(int)arg1;
- (void)addItemToScrollView;
- (void)animationShowWithIndex:(unsigned long long)arg1;
- (void)resetScrollView;
- (void)clearStatus;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

