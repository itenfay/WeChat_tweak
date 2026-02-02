//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol WAJSCanvasJSEventHandlerContextDelegate;

@interface WAJSCanvasJSEventHandlerContext : NSObject
{
    NSString *_appId;
    id <WAJSCanvasJSEventHandlerContextDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WAJSCanvasJSEventHandlerContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)getSessionID;
- (id)GetWeAppPluginByName:(id)arg1;
- (unsigned int)getAppType;
- (unsigned int)getDebugModeType;
- (unsigned long long)getAppVersion;
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
- (id)getAppId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

