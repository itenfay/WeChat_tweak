//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetWecoinPriceListResponse, NSString;
@protocol MMFinderLivePayMgrExt, MMPageSheetProvider;

@interface WCCoinBuyCoinParameter
{
    _Bool _panelAlwaysDarkMode;
    _Bool _shouldStartNewSession;
    int _scene;
    unsigned int _diffWecoinCount;
    id <MMPageSheetProvider> _pageSheetProvider;
    unsigned long long _businessId;
    unsigned long long _panelShowType;
    NSString *_directBuyProductId;
    GetWecoinPriceListResponse *_priceListResponse;
    id _customData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldStartNewSession; // @synthesize shouldStartNewSession=_shouldStartNewSession;
@property(retain, nonatomic) id customData; // @synthesize customData=_customData;
@property(nonatomic) unsigned int diffWecoinCount; // @synthesize diffWecoinCount=_diffWecoinCount;
@property(retain, nonatomic) GetWecoinPriceListResponse *priceListResponse; // @synthesize priceListResponse=_priceListResponse;
@property(copy, nonatomic) NSString *directBuyProductId; // @synthesize directBuyProductId=_directBuyProductId;
@property(nonatomic) unsigned long long panelShowType; // @synthesize panelShowType=_panelShowType;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long businessId; // @synthesize businessId=_businessId;
@property(nonatomic) __weak id <MMPageSheetProvider> pageSheetProvider; // @synthesize pageSheetProvider=_pageSheetProvider;
@property(nonatomic) _Bool panelAlwaysDarkMode; // @synthesize panelAlwaysDarkMode=_panelAlwaysDarkMode;
- (id)init;
@property(nonatomic) __weak id <MMFinderLivePayMgrExt> payLogicOberver;

@end

