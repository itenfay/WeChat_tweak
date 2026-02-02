//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOpenApiParamter : NSObject
{
    _Bool _isLaunchByUniversalLink;
    _Bool _isDegradeLaunchByScheme;
    _Bool _isSDKResendByRefreshToken;
    unsigned int _tokenVerifyResult;
    unsigned int _sdkUrlParamType;
    NSString *_url;
    NSString *_apiName;
    NSString *_appID;
    NSString *_bundleID;
    NSString *_token;
    NSString *_contextID;
    NSString *_sdkBundleID;
    NSString *_universalLink;
    NSString *_sdkVersion;
}

+ (void)initialize;
+ (void)PBArrayAdd_sdkUrlParamType;
+ (void)PBArrayAdd_isSDKResendByRefreshToken;
+ (void)PBArrayAdd_sdkVersion;
+ (void)PBArrayAdd_universalLink;
+ (void)PBArrayAdd_tokenVerifyResult;
+ (void)PBArrayAdd_sdkBundleID;
+ (void)PBArrayAdd_contextID;
+ (void)PBArrayAdd_token;
+ (void)PBArrayAdd_isDegradeLaunchByScheme;
+ (void)PBArrayAdd_isLaunchByUniversalLink;
+ (void)PBArrayAdd_bundleID;
+ (void)PBArrayAdd_appID;
+ (void)PBArrayAdd_apiName;
+ (void)PBArrayAdd_url;
- (void).cxx_destruct;
@property(nonatomic) unsigned int sdkUrlParamType; // @synthesize sdkUrlParamType=_sdkUrlParamType;
@property(nonatomic) _Bool isSDKResendByRefreshToken; // @synthesize isSDKResendByRefreshToken=_isSDKResendByRefreshToken;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy, nonatomic) NSString *universalLink; // @synthesize universalLink=_universalLink;
@property(nonatomic) unsigned int tokenVerifyResult; // @synthesize tokenVerifyResult=_tokenVerifyResult;
@property(copy, nonatomic) NSString *sdkBundleID; // @synthesize sdkBundleID=_sdkBundleID;
@property(copy, nonatomic) NSString *contextID; // @synthesize contextID=_contextID;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) _Bool isDegradeLaunchByScheme; // @synthesize isDegradeLaunchByScheme=_isDegradeLaunchByScheme;
@property(nonatomic) _Bool isLaunchByUniversalLink; // @synthesize isLaunchByUniversalLink=_isLaunchByUniversalLink;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(copy, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

