//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSData, NSString;
@protocol MMPageSheetProvider;

@interface WCCoinConsumeParameter
{
    _Bool _agreementSelected;
    int _businessId;
    unsigned int _count;
    unsigned int _productWecoinPrice;
    unsigned long long _mode;
    NSString *_billNo;
    NSString *_consumeProductId;
    NSData *_extReq;
    NSData *_buff;
    id <MMPageSheetProvider> _pageSheetProvider;
    NSString *_productTitle;
    NSString *_productTitleInsufficient;
    NSArray *_consumeTipsWording;
    NSString *_consumeButtonTitle;
    NSString *_consumeButtonTitleInsufficient;
    NSString *_agreementString;
    NSString *_consumeLoadingString;
    NSString *_showPanelLoadingString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *showPanelLoadingString; // @synthesize showPanelLoadingString=_showPanelLoadingString;
@property(retain, nonatomic) NSString *consumeLoadingString; // @synthesize consumeLoadingString=_consumeLoadingString;
@property(retain, nonatomic) NSString *agreementString; // @synthesize agreementString=_agreementString;
@property(nonatomic) _Bool agreementSelected; // @synthesize agreementSelected=_agreementSelected;
@property(retain, nonatomic) NSString *consumeButtonTitleInsufficient; // @synthesize consumeButtonTitleInsufficient=_consumeButtonTitleInsufficient;
@property(retain, nonatomic) NSString *consumeButtonTitle; // @synthesize consumeButtonTitle=_consumeButtonTitle;
@property(retain, nonatomic) NSArray *consumeTipsWording; // @synthesize consumeTipsWording=_consumeTipsWording;
@property(nonatomic) unsigned int productWecoinPrice; // @synthesize productWecoinPrice=_productWecoinPrice;
@property(retain, nonatomic) NSString *productTitleInsufficient; // @synthesize productTitleInsufficient=_productTitleInsufficient;
@property(retain, nonatomic) NSString *productTitle; // @synthesize productTitle=_productTitle;
@property(nonatomic) __weak id <MMPageSheetProvider> pageSheetProvider; // @synthesize pageSheetProvider=_pageSheetProvider;
@property(retain, nonatomic) NSData *buff; // @synthesize buff=_buff;
@property(retain, nonatomic) NSData *extReq; // @synthesize extReq=_extReq;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *consumeProductId; // @synthesize consumeProductId=_consumeProductId;
@property(retain, nonatomic) NSString *billNo; // @synthesize billNo=_billNo;
@property(nonatomic) int businessId; // @synthesize businessId=_businessId;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (id)init;

@end

