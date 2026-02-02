//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCSKAdNetworkItem;

@interface MBEventHandler_launchApplication
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
    unsigned int _showType;
    NSString *_sourceInfo;
    NSString *_bizInfo;
    WCSKAdNetworkItem *_skAdItem;
}

- (void).cxx_destruct;
- (_Bool)invokeInMainThread;
- (_Bool)launchAppleStoreWithSchemeUrl:(id)arg1 action:(unsigned int)arg2 context:(id)arg3 getError:(id *)arg4;
- (id)launchAppleStoreErrorWithCode:(long long)arg1 description:(id)arg2;
- (void)invoke:(id)arg1;
- (void)resetCacheParam;
- (id)apiName;

@end

