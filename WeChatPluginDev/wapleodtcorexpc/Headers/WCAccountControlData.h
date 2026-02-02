//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LoginUserInfo, MobileInfo, NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIImage, UnifyAuthResponse;

@interface WCAccountControlData : NSObject
{
    _Bool _m_bAdjustRet;
    _Bool _needDoPostCheck;
    _Bool _affRegAccountKeepOldLogic;
    _Bool _affRegAccountWithFinder;
    _Bool _kidsWatchShowSyncChat;
    _Bool _isPasskeyLoginAutoShow;
    unsigned int _m_uiLoginType;
    unsigned int _m_uiFromScene;
    int _m_iRegisterControlFlag;
    int _m_iInputType;
    int _m_iForceReg;
    int _m_iRegMode;
    unsigned int _m_uiRegNextShowStyle;
    unsigned int _m_uiAdjustRet;
    unsigned int _mobileCheckType;
    NSString *_m_nsPwd;
    NSString *_m_nsPwdMD5;
    NSString *_m_nsPwd16MD5;
    NSString *_m_nsUserName;
    NSString *_m_nsLastLoginName;
    NSString *_m_nsContryCode;
    NSString *_m_nsContryISOCode;
    NSString *_m_nsPhoneNumber;
    NSString *_m_nsFormatedPhoneNumber;
    NSString *_m_nsTicket;
    UnifyAuthResponse *_m_structAuthResponse;
    NSArray *_m_arrNextStep;
    UIImage *_m_headImage;
    NSData *_m_dtVerifyImg;
    NSString *_m_nsAlias;
    NSString *_m_nsNickName;
    NSString *_m_nsVerifySignature;
    NSString *_m_nsVerifyCode;
    NSDictionary *_m_dicStyleKeyValue;
    NSString *_m_nsRandomID;
    NSString *_m_regSessionId;
    NSString *_m_thirdAppAuthTicket;
    NSString *_m_appleIdTicket;
    NSString *_m_simMobileMsgID;
    NSString *_m_extSpamCtxString;
    MobileInfo *_maskedMobileInfo;
    NSMutableArray *_m_arrUserInfos;
    LoginUserInfo *_m_userInfo;
    NSString *_smsUpCode;
    NSString *_smsUpMobile;
    NSMutableDictionary *_m_dicVCParam;
    NSString *_kidsWatchURL;
    NSArray *_kidsAccountInfoList;
    NSString *_kidsAccountOpenID;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPasskeyLoginAutoShow; // @synthesize isPasskeyLoginAutoShow=_isPasskeyLoginAutoShow;
@property(nonatomic) _Bool kidsWatchShowSyncChat; // @synthesize kidsWatchShowSyncChat=_kidsWatchShowSyncChat;
@property(retain, nonatomic) NSString *kidsAccountOpenID; // @synthesize kidsAccountOpenID=_kidsAccountOpenID;
@property(retain, nonatomic) NSArray *kidsAccountInfoList; // @synthesize kidsAccountInfoList=_kidsAccountInfoList;
@property(retain, nonatomic) NSString *kidsWatchURL; // @synthesize kidsWatchURL=_kidsWatchURL;
@property(nonatomic) _Bool affRegAccountWithFinder; // @synthesize affRegAccountWithFinder=_affRegAccountWithFinder;
@property(nonatomic) _Bool affRegAccountKeepOldLogic; // @synthesize affRegAccountKeepOldLogic=_affRegAccountKeepOldLogic;
@property(retain, nonatomic) NSMutableDictionary *m_dicVCParam; // @synthesize m_dicVCParam=_m_dicVCParam;
@property(nonatomic) _Bool needDoPostCheck; // @synthesize needDoPostCheck=_needDoPostCheck;
@property(nonatomic) unsigned int mobileCheckType; // @synthesize mobileCheckType=_mobileCheckType;
@property(retain, nonatomic) NSString *smsUpMobile; // @synthesize smsUpMobile=_smsUpMobile;
@property(retain, nonatomic) NSString *smsUpCode; // @synthesize smsUpCode=_smsUpCode;
@property(retain, nonatomic) LoginUserInfo *m_userInfo; // @synthesize m_userInfo=_m_userInfo;
@property(retain, nonatomic) NSMutableArray *m_arrUserInfos; // @synthesize m_arrUserInfos=_m_arrUserInfos;
@property(retain, nonatomic) MobileInfo *maskedMobileInfo; // @synthesize maskedMobileInfo=_maskedMobileInfo;
@property(retain, nonatomic) NSString *m_extSpamCtxString; // @synthesize m_extSpamCtxString=_m_extSpamCtxString;
@property(retain, nonatomic) NSString *m_simMobileMsgID; // @synthesize m_simMobileMsgID=_m_simMobileMsgID;
@property(retain, nonatomic) NSString *m_appleIdTicket; // @synthesize m_appleIdTicket=_m_appleIdTicket;
@property(retain, nonatomic) NSString *m_thirdAppAuthTicket; // @synthesize m_thirdAppAuthTicket=_m_thirdAppAuthTicket;
@property(retain, nonatomic) NSString *m_regSessionId; // @synthesize m_regSessionId=_m_regSessionId;
@property(nonatomic) unsigned int m_uiAdjustRet; // @synthesize m_uiAdjustRet=_m_uiAdjustRet;
@property(nonatomic) _Bool m_bAdjustRet; // @synthesize m_bAdjustRet=_m_bAdjustRet;
@property(retain, nonatomic) NSString *m_nsRandomID; // @synthesize m_nsRandomID=_m_nsRandomID;
@property(retain, nonatomic) NSDictionary *m_dicStyleKeyValue; // @synthesize m_dicStyleKeyValue=_m_dicStyleKeyValue;
@property(nonatomic) unsigned int m_uiRegNextShowStyle; // @synthesize m_uiRegNextShowStyle=_m_uiRegNextShowStyle;
@property(nonatomic) int m_iRegMode; // @synthesize m_iRegMode=_m_iRegMode;
@property(nonatomic) int m_iForceReg; // @synthesize m_iForceReg=_m_iForceReg;
@property(nonatomic) int m_iInputType; // @synthesize m_iInputType=_m_iInputType;
@property(retain, nonatomic) NSString *m_nsVerifyCode; // @synthesize m_nsVerifyCode=_m_nsVerifyCode;
@property(retain, nonatomic) NSString *m_nsVerifySignature; // @synthesize m_nsVerifySignature=_m_nsVerifySignature;
@property(retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName=_m_nsNickName;
@property(retain, nonatomic) NSString *m_nsAlias; // @synthesize m_nsAlias=_m_nsAlias;
@property(retain, nonatomic) NSData *m_dtVerifyImg; // @synthesize m_dtVerifyImg=_m_dtVerifyImg;
@property(retain, nonatomic) UIImage *m_headImage; // @synthesize m_headImage=_m_headImage;
@property(retain, nonatomic) NSArray *m_arrNextStep; // @synthesize m_arrNextStep=_m_arrNextStep;
@property(retain, nonatomic) UnifyAuthResponse *m_structAuthResponse; // @synthesize m_structAuthResponse=_m_structAuthResponse;
@property(nonatomic) int m_iRegisterControlFlag; // @synthesize m_iRegisterControlFlag=_m_iRegisterControlFlag;
@property(retain, nonatomic) NSString *m_nsTicket; // @synthesize m_nsTicket=_m_nsTicket;
@property(retain, nonatomic) NSString *m_nsFormatedPhoneNumber; // @synthesize m_nsFormatedPhoneNumber=_m_nsFormatedPhoneNumber;
@property(retain, nonatomic) NSString *m_nsPhoneNumber; // @synthesize m_nsPhoneNumber=_m_nsPhoneNumber;
@property(retain, nonatomic) NSString *m_nsContryISOCode; // @synthesize m_nsContryISOCode=_m_nsContryISOCode;
@property(retain, nonatomic) NSString *m_nsContryCode; // @synthesize m_nsContryCode=_m_nsContryCode;
@property(retain, nonatomic) NSString *m_nsLastLoginName; // @synthesize m_nsLastLoginName=_m_nsLastLoginName;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName=_m_nsUserName;
@property(retain, nonatomic) NSString *m_nsPwd16MD5; // @synthesize m_nsPwd16MD5=_m_nsPwd16MD5;
@property(retain, nonatomic) NSString *m_nsPwdMD5; // @synthesize m_nsPwdMD5=_m_nsPwdMD5;
@property(retain, nonatomic) NSString *m_nsPwd; // @synthesize m_nsPwd=_m_nsPwd;
@property(nonatomic) unsigned int m_uiFromScene; // @synthesize m_uiFromScene=_m_uiFromScene;
@property(nonatomic) unsigned int m_uiLoginType; // @synthesize m_uiLoginType=_m_uiLoginType;
- (_Bool)isFromForgetPwd;
- (_Bool)isFromLogin;
- (_Bool)isFromReg;
- (id)init;

@end

