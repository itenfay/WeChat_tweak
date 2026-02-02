//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayCreditPayVerifyPasswdResponseStruct : NSObject
{
    NSString *m_nsSessionKey;
    NSString *m_nsNameMask;
    NSString *m_nsIDNumberMask;
    _Bool m_bNeedFillAllInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bNeedFillAllInfo; // @synthesize m_bNeedFillAllInfo;
@property(retain, nonatomic) NSString *m_nsIDNumberMask; // @synthesize m_nsIDNumberMask;
@property(retain, nonatomic) NSString *m_nsNameMask; // @synthesize m_nsNameMask;
@property(retain, nonatomic) NSString *m_nsSessionKey; // @synthesize m_nsSessionKey;

@end

