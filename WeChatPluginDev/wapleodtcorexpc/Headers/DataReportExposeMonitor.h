//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DataReportViewExposeVisiableTools, NSArray, NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSNumber, NSString, UIViewController;

@interface DataReportExposeMonitor
{
    NSNumber *m_monitorSwitch;
    NSHashTable *m_monitorViews;
    NSHashTable *m_curExpViews;
    NSMapTable *m_monitorViewBlocks;
    NSMapTable *m_monitorPageBlocks;
    NSMapTable *m_monitorViewToPageMap;
    UIViewController *m_curPage;
    NSHashTable *m_curSubPages;
    double m_lastOffsetX;
    double m_lastOffsetY;
    unsigned long long m_lastScrollTimeMS;
    unsigned long long m_lastRunTaskTimeMS;
    double m_statusHeight;
    double m_navigationHeight;
    double m_screenWidth;
    double m_screenHeight;
    double m_keyboardHeight;
    _Bool m_isForeground;
    NSHashTable *m_curDelayExpViews;
    NSMapTable *m_delayExpViewsQueue;
    DataReportViewExposeVisiableTools *m_viewExposeVisiableTools;
    NSMutableDictionary *m_countOfViewId;
    NSArray *m_viewExposeLimitWhite;
    NSMutableArray *m_removeViewControllers;
}

- (void).cxx_destruct;
- (void)removeFirstViewId:(id)arg1;
- (void)clearViewId:(id)arg1;
- (void)statCountOfViewId:(id)arg1;
- (void)clearCountOfViewId;
- (void)setViewExposeVisiableToolsSwitch:(_Bool)arg1;
- (unsigned long long)getViewExposeMinTime:(id)arg1;
- (double)getViewExposeMinRate:(id)arg1;
- (void)checkDelayExpViewsQueue;
- (void)clearDelayExpViewsQueue;
- (void)removeDelayExpViewsQueue:(id)arg1;
- (_Bool)addDelayExpViewsQueue:(id)arg1 checkType:(unsigned long long)arg2 time:(unsigned long long)arg3;
- (id)traverseDelayExpViews:(id)arg1 checkType:(unsigned long long)arg2;
- (double)getViewExposeRate:(struct CGRect)arg1 originRect:(struct CGRect)arg2;
- (struct CGRect)getViewExposeRect:(struct CGRect)arg1 pageRect:(struct CGRect)arg2 isNavigationBar:(_Bool)arg3 ignoreKeyboardChange:(_Bool)arg4;
- (_Bool)rect:(struct CGRect)arg1 isInOther:(struct CGRect)arg2;
- (id)getViewRealisticContainerVCCache:(id)arg1;
- (_Bool)isNavigationBar:(id)arg1;
- (_Bool)isViewVisiable:(id)arg1 withCurPage:(id)arg2 withCurSubPages:(id)arg3;
- (id)getVisiableViews:(id)arg1;
- (void)traverseViews:(unsigned long long)arg1;
- (void)checkView:(id)arg1 checkType:(unsigned long long)arg2;
- (void)forceChangeExpState:(id)arg1 isExp:(_Bool)arg2;
- (void)postTraverseView:(unsigned long long)arg1 delay:(double)arg2 limitFrequency:(_Bool)arg3;
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
- (void)keyboardDidHide;
- (void)keyboardWillShow:(id)arg1;
- (void)subPageOut:(id)arg1;
- (void)subPageIn:(id)arg1;
- (void)pageRemove:(id)arg1;
- (void)pageChange:(id)arg1;
- (void)appBackground;
- (void)appForeground;
- (void)viewUnExpose:(id)arg1 checkType:(unsigned long long)arg2;
- (void)viewExpose:(id)arg1 checkType:(unsigned long long)arg2;
- (void)hookUIView:(id)arg1;
- (void)addViewDeallocListener:(id)arg1;
- (void)removeMonitorVCBlock:(id)arg1;
- (void)addMonitorVC:(id)arg1 exposeBlock:(CDUnknownBlockType)arg2;
- (void)removeMonitorVC:(id)arg1;
- (void)addMonitorVC:(id)arg1;
- (void)removeMonitorViewBlock:(id)arg1;
- (void)addMonitorView:(id)arg1 exposeBlock:(CDUnknownBlockType)arg2;
- (void)removeMonitorView:(id)arg1;
- (void)addMonitorView:(id)arg1;
- (_Bool)isOpenMonitor;
- (void)stopMonitor;
- (void)startMonitor;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

