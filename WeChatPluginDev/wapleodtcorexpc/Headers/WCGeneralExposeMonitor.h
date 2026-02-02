//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSHashTable, NSMapTable, NSNumber, NSString, UIViewController;

@interface WCGeneralExposeMonitor
{
    NSNumber *m_monitorSwitch;
    NSHashTable *m_monitorViews;
    NSHashTable *m_curExpViews;
    NSMapTable *m_monitorViewBlocks;
    NSMapTable *m_monitorPageBlocks;
    NSMapTable *m_monitorViewToPageMap;
    UIViewController *m_curPage;
    NSMapTable *m_viewExposeRates;
    NSMapTable *m_viewExposeMinTimes;
    double m_lastOffsetX;
    double m_lastOffsetY;
    unsigned long long m_lastScrollTimeMS;
    unsigned long long m_runTaskTimeMS;
    double m_statusHeight;
    double m_navigationHeight;
    double m_screenWidth;
    double m_screenHeight;
    _Bool m_isForeground;
    NSHashTable *m_curDelayExpViews;
    NSMapTable *m_delayExpViewsQueue;
}

- (void).cxx_destruct;
- (void)checkDelayExpViewsQueue;
- (void)clearDelayExpViewsQueue;
- (void)removeDelayExpViewsQueue:(id)arg1;
- (_Bool)addDelayExpViewsQueue:(id)arg1 checkType:(unsigned long long)arg2 time:(unsigned long long)arg3;
- (id)traverseDelayExpViews:(id)arg1 checkType:(unsigned long long)arg2;
- (double)getViewExposeRate:(struct CGRect)arg1 originRect:(struct CGRect)arg2;
- (struct CGRect)getViewExposeRect:(struct CGRect)arg1 pageRect:(struct CGRect)arg2 isNavigationBar:(_Bool)arg3;
- (_Bool)rect:(struct CGRect)arg1 isInOther:(struct CGRect)arg2;
- (_Bool)isViewVisiable:(id)arg1 withCurPage:(id)arg2;
- (id)getVisiableViews:(id)arg1;
- (void)traverseViews:(unsigned long long)arg1;
- (void)checkView:(id)arg1 checkType:(unsigned long long)arg2;
- (void)forceChangeExpState:(id)arg1 isExp:(_Bool)arg2;
- (void)postTraverseView:(unsigned long long)arg1 delay:(double)arg2;
- (void)onScrollViewDidScroll:(id)arg1;
- (void)onWillRemoveSubview:(id)arg1;
- (void)onRemoveFromSuperview:(id)arg1;
- (void)onLayoutSubviews:(id)arg1;
- (void)onSetAlpha:(double)arg1 withView:(id)arg2;
- (void)onSetHidden:(_Bool)arg1 withView:(id)arg2;
- (void)onInsertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)onInsertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)onSendSubviewToBack:(id)arg1;
- (void)onBringSubviewToFront:(id)arg1;
- (void)onDidMoveToWindow:(id)arg1;
- (void)onDidMoveToSuperview:(id)arg1;
- (void)pageChange:(id)arg1;
- (void)appBackground;
- (void)appForeground;
- (void)viewUnExpose:(id)arg1 checkType:(unsigned long long)arg2;
- (void)viewExpose:(id)arg1 checkType:(unsigned long long)arg2;
- (void)hookUIView:(id)arg1;
- (void)addViewDeallocListener:(id)arg1;
- (void)removeMonitorVCBlock:(id)arg1;
- (void)addMonitorVC:(id)arg1 exposeBlock:(CDUnknownBlockType)arg2 exposeRate:(double)arg3 exposeMinTime:(unsigned long long)arg4;
- (void)removeMonitorViewBlock:(id)arg1;
- (void)addMonitorView:(id)arg1 exposeBlock:(CDUnknownBlockType)arg2 exposeRate:(double)arg3 exposeMinTime:(unsigned long long)arg4;
- (_Bool)isOpenMonitor;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

