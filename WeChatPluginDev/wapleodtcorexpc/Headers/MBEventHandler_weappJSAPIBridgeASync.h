//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAJSEventHandler_BaseEvent;

@interface MBEventHandler_weappJSAPIBridgeASync
{
    WAJSEventHandler_BaseEvent *_bridgeWeAppHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAJSEventHandler_BaseEvent *bridgeWeAppHandler; // @synthesize bridgeWeAppHandler=_bridgeWeAppHandler;
- (id)sourceOpenSDKAppID;
- (id)getEventHandler:(id)arg1;
- (_Bool)isService;
- (_Bool)isIgnoreRemoteCheckDomain;
- (_Bool)isDebugAndVConsoleOpen;
- (id)GetWeAppPluginByName:(id)arg1;
- (id)getWebViewPluginByName:(id)arg1;
- (unsigned long long)getEnvironmentType;
- (id)getCurrentPageQuery;
- (id)getCurrentPageRelativePath;
- (id)getCurrentPagePath;
- (id)getLaunchPagePath;
- (unsigned long long)getLaunchScene;
- (id)getParentViewController;
- (id)getWAContact;
- (unsigned int)getDebugModeType;
- (unsigned long long)getAppVersion;
- (id)getAppId;
- (void)sendEventToInvokeEnv:(id)arg1 dicParams:(id)arg2;
- (void)endWithResult:(id)arg1 handler:(id)arg2;
- (id)getInvokeFromAppid;
- (_Bool)fixedPermission;
- (id)jsapiContext;
- (void)invoke:(id)arg1;
- (id)weappJSApiClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

