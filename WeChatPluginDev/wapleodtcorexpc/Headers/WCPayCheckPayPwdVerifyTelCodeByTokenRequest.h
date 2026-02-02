//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayCheckPayPwdVerifyTelCodeByTokenRequest : NSObject
{
    NSString *m_nsPayPwd;
    NSString *m_nsToken;
    NSString *m_nsVerifyCode;
    NSString *m_nsRelationKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsVerifyCode; // @synthesize m_nsVerifyCode;
@property(retain, nonatomic) NSString *m_nsToken; // @synthesize m_nsToken;
@property(retain, nonatomic) NSString *m_nsPayPwd; // @synthesize m_nsPayPwd;
@property(retain, nonatomic) NSString *m_nsRelationKey; // @synthesize m_nsRelationKey;

@end

