//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSHashTable, NSNumber, NSString, UIView;

@interface DataReportOperateMonitor
{
    NSNumber *m_monitorSwitch;
    NSNumber *m_isOpenDebugToast;
    unsigned long long m_toastIndex;
    NSHashTable *m_monitorViews;
    unsigned long long m_touchBeganTimestamp;
    _Bool m_hasTouchMoveed;
    UIView *m_touchBeganView;
    UIView *m_clickView;
    UIView *m_longPressView;
    UIView *m_doubleTapView;
    unsigned long long m_lastBeganTouchTime;
}

- (void).cxx_destruct;
- (void)clearViewId:(id)arg1;
- (void)onGesture:(id)arg1 withTarget:(id)arg2 withAction:(id)arg3;
- (void)onSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
- (void)onSendEventEnded:(id)arg1;
- (void)onSendEventBegan:(id)arg1;
- (void)showDebugInfoSheetView:(id)arg1;
- (void)showDebugToast:(id)arg1 text:(id)arg2;
- (void)setViewOperateVisiableToolsSwitch:(_Bool)arg1;
- (_Bool)isControlClickEvent:(id)arg1;
- (id)getRealisticOperateView:(id)arg1;
- (void)viewLongPressTask;
- (void)viewClickTask;
- (void)onTouchEnded:(id)arg1 touch:(id)arg2;
- (void)onTouchMoved:(id)arg1 touch:(id)arg2;
- (void)onTouchBegan:(id)arg1 touch:(id)arg2;
- (void)onSendEvent:(id)arg1;
- (void)removeMonitorView:(id)arg1;
- (void)addMonitorView:(id)arg1;
- (_Bool)isOpenDebugToast;
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

