//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class JSContext, NSDictionary, WAJSEventHandler_BaseEvent, WAServiceEventParam;

@protocol WAJSServiceProtocol <NSObject>
- (void)resumeWorkingThreadToDie:(_Bool)arg1;
- (void)suspendWorkingThread;
- (void)endWithResult:(NSDictionary *)arg1 handler:(WAJSEventHandler_BaseEvent *)arg2 callbackID:(unsigned int)arg3 contextId:(unsigned int)arg4 workerId:(unsigned int)arg5;
- (void)sendInnerAppBrandEvent:(long long)arg1 serviceParam:(NSDictionary *)arg2 pluginParam:(NSDictionary *)arg3 webviewID:(unsigned long long)arg4;
- (void)innerSendJSEventToService:(WAServiceEventParam *)arg1;
- (void)startServiceThread:(unsigned long long)arg1;
- (void)startServiceThread;

@optional
- (void)onSubContextCreate:(JSContext *)arg1 contextId:(unsigned int)arg2 newInst:(_Bool)arg3;
@end

