//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCSKAdNetworkItem;

@interface WAJSEventHandler_launchApplication
{
    NSString *_appID;
    NSString *_launchAppID;
    NSString *_messageExt;
    NSString *_parameter;
    NSString *_scheme;
    NSString *_extraData;
    _Bool _bIsShowLaunchFailToast;
    long long _operateDirectly;
    NSString *_installSchemeUrl;
    unsigned int _installAction;
    NSString *_sourceInfo;
    NSString *_bizInfo;
    WCSKAdNetworkItem *_skAdItem;
}

- (void).cxx_destruct;
- (_Bool)launchAppleStoreWithSchemeUrl:(id)arg1 action:(unsigned int)arg2 jumpAppStoreFlag:(int)arg3 context:(id)arg4 getError:(id *)arg5;
- (_Bool)hasPermissionToLaunchWebStore;
- (id)launchAppleStoreErrorWithCode:(long long)arg1 description:(id)arg2;
- (void)sendReqLaunchAppWithShowType:(unsigned long long)arg1 jumpAppStoreFlag:(int)arg2;
- (void)onCheckResponse:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)handleJSEvent:(id)arg1;
- (void)resetCacheParam;

@end

