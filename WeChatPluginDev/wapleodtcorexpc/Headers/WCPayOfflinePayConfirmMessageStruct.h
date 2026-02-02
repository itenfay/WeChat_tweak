//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOfflinePayConfirmMessageStruct : NSObject
{
    NSString *m_nsMessageUid;
    NSString *m_nsProductName;
    NSString *m_nsProductMoney;
    NSString *m_nsProductOriginalMoney;
    unsigned char _routeInfo;
    unsigned long long _m_confirmType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned char routeInfo; // @synthesize routeInfo=_routeInfo;
@property(nonatomic) unsigned long long m_confirmType; // @synthesize m_confirmType=_m_confirmType;
@property(retain, nonatomic) NSString *m_nsProductOriginalMoney; // @synthesize m_nsProductOriginalMoney;
@property(retain, nonatomic) NSString *m_nsProductName; // @synthesize m_nsProductName;
@property(retain, nonatomic) NSString *m_nsProductMoney; // @synthesize m_nsProductMoney;
@property(retain, nonatomic) NSString *m_nsMessageUid; // @synthesize m_nsMessageUid;

@end

