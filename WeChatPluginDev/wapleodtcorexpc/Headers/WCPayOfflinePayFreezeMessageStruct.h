//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOfflinePayFreezeMessageStruct : NSObject
{
    _Bool m_bFreezeOfflinePay;
    unsigned int m_uiFreezeOfflinePayType;
    NSString *m_nsFreezeOfflinePayMessage;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiFreezeOfflinePayType; // @synthesize m_uiFreezeOfflinePayType;
@property(retain, nonatomic) NSString *m_nsFreezeOfflinePayMessage; // @synthesize m_nsFreezeOfflinePayMessage;
@property(nonatomic) _Bool m_bFreezeOfflinePay; // @synthesize m_bFreezeOfflinePay;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

