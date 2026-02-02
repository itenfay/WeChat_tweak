//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableDictionary, NSString, WCOPackageItem, WCOutGetPackageProductListCgi, WCOutPurchasePackageCgi;

@interface WCOutPackageViewController
{
    int _purchaseRetCode;
    NSMutableDictionary *_WCOPkgItemsDict;
    MMTableView *_tableView;
    WCOutGetPackageProductListCgi *_getproductCgi;
    WCOutPurchasePackageCgi *_purchaseCgi;
    WCOPackageItem *_item_buy;
}

- (void).cxx_destruct;
@property(nonatomic) int purchaseRetCode; // @synthesize purchaseRetCode=_purchaseRetCode;
@property(retain, nonatomic) WCOPackageItem *item_buy; // @synthesize item_buy=_item_buy;
@property(retain, nonatomic) WCOutPurchasePackageCgi *purchaseCgi; // @synthesize purchaseCgi=_purchaseCgi;
@property(retain, nonatomic) WCOutGetPackageProductListCgi *getproductCgi; // @synthesize getproductCgi=_getproductCgi;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableDictionary *WCOPkgItemsDict; // @synthesize WCOPkgItemsDict=_WCOPkgItemsDict;
- (double)getCellContentHeightBtIndex:(id)arg1;
- (void)showNOPackageLabel;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onClickBuy:(id)arg1;
- (void)PurchasePackageResponse:(int)arg1 Request:(id)arg2 Response:(id)arg3;
- (void)PackageProductListResponse:(int)arg1 Request:(id)arg2 Response:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)initTableView;
- (id)getPackageByIndex:(unsigned long long)arg1;
- (void)configData;
- (void)configTableWithoutData;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidPop:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

