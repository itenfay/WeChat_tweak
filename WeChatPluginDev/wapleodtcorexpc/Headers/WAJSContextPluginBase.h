//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAJSContextPluginDelegateCenter;
@protocol WAJSServicePluginContextProtocol;

@interface WAJSContextPluginBase
{
    _Bool _usingLocation;
    _Bool _usingLocationBackground;
    _Bool _isRecording;
    _Bool _usingBluetoothBackground;
    id <WAJSServicePluginContextProtocol> _serviceContext;
    id <WAJSServicePluginContextProtocol> _context;
    unsigned long long _runningState;
    unsigned long long _taskRunningState;
    WAJSContextPluginDelegateCenter *_delegateCenter;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool usingBluetoothBackground; // @synthesize usingBluetoothBackground=_usingBluetoothBackground;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(nonatomic) _Bool usingLocationBackground; // @synthesize usingLocationBackground=_usingLocationBackground;
@property(nonatomic) _Bool usingLocation; // @synthesize usingLocation=_usingLocation;
@property(retain, nonatomic) WAJSContextPluginDelegateCenter *delegateCenter; // @synthesize delegateCenter=_delegateCenter;
@property(nonatomic) unsigned long long taskRunningState; // @synthesize taskRunningState=_taskRunningState;
@property(nonatomic) unsigned long long runningState; // @synthesize runningState=_runningState;
@property(readonly, nonatomic) __weak id <WAJSServicePluginContextProtocol> context; // @synthesize context=_context;
@property(nonatomic) __weak id <WAJSServicePluginContextProtocol> serviceContext; // @synthesize serviceContext=_serviceContext;
- (void)pluginDidCreated;
- (_Bool)isNormalWeAppWithGameRuntime;
- (_Bool)isNormalWeApp;
- (_Bool)isSimulatedNativeWeApp;
- (_Bool)isGameApp;
- (id)getAppID;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)setJSContextOwner:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)setDelegateCenterProtocol:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

