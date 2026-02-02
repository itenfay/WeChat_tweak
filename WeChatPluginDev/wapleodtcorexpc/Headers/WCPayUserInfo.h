//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCPayCredInfo, WCPayLqbShowInfo, WCPayLqtCellInfo;

@interface WCPayUserInfo : NSObject
{
    int m_regFlag;
    NSString *m_usrName;
    WCPayCredInfo *m_usrCredInfo;
    NSString *m_usrIDNumber;
    NSString *m_usrPhoneNumber;
    unsigned int m_cardUserFlag;
    _Bool m_bHadCard;
    NSString *m_nsFacingReceiverQRCode;
    _Bool m_bCanUseNewCardToResetPwd;
    NSString *m_nsResetPwdNeedToOpenUrl;
    _Bool _m_bTouchIDOpen;
    _Bool _m_bTouchIDEnable;
    unsigned int _m_lqtState;
    int _cert_encrypt_type;
    NSString *m_nsTouchIDForbidword;
    long long paymenu_use_new;
    NSString *_m_lctWording;
    NSString *_m_lctUrl;
    WCPayLqbShowInfo *_lqbShowInfo;
    WCPayLqtCellInfo *_lqtCellInfo;
    long long _authen_account_type;
    NSString *_m_nsForgetPasswordUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsForgetPasswordUrl; // @synthesize m_nsForgetPasswordUrl=_m_nsForgetPasswordUrl;
@property(nonatomic) int cert_encrypt_type; // @synthesize cert_encrypt_type=_cert_encrypt_type;
@property(nonatomic) long long authen_account_type; // @synthesize authen_account_type=_authen_account_type;
@property(retain, nonatomic) WCPayLqtCellInfo *lqtCellInfo; // @synthesize lqtCellInfo=_lqtCellInfo;
@property(retain, nonatomic) WCPayLqbShowInfo *lqbShowInfo; // @synthesize lqbShowInfo=_lqbShowInfo;
@property(nonatomic) unsigned int m_lqtState; // @synthesize m_lqtState=_m_lqtState;
@property(retain, nonatomic) NSString *m_lctUrl; // @synthesize m_lctUrl=_m_lctUrl;
@property(retain, nonatomic) NSString *m_lctWording; // @synthesize m_lctWording=_m_lctWording;
@property(nonatomic) _Bool m_bTouchIDEnable; // @synthesize m_bTouchIDEnable=_m_bTouchIDEnable;
@property(nonatomic) _Bool m_bTouchIDOpen; // @synthesize m_bTouchIDOpen=_m_bTouchIDOpen;
@property(nonatomic) long long paymenu_use_new; // @synthesize paymenu_use_new;
@property(retain, nonatomic) NSString *m_nsTouchIDForbidword; // @synthesize m_nsTouchIDForbidword;
@property(retain, nonatomic) NSString *m_nsResetPwdNeedToOpenUrl; // @synthesize m_nsResetPwdNeedToOpenUrl;
@property(nonatomic) _Bool m_bCanUseNewCardToResetPwd; // @synthesize m_bCanUseNewCardToResetPwd;
@property(retain, nonatomic) NSString *m_nsFacingReceiverQRCode; // @synthesize m_nsFacingReceiverQRCode;
@property(nonatomic) _Bool m_bHadCard; // @synthesize m_bHadCard;
@property(nonatomic) unsigned int m_cardUserFlag; // @synthesize m_cardUserFlag;
@property(retain, nonatomic) NSString *m_usrPhoneNumber; // @synthesize m_usrPhoneNumber;
@property(retain, nonatomic) NSString *m_usrName; // @synthesize m_usrName;
@property(retain, nonatomic) NSString *m_usrIDNumber; // @synthesize m_usrIDNumber;
@property(retain, nonatomic) WCPayCredInfo *m_usrCredInfo; // @synthesize m_usrCredInfo;
@property(nonatomic) int m_regFlag; // @synthesize m_regFlag;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

