//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface QRCodeOAuthState
{
    unsigned int _errCode;
    NSString *_redirectUrl;
    NSString *_confirmRedirectUrl;
    NSString *_confirmWording;
    NSString *_nickName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *confirmWording; // @synthesize confirmWording=_confirmWording;
@property(copy, nonatomic) NSString *confirmRedirectUrl; // @synthesize confirmRedirectUrl=_confirmRedirectUrl;
@property(copy, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(nonatomic) unsigned int errCode; // @synthesize errCode=_errCode;
- (id)description;

@end

