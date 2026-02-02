//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface LoginUserInfo : NSObject
{
    _Bool _m_bIsOpenVoicePrint;
    _Bool _m_bIsOpenFace;
    unsigned int _m_uiBindAcountFlag;
    unsigned int _m_uiLastLoginAcountType;
    NSString *_m_nsUserName;
    NSString *_m_nsLoginName;
    NSString *_m_nsAliasName;
    NSString *_m_nsNickName;
    unsigned long long _m_ui64Uin;
    NSString *_m_nsPhoneNumber;
    NSString *_m_nsNoPwdLoginTicket;
    NSData *_m_dtAutoAuthKey;
    NSString *_m_bindLoginUserName;
    NSData *_passkeyCredentialID;
    unsigned long long _extStatus2;
}

+ (void)initialize;
+ (void)PBArrayAdd_extStatus2;
+ (void)PBArrayAdd_passkeyCredentialID;
+ (void)PBArrayAdd_m_nsAliasName;
+ (void)PBArrayAdd_m_bIsOpenFace;
+ (void)PBArrayAdd_m_bindLoginUserName;
+ (void)PBArrayAdd_m_dtAutoAuthKey;
+ (void)PBArrayAdd_m_bIsOpenVoicePrint;
+ (void)PBArrayAdd_m_nsNoPwdLoginTicket;
+ (void)PBArrayAdd_m_nsPhoneNumber;
+ (void)PBArrayAdd_m_uiLastLoginAcountType;
+ (void)PBArrayAdd_m_uiBindAcountFlag;
+ (void)PBArrayAdd_m_ui64Uin;
+ (void)PBArrayAdd_m_nsNickName;
+ (void)PBArrayAdd_m_nsLoginName;
+ (void)PBArrayAdd_m_nsUserName;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long extStatus2; // @synthesize extStatus2=_extStatus2;
@property(retain, nonatomic) NSData *passkeyCredentialID; // @synthesize passkeyCredentialID=_passkeyCredentialID;
@property(retain, nonatomic) NSString *m_bindLoginUserName; // @synthesize m_bindLoginUserName=_m_bindLoginUserName;
@property(retain, nonatomic) NSData *m_dtAutoAuthKey; // @synthesize m_dtAutoAuthKey=_m_dtAutoAuthKey;
@property(nonatomic) _Bool m_bIsOpenFace; // @synthesize m_bIsOpenFace=_m_bIsOpenFace;
@property(nonatomic) _Bool m_bIsOpenVoicePrint; // @synthesize m_bIsOpenVoicePrint=_m_bIsOpenVoicePrint;
@property(retain, nonatomic) NSString *m_nsNoPwdLoginTicket; // @synthesize m_nsNoPwdLoginTicket=_m_nsNoPwdLoginTicket;
@property(retain, nonatomic) NSString *m_nsPhoneNumber; // @synthesize m_nsPhoneNumber=_m_nsPhoneNumber;
@property(nonatomic) unsigned int m_uiLastLoginAcountType; // @synthesize m_uiLastLoginAcountType=_m_uiLastLoginAcountType;
@property(nonatomic) unsigned int m_uiBindAcountFlag; // @synthesize m_uiBindAcountFlag=_m_uiBindAcountFlag;
@property(nonatomic) unsigned long long m_ui64Uin; // @synthesize m_ui64Uin=_m_ui64Uin;
@property(retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName=_m_nsNickName;
@property(retain, nonatomic) NSString *m_nsAliasName; // @synthesize m_nsAliasName=_m_nsAliasName;
@property(retain, nonatomic) NSString *m_nsLoginName; // @synthesize m_nsLoginName=_m_nsLoginName;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName=_m_nsUserName;
- (_Bool)isPasskeyOpened;
- (id)getLoginUserName;
- (id)getLastLoginName;
@property(nonatomic) _Bool hasBindAccount; // @dynamic hasBindAccount;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

