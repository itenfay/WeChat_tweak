//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CLocalInfo : NSObject
{
    _Bool _m_bHasShowChooseView;
    _Bool _m_bIsAuthPushLoginURL;
    _Bool _m_bIsOpenVoicePrint;
    _Bool _m_isAreadyShowFontSettingTips;
    _Bool _m_isAreadyChangeWeChatFontSetting;
    unsigned int _m_uiLastUin;
    unsigned int _m_uiBindAcountFlag;
    unsigned int _m_uiLastLoginAcountType;
    unsigned int _m_uiFontLevel;
    unsigned int _m_uiGlobalFontLevel;
    unsigned int _m_uiCachedFontLevel;
    unsigned int _m_uiManualSetFontLevel;
    unsigned int _m_uiWebviewFontLevel;
    unsigned int _m_uiNetControlBitFlag;
    NSString *_m_nsCurUsrName;
    NSString *_m_nsLastUserName;
    NSString *_m_nsLastLoginName;
    NSString *_m_nsLastNickName;
    NSData *_m_dtAutoAuthKey;
    NSData *_m_dtLastKSid;
    NSData *_m_nsLastSvrID;
    NSString *_m_nsPushLoginURLTips;
    NSString *_m_nsLastPhoneNumber;
    NSString *_m_nsSystemContentSize;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_uiManualSetFontLevel;
+ (void)PBArrayAdd_m_uiCachedFontLevel;
+ (void)PBArrayAdd_m_isAreadyChangeWeChatFontSetting;
+ (void)PBArrayAdd_m_isAreadyShowFontSettingTips;
+ (void)PBArrayAdd_m_nsSystemContentSize;
+ (void)PBArrayAdd_m_nsLastPhoneNumber;
+ (void)PBArrayAdd_m_uiNetControlBitFlag;
+ (void)PBArrayAdd_m_uiWebviewFontLevel;
+ (void)PBArrayAdd_m_uiGlobalFontLevel;
+ (void)PBArrayAdd_m_uiFontLevel;
+ (void)PBArrayAdd_m_bIsOpenVoicePrint;
+ (void)PBArrayAdd_m_bIsAuthPushLoginURL;
+ (void)PBArrayAdd_m_bHasShowChooseView;
+ (void)PBArrayAdd_m_nsPushLoginURLTips;
+ (void)PBArrayAdd_m_nsLastSvrID;
+ (void)PBArrayAdd_m_uiLastLoginAcountType;
+ (void)PBArrayAdd_m_uiBindAcountFlag;
+ (void)PBArrayAdd_m_dtLastKSid;
+ (void)PBArrayAdd_m_dtAutoAuthKey;
+ (void)PBArrayAdd_m_uiLastUin;
+ (void)PBArrayAdd_m_nsLastNickName;
+ (void)PBArrayAdd_m_nsLastLoginName;
+ (void)PBArrayAdd_m_nsLastUserName;
+ (void)PBArrayAdd_m_nsCurUsrName;
- (void).cxx_destruct;
@property(nonatomic) _Bool m_isAreadyChangeWeChatFontSetting; // @synthesize m_isAreadyChangeWeChatFontSetting=_m_isAreadyChangeWeChatFontSetting;
@property(nonatomic) _Bool m_isAreadyShowFontSettingTips; // @synthesize m_isAreadyShowFontSettingTips=_m_isAreadyShowFontSettingTips;
@property(retain, nonatomic) NSString *m_nsSystemContentSize; // @synthesize m_nsSystemContentSize=_m_nsSystemContentSize;
@property(copy, nonatomic) NSString *m_nsLastPhoneNumber; // @synthesize m_nsLastPhoneNumber=_m_nsLastPhoneNumber;
@property(nonatomic) unsigned int m_uiNetControlBitFlag; // @synthesize m_uiNetControlBitFlag=_m_uiNetControlBitFlag;
@property(nonatomic) unsigned int m_uiWebviewFontLevel; // @synthesize m_uiWebviewFontLevel=_m_uiWebviewFontLevel;
@property(nonatomic) _Bool m_bIsOpenVoicePrint; // @synthesize m_bIsOpenVoicePrint=_m_bIsOpenVoicePrint;
@property(nonatomic) _Bool m_bIsAuthPushLoginURL; // @synthesize m_bIsAuthPushLoginURL=_m_bIsAuthPushLoginURL;
@property(nonatomic) _Bool m_bHasShowChooseView; // @synthesize m_bHasShowChooseView=_m_bHasShowChooseView;
@property(nonatomic) unsigned int m_uiManualSetFontLevel; // @synthesize m_uiManualSetFontLevel=_m_uiManualSetFontLevel;
@property(nonatomic) unsigned int m_uiCachedFontLevel; // @synthesize m_uiCachedFontLevel=_m_uiCachedFontLevel;
@property(nonatomic) unsigned int m_uiGlobalFontLevel; // @synthesize m_uiGlobalFontLevel=_m_uiGlobalFontLevel;
@property(nonatomic) unsigned int m_uiFontLevel; // @synthesize m_uiFontLevel=_m_uiFontLevel;
@property(retain, nonatomic) NSString *m_nsPushLoginURLTips; // @synthesize m_nsPushLoginURLTips=_m_nsPushLoginURLTips;
@property(retain, nonatomic) NSData *m_nsLastSvrID; // @synthesize m_nsLastSvrID=_m_nsLastSvrID;
@property(nonatomic) unsigned int m_uiLastLoginAcountType; // @synthesize m_uiLastLoginAcountType=_m_uiLastLoginAcountType;
@property(nonatomic) unsigned int m_uiBindAcountFlag; // @synthesize m_uiBindAcountFlag=_m_uiBindAcountFlag;
@property(retain, nonatomic) NSData *m_dtLastKSid; // @synthesize m_dtLastKSid=_m_dtLastKSid;
@property(retain, nonatomic) NSData *m_dtAutoAuthKey; // @synthesize m_dtAutoAuthKey=_m_dtAutoAuthKey;
@property(nonatomic) unsigned int m_uiLastUin; // @synthesize m_uiLastUin=_m_uiLastUin;
@property(retain, nonatomic) NSString *m_nsLastNickName; // @synthesize m_nsLastNickName=_m_nsLastNickName;
@property(retain, nonatomic) NSString *m_nsLastLoginName; // @synthesize m_nsLastLoginName=_m_nsLastLoginName;
@property(retain, nonatomic) NSString *m_nsLastUserName; // @synthesize m_nsLastUserName=_m_nsLastUserName;
@property(retain, nonatomic) NSString *m_nsCurUsrName; // @synthesize m_nsCurUsrName=_m_nsCurUsrName;
- (id)getPBPropertyTable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

