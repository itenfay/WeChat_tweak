//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol WAJSEventHandlerContextDelegate;

@interface WAWasmBridgeService : NSObject
{
    void *_linker;
    id <WAJSEventHandlerContextDelegate> _context;
}

- (void).cxx_destruct;
- (id)getEventHandler:(id)arg1;
- (id)sourceOpenSDKAppID;
- (id)GetWebViewPluginByName:(id)arg1;
- (unsigned long long)getEnvironmentType;
- (id)getCurrentPageQuery;
- (id)getCurrentPageRelativePath;
- (id)getCurrentPagePath;
- (id)getLaunchPagePath;
- (unsigned long long)getLaunchScene;
- (id)getParentViewController;
- (id)getWAContact;
- (void)endWithResult:(id)arg1 handler:(id)arg2;
- (void)endWithResult:(id)arg1 callbackId:(unsigned int)arg2;
- (id)getAppId;
- (void)setupInvokeHandler:(id)arg1 param:(id)arg2 callbackId:(unsigned int)arg3 appId:(id)arg4;
- (void)setWasmBridgeLinker:(void *)arg1;
- (id)initWithContextDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

