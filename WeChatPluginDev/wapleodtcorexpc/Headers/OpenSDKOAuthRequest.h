//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface OpenSDKOAuthRequest
{
    _Bool _isWXLaunchByUniversalLink;
    _Bool _isOption1;
    _Bool _nonautomatic;
    unsigned int _tokenVerifyResult;
    NSString *_appId;
    NSString *_bundleId;
    NSString *_scope;
    NSString *_state;
    NSString *_universalLink;
    NSString *_sdkVersion;
    NSString *_sdkToken;
    NSString *_sdkBundleID;
    NSString *_extData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool nonautomatic; // @synthesize nonautomatic=_nonautomatic;
@property(copy, nonatomic) NSString *extData; // @synthesize extData=_extData;
@property(nonatomic) _Bool isOption1; // @synthesize isOption1=_isOption1;
@property(nonatomic) unsigned int tokenVerifyResult; // @synthesize tokenVerifyResult=_tokenVerifyResult;
@property(nonatomic) _Bool isWXLaunchByUniversalLink; // @synthesize isWXLaunchByUniversalLink=_isWXLaunchByUniversalLink;
@property(copy, nonatomic) NSString *sdkBundleID; // @synthesize sdkBundleID=_sdkBundleID;
@property(copy, nonatomic) NSString *sdkToken; // @synthesize sdkToken=_sdkToken;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy, nonatomic) NSString *universalLink; // @synthesize universalLink=_universalLink;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)description;

@end

