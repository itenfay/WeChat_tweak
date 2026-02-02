//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString, YtExtraOptions;

@interface NetworkConfigFetchState
{
    _Bool needLocalConfig;
    NSString *appId;
    NSString *configUrl;
    int changePointNum;
    NSString *extraConfig;
    YtExtraOptions *extraOptions;
    NSString *controlConfig;
    NSDictionary *selectData;
    int backendProtoType;
}

- (void).cxx_destruct;
- (void)responseHandler:(id)arg1 error:(id)arg2;
- (void)handleGetLiveTypeReq;
- (void)handleLiveFourGetReq;
- (void)sendUIEventWithValue:(id)arg1 withType:(id)arg2;
- (void)moveToNextState;
- (void)enter;
- (void)loadWithName:(id)arg1 withSDKConfigData:(id)arg2;

@end

