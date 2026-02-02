//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface LiteAppJsApiLaunchApplication
{
    NSString *_appID;
    NSString *_launchAppID;
    NSString *_messageExt;
    NSString *_parameter;
    NSString *_scheme;
    NSString *_extraData;
    _Bool _bIsShowLaunchFailToast;
    NSString *_installSchemeUrl;
    unsigned int _installAction;
    _Bool _checkLaunchApp;
}

- (void).cxx_destruct;
- (_Bool)launchAppleStoreWithSchemeUrl:(id)arg1 action:(unsigned int)arg2 jumpAppStoreFlag:(int)arg3 getError:(id *)arg4;
- (_Bool)hasPermissionToLaunchWebStore;
- (id)launchAppleStoreErrorWithCode:(long long)arg1 description:(id)arg2;
- (void)sendReqLaunchAppWithShowType:(unsigned long long)arg1 jumpAppStoreFlag:(int)arg2;
- (void)onCheckResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (void)dealloc;

@end

