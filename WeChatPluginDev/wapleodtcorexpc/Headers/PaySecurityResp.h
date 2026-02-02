//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BasicSecurityInfo, NSString, PaySecurityDialogInfo, PropertySecurityInfo, WCPayBalancePrivacyInfo, WCPayDigitalCertPayManageResp, WalletLockInfo;

@interface PaySecurityResp : NSObject
{
    int _cert_encrypt_type;
    NSString *_wx_security_title;
    NSString *_more_security_title;
    BasicSecurityInfo *_basic_security_item;
    WCPayDigitalCertPayManageResp *_cert_info;
    WalletLockInfo *_wallet_lock_info;
    PropertySecurityInfo *_property_security_info;
    PaySecurityDialogInfo *_dialog_info;
    WCPayBalancePrivacyInfo *_balance_privacy_info;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int cert_encrypt_type; // @synthesize cert_encrypt_type=_cert_encrypt_type;
@property(retain, nonatomic) WCPayBalancePrivacyInfo *balance_privacy_info; // @synthesize balance_privacy_info=_balance_privacy_info;
@property(retain, nonatomic) PaySecurityDialogInfo *dialog_info; // @synthesize dialog_info=_dialog_info;
@property(retain, nonatomic) PropertySecurityInfo *property_security_info; // @synthesize property_security_info=_property_security_info;
@property(retain, nonatomic) WalletLockInfo *wallet_lock_info; // @synthesize wallet_lock_info=_wallet_lock_info;
@property(retain, nonatomic) WCPayDigitalCertPayManageResp *cert_info; // @synthesize cert_info=_cert_info;
@property(retain, nonatomic) BasicSecurityInfo *basic_security_item; // @synthesize basic_security_item=_basic_security_item;
@property(copy, nonatomic) NSString *more_security_title; // @synthesize more_security_title=_more_security_title;
@property(copy, nonatomic) NSString *wx_security_title; // @synthesize wx_security_title=_wx_security_title;
- (void)genFromDic:(id)arg1;

@end

