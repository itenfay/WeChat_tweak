//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCPayCheckPayPwdByTokenRequest : NSObject
{
    NSString *m_nsPayPwd;
    NSString *m_nsToken;
    _Bool m_bResend;
    NSString *_m_bizInfo;
    NSString *_m_useTouch;
    NSData *_m_fingerData;
    NSString *_m_biopayv2authReq;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_biopayv2authReq; // @synthesize m_biopayv2authReq=_m_biopayv2authReq;
@property(nonatomic) NSData *m_fingerData; // @synthesize m_fingerData=_m_fingerData;
@property(copy, nonatomic) NSString *m_useTouch; // @synthesize m_useTouch=_m_useTouch;
@property(retain, nonatomic) NSString *m_bizInfo; // @synthesize m_bizInfo=_m_bizInfo;
@property(nonatomic) _Bool m_bResend; // @synthesize m_bResend;
@property(retain, nonatomic) NSString *m_nsPayPwd; // @synthesize m_nsPayPwd;
@property(retain, nonatomic) NSString *m_nsToken; // @synthesize m_nsToken;

@end

