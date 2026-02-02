//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, WAPermissionUserAuthTask, WxaExternalInfo;
@protocol WAPermissionUserAuthImplDelegate;

@interface WAPermissionUserAuthImpl : NSObject
{
    unsigned int _debugModeType;
    WxaExternalInfo *_externalInfo;
    NSMutableArray *_arrAuthTaskWaitQueue;
    WAPermissionUserAuthTask *_runningTask;
    NSMutableDictionary *_dicAuthInfo;
    id <WAPermissionUserAuthImplDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WAPermissionUserAuthImplDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTransferAuthDidCompelete:(id)arg1 jsapiName:(id)arg2 transferHandler:(CDUnknownBlockType)arg3 result:(id)arg4 scene:(unsigned long long)arg5;
- (void)authTaskComplete:(id)arg1;
- (void)authFailWithJSAPI:(id)arg1 failHandler:(CDUnknownBlockType)arg2 errMsg:(id)arg3 errNo:(unsigned int)arg4 scene:(unsigned long long)arg5;
- (void)authOKWithJSAPI:(id)arg1 handler:(CDUnknownBlockType)arg2 scene:(unsigned long long)arg3;
- (void)saveAuthInfo:(id)arg1 withJSAPI:(id)arg2;
- (id)getAuthInfoWithJSAPI:(id)arg1;
- (void)updateAuthInfoOKForJSAPI:(id)arg1 source:(unsigned long long)arg2;
- (void)asyncRemoveRunningAuthTask:(id)arg1;
- (void)removeRunningAuthTask:(id)arg1;
- (void)checkUserAuthWaitQueue;
- (id)popAuthTaskInWaitQueue;
- (void)addAuthWaitQueue:(id)arg1;
- (void)mainThread_checkUserAuthWithAPPID:(id)arg1 permissionAppID:(id)arg2 jsapi:(id)arg3 model:(id)arg4 handler:(CDUnknownBlockType)arg5 failHandler:(CDUnknownBlockType)arg6 transferHandler:(CDUnknownBlockType)arg7 scene:(unsigned long long)arg8;
- (void)mainThread_resetAuthInfo;
- (void)resetAuthInfo;
- (void)checkUserAuthWithAPPID:(id)arg1 permissionAppID:(id)arg2 jsapi:(id)arg3 model:(id)arg4 handler:(CDUnknownBlockType)arg5 failHandler:(CDUnknownBlockType)arg6 transferHandler:(CDUnknownBlockType)arg7 scene:(unsigned long long)arg8;
- (void)dealloc;
- (id)initWithDebugModeType:(unsigned int)arg1 externalInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

