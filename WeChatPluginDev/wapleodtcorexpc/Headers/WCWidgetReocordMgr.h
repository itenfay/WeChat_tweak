//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCWidgetReocordMgr
{
    NSMutableArray *_eventList;
    struct CGPoint _touchBeginPoint;
    struct timeval _touchBeginTimeStamp;
    _Bool _bSensitive;
    _Bool _bNeedDebugInfo;
    _Bool _needRecord;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needRecord; // @synthesize needRecord=_needRecord;
- (void)printWidgetEvent:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (_Bool)isSensitiveWidget:(id)arg1;
- (_Bool)removeWidgetRecordForPage:(id)arg1 andTimeStamp:(unsigned int)arg2;
- (id)getWidgetRecordForPage:(id)arg1 andTimeStamp:(unsigned int)arg2;
- (_Bool)saveWidgetRecordForPage:(id)arg1 andTimeStamp:(unsigned int)arg2;
- (_Bool)isKindOfMonitorGesture:(id)arg1;
- (void)recordTouchEvent:(id)arg1;
- (void)onSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
- (void)onSendEvent:(id)arg1;
- (id)getAndRemoveWidgetRecord;
- (void)recordEvent:(id)arg1;
- (void)dealloc;
- (void)onServiceMemoryWarning;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

