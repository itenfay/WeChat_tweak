//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QBGlobalConfig : NSObject
{
    _Bool _bSpdyAccelerateOn;
    _Bool _bADFilter;
    _Bool _bScreenAdapter;
    _Bool _bDisplayImage;
    _Bool _bUseTidyWebsite;
    _Bool _bIsRetina;
    _Bool _newInstall;
    _Bool _isUpdateVersion;
    _Bool _isUpdateSmallVersion;
    _Bool _bGettingGuid;
    _Bool _bAuthorize;
    _Bool _bThirdInvoke;
    _Bool _isFileOpenFromThird;
    _Bool _bEnableSecurityCheck;
    long long _m_wifiAddr;
    long long _configVersion;
    long long _startUpType;
    long long _wupSuccessCount;
    long long _wupFailureCount;
}

+ (void)spedSettingDidChanged:(id)arg1;
+ (void)load;
+ (id)sharedInstance;
@property _Bool bEnableSecurityCheck; // @synthesize bEnableSecurityCheck=_bEnableSecurityCheck;
@property _Bool isFileOpenFromThird; // @synthesize isFileOpenFromThird=_isFileOpenFromThird;
@property _Bool bThirdInvoke; // @synthesize bThirdInvoke=_bThirdInvoke;
@property _Bool bAuthorize; // @synthesize bAuthorize=_bAuthorize;
@property long long wupFailureCount; // @synthesize wupFailureCount=_wupFailureCount;
@property long long wupSuccessCount; // @synthesize wupSuccessCount=_wupSuccessCount;
@property _Bool bGettingGuid; // @synthesize bGettingGuid=_bGettingGuid;
@property _Bool isUpdateSmallVersion; // @synthesize isUpdateSmallVersion=_isUpdateSmallVersion;
@property _Bool isUpdateVersion; // @synthesize isUpdateVersion=_isUpdateVersion;
@property _Bool newInstall; // @synthesize newInstall=_newInstall;
@property long long startUpType; // @synthesize startUpType=_startUpType;
@property long long configVersion; // @synthesize configVersion=_configVersion;
@property _Bool bIsRetina; // @synthesize bIsRetina=_bIsRetina;
@property _Bool bUseTidyWebsite; // @synthesize bUseTidyWebsite=_bUseTidyWebsite;
@property _Bool bDisplayImage; // @synthesize bDisplayImage=_bDisplayImage;
@property _Bool bScreenAdapter; // @synthesize bScreenAdapter=_bScreenAdapter;
@property _Bool bADFilter; // @synthesize bADFilter=_bADFilter;
@property _Bool bSpdyAccelerateOn; // @synthesize bSpdyAccelerateOn=_bSpdyAccelerateOn;
@property long long m_wifiAddr; // @synthesize m_wifiAddr=_m_wifiAddr;
- (id)init;

@end

