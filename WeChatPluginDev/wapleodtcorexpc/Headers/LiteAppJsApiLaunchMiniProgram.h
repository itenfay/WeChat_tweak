//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSMutableArray, WAAppIdToUsernameTransfer;

@interface LiteAppJsApiLaunchMiniProgram
{
    WAAppIdToUsernameTransfer *_appIDTransfer;
    NSMutableArray *_widgetParameters;
    NSDictionary *_extraParamInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *extraParamInfo; // @synthesize extraParamInfo=_extraParamInfo;
@property(retain, nonatomic) NSMutableArray *widgetParameters; // @synthesize widgetParameters=_widgetParameters;
- (CDUnknownBlockType)getShareAction;
- (void)launchMiniProgramWithUserName:(id)arg1 pagePath:(id)arg2 referrerAppID:(id)arg3 currentURL:(id)arg4 debugMode:(unsigned long long)arg5 adUxInfo:(id)arg6 launchParam:(id)arg7;
- (void)launchMiniProgramWithAppID:(id)arg1 pagePath:(id)arg2 referrerAppID:(id)arg3 currentURL:(id)arg4 debugMode:(unsigned long long)arg5 adUxInfo:(id)arg6 launchParam:(id)arg7;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (id)init;

@end

