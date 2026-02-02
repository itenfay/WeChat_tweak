//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TencentLBSDevice : NSObject
{
    _Bool _canUseHttp;
    NSString *_model;
    NSString *_systemVersion;
    NSString *_identifierForVendor;
    NSString *_identifierForIdentifier;
    NSString *_appName;
    NSString *_buildDate;
    NSString *_accessTokenMD5;
    NSString *_sdkVersion;
    NSString *_appLabel;
    NSString *_appVersion;
    NSString *_deviceModel;
    NSString *_openid;
    NSString *_phoneNumber;
}

+ (id)currentDevice;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *openid; // @synthesize openid=_openid;
@property(copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *appLabel; // @synthesize appLabel=_appLabel;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy, nonatomic) NSString *accessTokenMD5; // @synthesize accessTokenMD5=_accessTokenMD5;
@property(copy, nonatomic) NSString *buildDate; // @synthesize buildDate=_buildDate;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) _Bool canUseHttp; // @synthesize canUseHttp=_canUseHttp;
@property(copy, nonatomic) NSString *identifierForIdentifier; // @synthesize identifierForIdentifier=_identifierForIdentifier;
@property(copy, nonatomic) NSString *identifierForVendor; // @synthesize identifierForVendor=_identifierForVendor;
@property(copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
- (_Bool)supportATS;
- (id)deviceModelName;
- (void)getStoredId;
- (void)updateIdfa:(id)arg1;
- (id)init;

@end

