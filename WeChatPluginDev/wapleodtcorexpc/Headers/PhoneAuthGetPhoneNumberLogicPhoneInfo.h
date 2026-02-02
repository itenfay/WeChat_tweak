//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface PhoneAuthGetPhoneNumberLogicPhoneInfo
{
    _Bool _isBindWechat;
    _Bool _needAuth;
    _Bool _allowSendSms;
    NSString *_mobile;
    NSString *_showMobile;
    NSString *_encryptData;
    NSString *_iv;
    NSString *_cloudId;
    NSString *_data;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *cloudId; // @synthesize cloudId=_cloudId;
@property(copy, nonatomic) NSString *iv; // @synthesize iv=_iv;
@property(copy, nonatomic) NSString *encryptData; // @synthesize encryptData=_encryptData;
@property(nonatomic) _Bool allowSendSms; // @synthesize allowSendSms=_allowSendSms;
@property(nonatomic) _Bool needAuth; // @synthesize needAuth=_needAuth;
@property(nonatomic) _Bool isBindWechat; // @synthesize isBindWechat=_isBindWechat;
@property(copy, nonatomic) NSString *showMobile; // @synthesize showMobile=_showMobile;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
- (id)getResultDic;

@end

