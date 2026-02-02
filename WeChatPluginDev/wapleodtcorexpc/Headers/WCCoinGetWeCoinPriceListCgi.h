//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCCoinGetWeCoinPriceListCgiDelegate;

@interface WCCoinGetWeCoinPriceListCgi
{
    unsigned int _diffWecoinCount;
    unsigned int _scene;
    unsigned long long _businessId;
    NSString *_currencyCode;
    id <WCCoinGetWeCoinPriceListCgiDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCoinGetWeCoinPriceListCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int diffWecoinCount; // @synthesize diffWecoinCount=_diffWecoinCount;
@property(retain, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(nonatomic) unsigned long long businessId; // @synthesize businessId=_businessId;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (id)init;

@end

