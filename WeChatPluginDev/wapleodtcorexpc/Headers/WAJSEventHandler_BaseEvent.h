//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSString, WAWebViewController;
@protocol WAJSEventHandlerContextDelegate;

@interface WAJSEventHandler_BaseEvent : NSObject
{
    _Bool _useTempPermission;
    _Bool _runInMainThread;
    _Bool _responseUseBase64;
    _Bool _noCallback;
    unsigned int _callbackId;
    unsigned int _appServiceType;
    unsigned int _contextId;
    unsigned int _workerId;
    id <WAJSEventHandlerContextDelegate> _context;
    WAWebViewController *_webviewController;
    MMUIViewController *_contextViewController;
    NSString *_permissionAppid;
    id _userInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool noCallback; // @synthesize noCallback=_noCallback;
@property(nonatomic) _Bool responseUseBase64; // @synthesize responseUseBase64=_responseUseBase64;
@property(copy, nonatomic) NSString *permissionAppid; // @synthesize permissionAppid=_permissionAppid;
@property(nonatomic) unsigned int workerId; // @synthesize workerId=_workerId;
@property(nonatomic) unsigned int contextId; // @synthesize contextId=_contextId;
@property(nonatomic) unsigned int appServiceType; // @synthesize appServiceType=_appServiceType;
@property(nonatomic) _Bool runInMainThread; // @synthesize runInMainThread=_runInMainThread;
@property(nonatomic) __weak MMUIViewController *contextViewController; // @synthesize contextViewController=_contextViewController;
@property(nonatomic) __weak WAWebViewController *webviewController; // @synthesize webviewController=_webviewController;
@property(nonatomic) _Bool useTempPermission; // @synthesize useTempPermission=_useTempPermission;
@property(nonatomic) __weak id <WAJSEventHandlerContextDelegate> context; // @synthesize context=_context;
@property(nonatomic) unsigned int callbackId; // @synthesize callbackId=_callbackId;
- (void)internalEndWithState:(long long)arg1 msg:(id)arg2 dic:(id)arg3;
- (void)macroEnd:(long long)arg1 optionalArg1:(id)arg2 optionalArg2:(id)arg3;
- (void)macroEndWithErrno:(id)arg1 msg:(id)arg2 dic:(id)arg3;
- (id)getNavigationController;
- (id)getValidWebViewController;
- (void)listenWebViewDidAppearCallBack:(CDUnknownBlockType)arg1;
- (id)JSAPIName;
- (void)handleJSEvent:(id)arg1;
- (_Bool)isHolderTaskKilled;
- (id)getWxaExternalInfo;
- (_Bool)isArrPlugin:(id)arg1 ContainsAppid:(id)arg2;
- (_Bool)checkIsValidPluginForPermissionAppid:(id)arg1;
- (_Bool)isNormalWeAppWithGameRuntime;
- (_Bool)isNormalWeApp;
- (_Bool)isSimulatedNativeWeApp;
- (_Bool)isGameApp;
- (id)getAppID;
- (void)sendEventToInvokeEnv:(id)arg1 dicParams:(id)arg2;
- (void)endWithResult:(id)arg1;

@end

