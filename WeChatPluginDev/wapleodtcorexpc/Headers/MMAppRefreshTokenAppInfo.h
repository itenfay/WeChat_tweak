//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMAppRefreshTokenAppInfo
{
    NSString *_appID;
    NSString *_appIconUrl;
    NSString *_appNickname;
    NSString *_universalLink;
    NSString *_sdkVersion;
    NSString *_bundleID;
    NSString *_sdkBundleID;
    NSString *_contextID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *contextID; // @synthesize contextID=_contextID;
@property(copy, nonatomic) NSString *sdkBundleID; // @synthesize sdkBundleID=_sdkBundleID;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy, nonatomic) NSString *universalLink; // @synthesize universalLink=_universalLink;
@property(copy, nonatomic) NSString *appNickname; // @synthesize appNickname=_appNickname;
@property(copy, nonatomic) NSString *appIconUrl; // @synthesize appIconUrl=_appIconUrl;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void)fillWithWCPayOpenParameter:(id)arg1;
- (void)fillWithOpenParameter:(id)arg1;
- (id)description;

@end

