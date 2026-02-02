//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CUsrInfo : NSObject
{
    NSString *m_nsUsrName;
    NSString *m_nsAliasName;
    NSString *m_nsNickName;
    unsigned int m_uiBindQQUin;
    NSString *m_nsEmail;
    NSString *m_nsMobile;
    unsigned int m_uiStatus;
    unsigned int m_uiSex;
    NSString *m_nsCountry;
    NSString *m_nsProvince;
    NSString *m_nsCity;
    NSString *m_nsSignature;
    NSString *m_nsHDHeadImgMD5;
    unsigned int m_uiPluginInstallStatus;
    unsigned int m_uiFacebookFlag;
    NSString *m_nsFacebookID;
    NSString *m_nsFacebookName;
    NSString *m_nsFacebookToken;
    unsigned int m_uiPluginSwitch;
    unsigned int _m_uiGMailStatus;
    unsigned int _m_uiGMailSwitch;
    NSString *_m_nsGMailAccount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiGMailSwitch; // @synthesize m_uiGMailSwitch=_m_uiGMailSwitch;
@property(nonatomic) unsigned int m_uiGMailStatus; // @synthesize m_uiGMailStatus=_m_uiGMailStatus;
@property(retain, nonatomic) NSString *m_nsGMailAccount; // @synthesize m_nsGMailAccount=_m_nsGMailAccount;
@property(nonatomic) unsigned int m_uiPluginSwitch; // @synthesize m_uiPluginSwitch;
@property(retain, nonatomic) NSString *m_nsFacebookToken; // @synthesize m_nsFacebookToken;
@property(retain, nonatomic) NSString *m_nsFacebookName; // @synthesize m_nsFacebookName;
@property(retain, nonatomic) NSString *m_nsFacebookID; // @synthesize m_nsFacebookID;
@property(nonatomic) unsigned int m_uiFacebookFlag; // @synthesize m_uiFacebookFlag;
@property(nonatomic) unsigned int m_uiPluginInstallStatus; // @synthesize m_uiPluginInstallStatus;
@property(retain, nonatomic) NSString *m_nsHDHeadImgMD5; // @synthesize m_nsHDHeadImgMD5;
@property(nonatomic) unsigned int m_uiSex; // @synthesize m_uiSex;
@property(retain, nonatomic) NSString *m_nsSignature; // @synthesize m_nsSignature;
@property(retain, nonatomic) NSString *m_nsCity; // @synthesize m_nsCity;
@property(retain, nonatomic) NSString *m_nsProvince; // @synthesize m_nsProvince;
@property(retain, nonatomic) NSString *m_nsCountry; // @synthesize m_nsCountry;
@property(nonatomic) unsigned int m_uiStatus; // @synthesize m_uiStatus;
@property(retain, nonatomic) NSString *m_nsMobile; // @synthesize m_nsMobile;
@property(retain, nonatomic) NSString *m_nsEmail; // @synthesize m_nsEmail;
@property(nonatomic) unsigned int m_uiBindQQUin; // @synthesize m_uiBindQQUin;
@property(retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName;
@property(retain, nonatomic) NSString *m_nsAliasName; // @synthesize m_nsAliasName;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
- (id)description;
- (id)keyPaths;
- (id)init;

@end

