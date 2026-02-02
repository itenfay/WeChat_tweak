//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WAContact, WAOpenSDKJSEventHandlerContext, WAOpenSDKTransferPluginScheduler;
@protocol WAOpenSDKJSAPIContextAdapterDelegate;

@interface WAOpenSDKJSAPIContextAdapter : NSObject
{
    WAContact *_contact;
    id <WAOpenSDKJSAPIContextAdapterDelegate> _delegate;
    WAOpenSDKTransferPluginScheduler *_pluginScheduler;
    NSString *_transitiveData;
    WAOpenSDKJSEventHandlerContext *_openSDKContext;
    long long _apiFrom;
}

- (void).cxx_destruct;
@property(nonatomic) long long apiFrom; // @synthesize apiFrom=_apiFrom;
@property(retain, nonatomic) WAOpenSDKJSEventHandlerContext *openSDKContext; // @synthesize openSDKContext=_openSDKContext;
@property(copy, nonatomic) NSString *transitiveData; // @synthesize transitiveData=_transitiveData;
@property(retain, nonatomic) WAOpenSDKTransferPluginScheduler *pluginScheduler; // @synthesize pluginScheduler=_pluginScheduler;
@property(nonatomic) __weak id <WAOpenSDKJSAPIContextAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
- (id)_fullPagePath;
- (id)getCurPubResLogic;
- (unsigned int)getCurTaskRunningState;
- (_Bool)isIgnoreRemoteCheckDomain;
- (_Bool)isDebugAndVConsoleOpen;
- (void)printConsoleLog:(id)arg1;
- (id)getEventHandler:(id)arg1;
- (id)sourceOpenSDKAppID;
- (_Bool)isParentViewControllerDidAppear:(id)arg1;
- (id)getWxaExternalInfo;
- (_Bool)isService;
- (id)GetWeAppPluginByName:(id)arg1;
- (id)GetWebViewPluginByName:(id)arg1;
- (unsigned long long)getEnvironmentType;
- (id)getCurrentPageQuery;
- (id)getCurrentPageRelativePath;
- (id)getCurrentPagePath;
- (id)getLaunchPagePath;
- (unsigned long long)getLaunchScene;
- (id)getParentViewController;
- (void)sendResultBeforeEnd:(id)arg1 resultType:(long long)arg2 handler:(id)arg3;
- (id)getWAContact;
- (unsigned int)getAppType;
- (unsigned int)getDebugModeType;
- (unsigned long long)getAppVersion;
- (void)endWithResult:(id)arg1 handler:(id)arg2;
- (id)getAppId;
- (id)initWithWAContact:(id)arg1 apiFrom:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

