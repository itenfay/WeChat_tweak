//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WSWebViewPluginScheduler;

@interface LiteAppJsApiPlugin_LocalJSAgent
{
    WSWebViewPluginScheduler *_pluginScheduler;
    long long _k1kCategoryId;
}

+ (id)preloadPlugins;
- (void).cxx_destruct;
@property(nonatomic) long long k1kCategoryId; // @synthesize k1kCategoryId=_k1kCategoryId;
@property(retain, nonatomic) WSWebViewPluginScheduler *pluginScheduler; // @synthesize pluginScheduler=_pluginScheduler;
- (void)sendEvent:(id)arg1 withParams:(id)arg2 sendAfterReady:(_Bool)arg3;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)communicator;
- (unsigned long long)localJSBizType;
- (id)getCurViewController;
- (id)getLocalJSLogic;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

