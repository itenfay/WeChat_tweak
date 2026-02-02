//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayCreditPayAuthenResponseStruct : NSObject
{
    NSString *m_nsSessionKey;
    _Bool m_bZXBankUser;
    NSString *m_nsPhoneNumMask;
    _Bool m_bNeedBindCard;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bNeedBindCard; // @synthesize m_bNeedBindCard;
@property(retain, nonatomic) NSString *m_nsPhoneNumMask; // @synthesize m_nsPhoneNumMask;
@property(nonatomic) _Bool m_bZXBankUser; // @synthesize m_bZXBankUser;
@property(retain, nonatomic) NSString *m_nsSessionKey; // @synthesize m_nsSessionKey;

@end

