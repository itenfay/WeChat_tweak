//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppCommunicateData, NSString, NSURL;

@interface OpenApiParameter
{
    _Bool _isLaunchByUniversalLink;
    _Bool _isDegradeLaunchByScheme;
    _Bool _isAppPassDataWithUrl;
    unsigned int _tokenVerifyResult;
    unsigned int _appSupportUrlParamsType;
    NSURL *_url;
    NSString *_apiName;
    NSString *_appID;
    NSString *_bundleID;
    NSString *_token;
    NSString *_contextID;
    NSString *_sdkBundleID;
    AppCommunicateData *_appData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAppPassDataWithUrl; // @synthesize isAppPassDataWithUrl=_isAppPassDataWithUrl;
@property(nonatomic) unsigned int appSupportUrlParamsType; // @synthesize appSupportUrlParamsType=_appSupportUrlParamsType;
@property(retain, nonatomic) AppCommunicateData *appData; // @synthesize appData=_appData;
@property(nonatomic) unsigned int tokenVerifyResult; // @synthesize tokenVerifyResult=_tokenVerifyResult;
@property(copy, nonatomic) NSString *sdkBundleID; // @synthesize sdkBundleID=_sdkBundleID;
@property(copy, nonatomic) NSString *contextID; // @synthesize contextID=_contextID;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) _Bool isDegradeLaunchByScheme; // @synthesize isDegradeLaunchByScheme=_isDegradeLaunchByScheme;
@property(nonatomic) _Bool isLaunchByUniversalLink; // @synthesize isLaunchByUniversalLink=_isLaunchByUniversalLink;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(copy, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (unsigned int)messageType;
- (id)signatureNodeDict;
- (id)covertToWCPayOpenApiParamter;
- (void)clearAppDataUniversalLink;
@property(readonly, nonatomic) _Bool isSDKResendByRefreshToken;
@property(readonly, nonatomic) NSString *sdkVersion;
@property(readonly, nonatomic) NSString *universalLink;
- (id)description;

@end

