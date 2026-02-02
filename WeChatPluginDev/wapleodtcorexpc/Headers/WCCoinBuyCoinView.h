//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetWecoinPriceListResponse, NSString, WCPayBuyCoinDetailView;
@protocol WCCoinBuyCoinViewDelegate;

@interface WCCoinBuyCoinView
{
    _Bool _alwaysDarkMode;
    unsigned int _diffWecoinCount;
    id <WCCoinBuyCoinViewDelegate> _delegate;
    GetWecoinPriceListResponse *_priceListsResponse;
    unsigned long long _panelShowType;
    WCPayBuyCoinDetailView *_buyCoinDetailView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayBuyCoinDetailView *buyCoinDetailView; // @synthesize buyCoinDetailView=_buyCoinDetailView;
@property(nonatomic) unsigned long long panelShowType; // @synthesize panelShowType=_panelShowType;
@property(nonatomic) _Bool alwaysDarkMode; // @synthesize alwaysDarkMode=_alwaysDarkMode;
@property(nonatomic) unsigned int diffWecoinCount; // @synthesize diffWecoinCount=_diffWecoinCount;
@property(retain, nonatomic) GetWecoinPriceListResponse *priceListsResponse; // @synthesize priceListsResponse=_priceListsResponse;
@property(nonatomic) __weak id <WCCoinBuyCoinViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)newUserDiscount:(id)arg1;
- (id)getBalanceButton:(long long)arg1;
- (void)shouldUpdateHeight;
- (void)shouldOpenWeb:(id)arg1;
- (void)clickWithInfo:(id)arg1;
- (void)pageSheetDidClose:(_Bool)arg1;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

