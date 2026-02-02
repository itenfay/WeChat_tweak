//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCardAvailableSeed
{
    unsigned int _shopID;
    unsigned int _canMultiSelect;
    unsigned int _timeStamp;
    unsigned int _onlyInvoice;
    NSString *_appID;
    NSString *_cardType;
    NSString *_cardTpID;
    NSString *_signType;
    NSString *_cardSign;
    NSString *_nonceStr;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int onlyInvoice; // @synthesize onlyInvoice=_onlyInvoice;
@property(retain, nonatomic) NSString *nonceStr; // @synthesize nonceStr=_nonceStr;
@property(nonatomic) unsigned int timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSString *cardSign; // @synthesize cardSign=_cardSign;
@property(retain, nonatomic) NSString *signType; // @synthesize signType=_signType;
@property(retain, nonatomic) NSString *cardTpID; // @synthesize cardTpID=_cardTpID;
@property(retain, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(nonatomic) unsigned int canMultiSelect; // @synthesize canMultiSelect=_canMultiSelect;
@property(nonatomic) unsigned int shopID; // @synthesize shopID=_shopID;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;

@end

