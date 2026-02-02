//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CAppBrandInfo, NSDictionary, NSString;

@interface WAContact : NSObject
{
    _Bool _m_isExtInfoValid;
    unsigned int _m_uiType;
    unsigned int _m_uiWxAppOpt;
    unsigned int _m_uiDebugModeType;
    unsigned int _uiLastUpdateAppVersionInfoTime;
    unsigned int _uiLastLaunchAppTime;
    unsigned int _m_uiCertificationFlag;
    NSString *m_nsExternalInfo;
    NSString *m_nsNickName;
    NSString *m_nsSignature;
    CAppBrandInfo *appBrandInfo;
    NSString *_m_nsUsrName;
    NSString *_m_nsAppId;
    NSString *_m_nsAliasName;
    NSString *_m_nsFullPY;
    NSString *_m_nsBrandIconUrl;
    NSString *_m_nsHeadHDImgUrl;
    NSString *_m_nsHeadImgUrl;
    NSString *_m_nsImgStatus;
    NSDictionary *_externalInfoJSONCache;
}

+ (_Bool)isWeAppAppId:(id)arg1;
+ (_Bool)isWeAppUserName:(id)arg1;
+ (id)contactListWithWeAppContactList:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool m_isExtInfoValid; // @synthesize m_isExtInfoValid=_m_isExtInfoValid;
@property(retain, nonatomic) NSDictionary *externalInfoJSONCache; // @synthesize externalInfoJSONCache=_externalInfoJSONCache;
@property(copy, nonatomic) NSString *m_nsImgStatus; // @synthesize m_nsImgStatus=_m_nsImgStatus;
@property(nonatomic) unsigned int m_uiCertificationFlag; // @synthesize m_uiCertificationFlag=_m_uiCertificationFlag;
@property(nonatomic) unsigned int uiLastLaunchAppTime; // @synthesize uiLastLaunchAppTime=_uiLastLaunchAppTime;
@property(nonatomic) unsigned int uiLastUpdateAppVersionInfoTime; // @synthesize uiLastUpdateAppVersionInfoTime=_uiLastUpdateAppVersionInfoTime;
@property(nonatomic) unsigned int m_uiDebugModeType; // @synthesize m_uiDebugModeType=_m_uiDebugModeType;
@property(nonatomic) unsigned int m_uiWxAppOpt; // @synthesize m_uiWxAppOpt=_m_uiWxAppOpt;
@property(nonatomic) unsigned int m_uiType; // @synthesize m_uiType=_m_uiType;
@property(copy, nonatomic) NSString *m_nsHeadImgUrl; // @synthesize m_nsHeadImgUrl=_m_nsHeadImgUrl;
@property(copy, nonatomic) NSString *m_nsHeadHDImgUrl; // @synthesize m_nsHeadHDImgUrl=_m_nsHeadHDImgUrl;
@property(copy, nonatomic) NSString *m_nsBrandIconUrl; // @synthesize m_nsBrandIconUrl=_m_nsBrandIconUrl;
@property(copy, nonatomic) NSString *m_nsFullPY; // @synthesize m_nsFullPY=_m_nsFullPY;
@property(copy, nonatomic) NSString *m_nsAliasName; // @synthesize m_nsAliasName=_m_nsAliasName;
@property(copy, nonatomic) NSString *m_nsAppId; // @synthesize m_nsAppId=_m_nsAppId;
@property(copy, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName=_m_nsUsrName;
@property(retain, nonatomic) CAppBrandInfo *appBrandInfo; // @synthesize appBrandInfo;
@property(copy, nonatomic) NSString *m_nsSignature; // @synthesize m_nsSignature;
@property(copy, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName;
@property(retain, nonatomic) NSString *m_nsExternalInfo; // @synthesize m_nsExternalInfo;
- (unsigned int)innerVersionForPluginAppid:(id)arg1;
- (id)allReferencePluginAppid;
- (id)pluginDicForReferencePluginAppid:(id)arg1;
- (_Bool)isChatToolPath:(id)arg1;
- (_Bool)hasReferencePluginAppid:(id)arg1;
- (id)getArrCallPluginInfo;
- (id)getDicClientJSExtInfo;
- (_Bool)isDebugModeTypeContact:(unsigned long long)arg1;
- (_Bool)isRDMContact;
- (_Bool)isDebugContact;
- (_Bool)isReleaseContact;
- (_Bool)hasSameOrNewerVersionThan:(unsigned long long)arg1;
- (id)getExternalInfoDictionary;
- (_Bool)isContactValid;
- (_Bool)isWeAppContact;
- (_Bool)isNormalWeAppWithGameRuntime;
- (_Bool)isLiteGame;
- (_Bool)isGameApp;
- (_Bool)isSimulatedNativeWeApp;
- (_Bool)isNormalWeApp;
- (id)getListDisplayName;
- (id)getContactDisplayName;
- (id)getContactHeadImgUrl;
- (id)getAppID;
- (id)getAppBrandInfo;
- (_Bool)isAppBrandInfoValid;
- (_Bool)copyFieldFromContact:(id)arg1;
- (id)description;
- (id)toCContact;

@end

