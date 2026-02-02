//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface MMLiveReportEventMgr
{
    NSMutableDictionary *_handlerObjects;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *handlerObjects; // @synthesize handlerObjects=_handlerObjects;
- (void)onUIOrientationChanged:(id)arg1;
- (void)onActionSheetClicked:(id)arg1 buttonAtIndex:(long long)arg2 controller:(id)arg3;
- (void)onSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
- (void)onSendEvent:(id)arg1;
- (void)unRegisterReportHandlerClass:(Class)arg1;
- (void)registerReportHandlerClass:(Class)arg1;
- (id)sessionIdOfHandlerClass:(Class)arg1;
- (void)bindSessionId:(id)arg1 withHandlerClass:(Class)arg2;
- (void)unRegisterNotification;
- (void)registerNotification;
- (void)unRegisterExtension;
- (void)registerExtension;
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

