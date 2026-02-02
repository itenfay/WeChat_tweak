//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMOrderCenterLandingPageContainerFilteringTitleView, MMOrderCenterLandingPageController, NSString;
@protocol MMOrderCenterReporter;

@interface MMOrderCenterLandingPageContainerController
{
    id <MMOrderCenterReporter> _reporter;
    MMOrderCenterLandingPageController *_primaryController;
    MMOrderCenterLandingPageController *_filteringController;
    MMOrderCenterLandingPageContainerFilteringTitleView *_filteringTitleView;
    NSString *_filteringAppId;
    NSString *_filteringShopName;
    unsigned long long _mode;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *filteringShopName; // @synthesize filteringShopName=_filteringShopName;
@property(retain, nonatomic) NSString *filteringAppId; // @synthesize filteringAppId=_filteringAppId;
@property(retain, nonatomic) MMOrderCenterLandingPageContainerFilteringTitleView *filteringTitleView; // @synthesize filteringTitleView=_filteringTitleView;
@property(retain, nonatomic) MMOrderCenterLandingPageController *filteringController; // @synthesize filteringController=_filteringController;
@property(retain, nonatomic) MMOrderCenterLandingPageController *primaryController; // @synthesize primaryController=_primaryController;
@property(retain, nonatomic) id <MMOrderCenterReporter> reporter; // @synthesize reporter=_reporter;
- (void)registerYReportSdk;
- (void)reportEntry;
- (void)updateViewController;
- (void)updateTitleBar;
- (void)onShopNameDetermined:(id)arg1 forFilteringAppId:(id)arg2;
- (void)onFilteringTitleViewTapped;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithFilteringAppId:(id)arg1 filteringShopName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

