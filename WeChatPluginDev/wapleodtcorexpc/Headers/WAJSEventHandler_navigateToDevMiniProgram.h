//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAAppIdToUsernameTransfer;

@interface WAJSEventHandler_navigateToDevMiniProgram
{
    WAAppIdToUsernameTransfer *_appID2UserNameTransfer;
}

- (void).cxx_destruct;
- (void)navigateToMiniProgramWitAppID:(id)arg1 userName:(id)arg2 debugMode:(unsigned long long)arg3 pagePath:(id)arg4 extraData:(id)arg5 debugLaunchInfo:(id)arg6 scene:(unsigned long long)arg7 preScene:(unsigned long long)arg8 sceneNote:(id)arg9;
- (void)navigateToDevMiniProgramWithParam:(id)arg1 appID:(id)arg2 userName:(id)arg3;
- (void)handleJSEvent:(id)arg1;

@end

