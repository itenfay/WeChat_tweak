//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, WebViewA8KeyLogicImpl;

@interface MMLiteAppGetA8Key : NSObject
{
    WebViewA8KeyLogicImpl *_a8keyLogic;
    NSMutableDictionary *_mCache;
    NSMutableDictionary *_mPreAuthCallback;
}

+ (id)getInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *mPreAuthCallback; // @synthesize mPreAuthCallback=_mPreAuthCallback;
@property(retain, nonatomic) NSMutableDictionary *mCache; // @synthesize mCache=_mCache;
@property(retain, nonatomic) WebViewA8KeyLogicImpl *a8keyLogic; // @synthesize a8keyLogic=_a8keyLogic;
- (void)onJumpToAppStoreControlWithUrl:(id)arg1;
- (void)onGetA8KeyWithRequestUrl:(id)arg1 fullUrl:(id)arg2 header:(id)arg3;
- (void)saveJSAPIPermissionsInOfflineCache:(id)arg1 url:(id)arg2;
- (void)saveJSAPIPermissions:(id)arg1 url:(id)arg2;
- (void)saveJSAPIAuthInfo:(id)arg1;
- (void)onJumpToEmoticonDetailViewController:(id)arg1;
- (void)onJumpToViewController:(id)arg1;
- (void)onJumpToSafariWithUrl:(id)arg1;
- (void)onUpdatedPermisson;
- (void)onGetA8Key:(_Bool)arg1 ReqUrl:(id)arg2 Reason:(int)arg3;
- (void)runOnMainThread:(CDUnknownBlockType)arg1;
- (void)cleanTimeoutCache:(id)arg1;
- (void)getPreAuthInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)preAuth:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

