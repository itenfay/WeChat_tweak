//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSThread, WACanvasPluginScheduler, WAJSNativeBufferBase;
@protocol WAJSCanvasBaseServiceDelegate;

@interface WAJSCanvasBaseService : NSObject
{
    id <WAJSCanvasBaseServiceDelegate> _delegate;
    NSThread *_thread;
    WACanvasPluginScheduler *_pluginScheduler;
    NSMutableArray *_eventHandlers;
    NSMutableArray *_eventHandlersContext;
    WAJSNativeBufferBase *_nativeBufferBase;
}

- (void).cxx_destruct;
@property(retain) WAJSNativeBufferBase *nativeBufferBase; // @synthesize nativeBufferBase=_nativeBufferBase;
@property(retain, nonatomic) NSMutableArray *eventHandlersContext; // @synthesize eventHandlersContext=_eventHandlersContext;
@property(retain, nonatomic) NSMutableArray *eventHandlers; // @synthesize eventHandlers=_eventHandlers;
@property(retain, nonatomic) WACanvasPluginScheduler *pluginScheduler; // @synthesize pluginScheduler=_pluginScheduler;
@property(retain) NSThread *thread; // @synthesize thread=_thread;
@property(nonatomic) __weak id <WAJSCanvasBaseServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getDataFromAppPkgFullPath:(id)arg1;
- (id)getWeAppPluginByName:(id)arg1;
- (id)getWebViewPluginByName:(id)arg1;
- (id)getParentViewController;
- (void)__innerEndWithResultWithParams:(id)arg1;
- (void)endWithResultWithParams:(id)arg1 handler:(id)arg2 context:(id)arg3;
- (id)hookClassNameWithEventName:(id)arg1;
- (void)setupInvokeHandler:(id)arg1 param:(id)arg2 callbackId:(unsigned int)arg3 appId:(id)arg4;
- (void)setupWeAppJSAPI:(id)arg1;
- (void)injectWxConfig:(id)arg1;
- (void)weAppJsApiCallbackWithScript:(id)arg1;
- (void)injectWeiXinNativeBuffer:(id)arg1;
- (void)initNativeBuffer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

