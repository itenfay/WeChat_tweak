//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableView.h>

@class MMTableViewReorder, WCGeneralMonitor, ZZTableViewChainModel;
@protocol WCGeneralMonitorDelegate;

@interface UITableView (ExtraCellLineHidden)
+ (CDUnknownBlockType)zz_create;
+ (CDUnknownBlockType)zz_createWithStyle;
- (void)setExtraCellLineHidden;
- (id)dequeueCellClass:(Class)arg1 forIndexPath:(id)arg2;
- (void)registerCellClass:(Class)arg1;
- (id)dequeueHeaderFooterClass:(Class)arg1;
- (void)registerHeaderFooterClass:(Class)arg1;
- (void)safeScrollToRowAtIndexPath:(id)arg1 atScrollPosition:(long long)arg2 animated:(_Bool)arg3;
@property double contentInsetRight;
@property double contentInsetLeft;
@property double contentInsetBottom;
@property double contentInsetTop;
@property double contentOffsetY;
@property double contentOffsetX;
- (void)setObserverType:(unsigned long long)arg1;
- (id)gm_cellForRowAtIndexPath:(id)arg1;
- (void)setIsInPage:(_Bool)arg1;
- (void)triggerGeneralMonitorCheck;
@property(nonatomic) double gm_sectionHeaderTopPadding;
- (void)monitorView:(id)arg1 unExposedCells:(id)arg2;
- (void)monitorView:(id)arg1 unExposedItems:(id)arg2;
- (void)monitorView:(id)arg1 newExposedCells:(id)arg2;
- (void)monitorView:(id)arg1 newExposedIds:(id)arg2;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (id)gm_cellToIndexPathMap;
@property(nonatomic) unsigned long long gm_observerType;
@property(retain, nonatomic) WCGeneralMonitor *generalMonitor;
@property(nonatomic) __weak id <WCGeneralMonitorDelegate> monitorDelegate;
@property(readonly, copy, nonatomic) ZZTableViewChainModel *zz_setup;
@property(readonly, nonatomic) MMTableViewReorder *reorder;
- (void)setReorder:(id)arg1;
@end

