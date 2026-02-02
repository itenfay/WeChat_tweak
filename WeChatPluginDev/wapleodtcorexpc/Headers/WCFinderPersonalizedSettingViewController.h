//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderCustomPanelSheet, WCTableViewManager;

@interface WCFinderPersonalizedSettingViewController
{
    unsigned long long _options;
    WCTableViewManager *_tableViewManager;
    WCFinderCustomPanelSheet *_panelSheet;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WCFinderCustomPanelSheet *panelSheet; // @synthesize panelSheet=_panelSheet;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (void)registerYReportSdk;
- (void)changeRecommendSceneValue:(int)arg1;
- (void)clickCloseRecommendLive;
- (void)clickCloseRecommendVideo;
- (void)cancelAlertAction:(id)arg1;
- (_Bool)getCurrentSwitchFlagWithScene:(int)arg1;
- (void)changePersonalizedRecommendationSwitch:(int)arg1;
- (void)changePersonalizedRecommendationLive;
- (void)changePersonalizedRecommendationVideo;
- (void)addPersonalizedRecommendationSet;
- (void)reloadTableView;
- (void)configureTableView;
- (void)viewDidLoad;

@end

