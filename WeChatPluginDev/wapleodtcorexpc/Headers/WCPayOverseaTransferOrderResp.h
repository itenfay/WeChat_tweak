//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOverseaTransferOrderResp : NSObject
{
    int _m_transferNum;
    int _m_transferType;
    NSString *_m_payUrl;
    NSString *_m_tradeUrl;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int m_transferType; // @synthesize m_transferType=_m_transferType;
@property(nonatomic) int m_transferNum; // @synthesize m_transferNum=_m_transferNum;
@property(retain, nonatomic) NSString *m_tradeUrl; // @synthesize m_tradeUrl=_m_tradeUrl;
@property(retain, nonatomic) NSString *m_payUrl; // @synthesize m_payUrl=_m_payUrl;

@end

