//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppmsgSignature3rd, NSString, SdkFinderInfo;

@interface TranslateLinkParameter
{
    _Bool _isWXLaunchByUniversalLink;
    _Bool _isAutoResend;
    unsigned int _scene;
    unsigned int _schemeFlag;
    unsigned int _verifyScene;
    unsigned int _tokenVerifyResult;
    NSString *_appId;
    NSString *_link;
    NSString *_bundleId;
    NSString *_universalLink;
    NSString *_sdkBundleId;
    NSString *_sdkToken;
    NSString *_sdkVersion;
    SdkFinderInfo *_finderInfo;
    AppmsgSignature3rd *_appmsgSignature3rd;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AppmsgSignature3rd *appmsgSignature3rd; // @synthesize appmsgSignature3rd=_appmsgSignature3rd;
@property(retain, nonatomic) SdkFinderInfo *finderInfo; // @synthesize finderInfo=_finderInfo;
@property(nonatomic) _Bool isAutoResend; // @synthesize isAutoResend=_isAutoResend;
@property(nonatomic) _Bool isWXLaunchByUniversalLink; // @synthesize isWXLaunchByUniversalLink=_isWXLaunchByUniversalLink;
@property(nonatomic) unsigned int tokenVerifyResult; // @synthesize tokenVerifyResult=_tokenVerifyResult;
@property(nonatomic) unsigned int verifyScene; // @synthesize verifyScene=_verifyScene;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy, nonatomic) NSString *sdkToken; // @synthesize sdkToken=_sdkToken;
@property(copy, nonatomic) NSString *sdkBundleId; // @synthesize sdkBundleId=_sdkBundleId;
@property(copy, nonatomic) NSString *universalLink; // @synthesize universalLink=_universalLink;
@property(nonatomic) unsigned int schemeFlag; // @synthesize schemeFlag=_schemeFlag;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)description;

@end

