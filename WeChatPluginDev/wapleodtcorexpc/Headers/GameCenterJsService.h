//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameCenterJSEventLogicHandler, JSContext, JSVirtualMachine, NSMutableDictionary, NSString, NSThread;

@interface GameCenterJsService
{
    GameCenterJSEventLogicHandler *_jsEventHandler;
    NSString *_state;
    JSContext *_jsContext;
    JSVirtualMachine *_jsVirtualMachine;
    NSMutableDictionary *_timerObjs;
    NSThread *_thread;
}

- (void).cxx_destruct;
@property(retain) NSThread *thread; // @synthesize thread=_thread;
@property(retain) NSMutableDictionary *timerObjs; // @synthesize timerObjs=_timerObjs;
@property(retain, nonatomic) JSVirtualMachine *jsVirtualMachine; // @synthesize jsVirtualMachine=_jsVirtualMachine;
@property(retain, nonatomic) JSContext *jsContext; // @synthesize jsContext=_jsContext;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
- (void)mm_traitCollectionDidChange:(id)arg1;
- (void)onSimCardNetTypeChange;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)releaseJsContext;
- (void)stopThread;
- (void)destroy;
- (id)getNetType;
- (void)changeState:(id)arg1;
- (void)executeBlock:(CDUnknownBlockType)arg1;
- (void)evaluateScript:(id)arg1 scriptName:(id)arg2;
- (void)evaluate:(id)arg1;
- (void)evaluateScript:(id)arg1;
- (void)injectPublicLib;
- (void)injectJsbridge;
- (void)injectSystemInfo;
- (void)onTimer:(id)arg1;
- (unsigned int)addTimer:(unsigned int)arg1 withTime:(float)arg2 isRepeat:(_Bool)arg3;
- (void)setupTimerHandler:(id)arg1;
- (void)setupJsApiInvoke:(id)arg1;
- (void)attachNativeMethod;
- (void)initJsApi;
- (void)setupJSErrorHandler;
- (void)dealloc;
- (void)runThread:(id)arg1;
- (void)startServerThread;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

