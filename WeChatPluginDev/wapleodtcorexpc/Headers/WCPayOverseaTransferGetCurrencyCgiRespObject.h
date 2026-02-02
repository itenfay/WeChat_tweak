//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOverseaTransferGetCurrencyCgiRespObject : NSObject
{
    int _m_currency;
    NSString *_m_currencyUint;
    NSString *_m_currencyWording;
    NSString *_m_notice;
    NSString *_m_noticeUrl;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_noticeUrl; // @synthesize m_noticeUrl=_m_noticeUrl;
@property(retain, nonatomic) NSString *m_notice; // @synthesize m_notice=_m_notice;
@property(retain, nonatomic) NSString *m_currencyWording; // @synthesize m_currencyWording=_m_currencyWording;
@property(retain, nonatomic) NSString *m_currencyUint; // @synthesize m_currencyUint=_m_currencyUint;
@property(nonatomic) int m_currency; // @synthesize m_currency=_m_currency;

@end

