//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray, NSMutableDictionary, NSString, UIScrollView, UIWindow;
@protocol WCGeneralMonitorDelegate;

@interface WCGeneralMonitor : NSObject
{
    UIScrollView *m_scrollView;
    UIWindow *m_uiWindow;
    NSMutableArray *m_lastVisiableItems;
    NSMutableArray *m_lastVisiableIds;
    NSMutableDictionary *m_lastVisiableCellBizIds;
    NSHashTable *m_lastVisiableCells;
    double m_lastOffsetX;
    double m_lastOffsetY;
    unsigned long long m_lastTimeMS;
    struct CGRect m_statusRect;
    double m_statusNavHeight;
    _Bool m_isInPage;
    _Bool m_isInScreem;
    _Bool m_isInitMonitor;
    _Bool m_isCheckItemExposed;
    unsigned long long m_nearbyLiveSubTabIndex;
    unsigned long long m_nearbyLiveSubTabScene;
    unsigned long long m_totalCostTime;
    unsigned long long m_totalCostCount;
    _Bool m_isHidden;
    id <WCGeneralMonitorDelegate> _monitorDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCGeneralMonitorDelegate> monitorDelegate; // @synthesize monitorDelegate=_monitorDelegate;
- (id)getMonitorCell:(id)arg1 withIndexPath:(id)arg2;
- (id)getMonitorCellId:(id)arg1;
- (void)setNearbyLiveSubTabScene:(unsigned long long)arg1;
- (void)setNearbyLiveSubTabIndex:(unsigned long long)arg1;
- (void)setIsInPage:(_Bool)arg1;
- (void)triggerCheck:(id)arg1;
- (void)triggerCheckIfNeededWithScrollView:(id)arg1;
- (id)getVisibleIndexPaths;
- (_Bool)isNeedMonitor:(id)arg1;
- (_Bool)isEqualCellBizId:(id)arg1 lastCellBizId:(id)arg2;
- (_Bool)isInScreem:(id)arg1;
- (void)checkItemExposed:(id)arg1 unVisibleIndexPaths:(id)arg2;
- (void)onCellForRowAtIndexPath:(id)arg1 indexPath:(id)arg2;
- (void)onScrollViewDidEndDecelerating:(id)arg1;
- (void)onScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)onScrollViewDidScroll:(id)arg1;
- (void)onDidEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)onSetHidden:(id)arg1 hidden:(_Bool)arg2;
- (void)onDeleteItemsAtIndexPaths:(id)arg1;
- (void)onInsertItemsAtIndexPaths:(id)arg1;
- (void)onDeleteSections:(id)arg1;
- (void)onInsertSections:(id)arg1;
- (void)onDeleteRowsAtIndexPathsWithRowAnimation:(id)arg1;
- (void)onInsertRowsAtIndexPathsWithRowAnimation:(id)arg1;
- (void)onDeleteSectionsWithRowAnimation:(id)arg1;
- (void)onInsertSectionsWithRowAnimation:(id)arg1;
- (void)onReloadItemsAtIndexPaths:(id)arg1;
- (void)onReloadSections:(id)arg1;
- (void)onReloadRowsAtIndexPaths:(id)arg1;
- (void)onReloadData:(id)arg1;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)onNearbySubTabDisappear:(unsigned long long)arg1 withScene:(unsigned long long)arg2;
- (void)onNearbySubTabAppear:(unsigned long long)arg1 withScene:(unsigned long long)arg2;
- (void)onViewDidDisappear:(id)arg1;
- (void)onViewDidAppear:(id)arg1;
- (void)dealloc;
- (void)initMonitor;
- (id)initWithView:(id)arg1 observerType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

