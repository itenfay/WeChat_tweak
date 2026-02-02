//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOrderDetailSubscribeBrandInfo : NSObject
{
    NSString *m_nsHeadUrl;
    NSString *m_nsSubscribeDesc;
    NSString *m_nsSubscribeUrl;
    NSString *m_nsUserName;
    int m_enWCPayServiceSubscribeStrategy;
}

- (void).cxx_destruct;
@property(nonatomic) int m_enWCPayServiceSubscribeStrategy; // @synthesize m_enWCPayServiceSubscribeStrategy;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName;
@property(retain, nonatomic) NSString *m_nsSubscribeUrl; // @synthesize m_nsSubscribeUrl;
@property(retain, nonatomic) NSString *m_nsSubscribeDesc; // @synthesize m_nsSubscribeDesc;
@property(retain, nonatomic) NSString *m_nsHeadUrl; // @synthesize m_nsHeadUrl;

@end

