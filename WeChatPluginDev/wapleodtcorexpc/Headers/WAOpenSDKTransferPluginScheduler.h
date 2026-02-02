//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, WAOpenSDKJSEventHandlerContext;

@interface WAOpenSDKTransferPluginScheduler : NSObject
{
    WAOpenSDKJSEventHandlerContext *_openSDKContext;
    NSDictionary *_webviewPluginPool;
    NSDictionary *_servicePluginPool;
    long long _apiFrom;
}

+ (id)schedulerWithApiFrom:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long apiFrom; // @synthesize apiFrom=_apiFrom;
@property(retain, nonatomic) NSDictionary *servicePluginPool; // @synthesize servicePluginPool=_servicePluginPool;
@property(retain, nonatomic) NSDictionary *webviewPluginPool; // @synthesize webviewPluginPool=_webviewPluginPool;
@property(retain, nonatomic) WAOpenSDKJSEventHandlerContext *openSDKContext; // @synthesize openSDKContext=_openSDKContext;
- (void)_handleServiceEvent:(long long)arg1 userInfo:(id)arg2;
- (void)_handleWebViewEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (unsigned long long)servicePlugin_getEnvironmentType;
- (id)getFileData:(id)arg1;
- (id)getCurrentPageQuery;
- (id)getCurrentPageRelativePath;
- (id)getCurrentPagePath;
- (id)getParentViewController;
- (_Bool)isNormalWeAppWithGameRuntime;
- (_Bool)isNormalWeApp;
- (_Bool)isSimulatedNativeWeApp;
- (_Bool)isGameApp;
- (id)getWAContact;
- (id)getAppId;
- (unsigned long long)webviewPlugin_getEnvironmentType;
- (void)exit;
- (id)GetServicePluginWithName:(id)arg1;
- (id)GetWebViewPluginWithName:(id)arg1;
- (void)sendServiceEvent:(long long)arg1 userInfo:(id)arg2;
- (void)sendWebViewEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)setupEvent;
- (void)setupServicePlugin;
- (void)setupWebViewPlugin;
- (void)setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

