//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSMutableDictionary, NSString, UITableView, WCFinderPoiRecommendDishesViewModel;

@interface WCFinderPoiRecommendDishesViewController
{
    WCFinderPoiRecommendDishesViewModel *_viewModel;
    NSMutableDictionary *_reportDict;
    UITableView *_tableView;
    MMUIButton *_footerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableDictionary *reportDict; // @synthesize reportDict=_reportDict;
@property(retain, nonatomic) WCFinderPoiRecommendDishesViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)registerYReportSdk;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onPoiRecommendDishesRequestFail;
- (void)onPoiRecommendDishesUpdate;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onClickFooterView;
- (void)viewDidLoad;
- (id)initWithRecommendDishesComponent:(id)arg1 reportDict:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

