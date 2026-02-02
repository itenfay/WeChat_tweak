//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, WCTableViewSectionManager, WCTimeLineFooterView;
@protocol BrandTimelineSettingViewControllerDelegate;

@interface BrandTimelineSettingViewController
{
    _Bool _personalRecommendSwitch;
    _Bool _personalRecommendSwitchClickLimit;
    _Bool _personalShowUserHeadForPaySwitch;
    _Bool _personalShowUserHeadForPaySwitchClickLimit;
    _Bool _creationCenterNotifySwitch;
    _Bool _creationCenterNotifySwitchClickLimit;
    _Bool _finderRecommendSwitch;
    _Bool _finderRecommendSwitchClickLimit;
    _Bool _hasGotSetting;
    int _personalizedOpt;
    id <BrandTimelineSettingViewControllerDelegate> _m_delegate;
    MMTableViewInfo *_tableViewInfo;
    WCTimeLineFooterView *_tableViewFooterView;
    WCTableViewSectionManager *_firstSection;
    WCTableViewSectionManager *_secondSection;
}

- (void).cxx_destruct;
@property(nonatomic) int personalizedOpt; // @synthesize personalizedOpt=_personalizedOpt;
@property(nonatomic) _Bool hasGotSetting; // @synthesize hasGotSetting=_hasGotSetting;
@property(retain, nonatomic) WCTableViewSectionManager *secondSection; // @synthesize secondSection=_secondSection;
@property(retain, nonatomic) WCTableViewSectionManager *firstSection; // @synthesize firstSection=_firstSection;
@property(nonatomic) _Bool finderRecommendSwitchClickLimit; // @synthesize finderRecommendSwitchClickLimit=_finderRecommendSwitchClickLimit;
@property(nonatomic) _Bool finderRecommendSwitch; // @synthesize finderRecommendSwitch=_finderRecommendSwitch;
@property(nonatomic) _Bool creationCenterNotifySwitchClickLimit; // @synthesize creationCenterNotifySwitchClickLimit=_creationCenterNotifySwitchClickLimit;
@property(nonatomic) _Bool creationCenterNotifySwitch; // @synthesize creationCenterNotifySwitch=_creationCenterNotifySwitch;
@property(nonatomic) _Bool personalShowUserHeadForPaySwitchClickLimit; // @synthesize personalShowUserHeadForPaySwitchClickLimit=_personalShowUserHeadForPaySwitchClickLimit;
@property(nonatomic) _Bool personalShowUserHeadForPaySwitch; // @synthesize personalShowUserHeadForPaySwitch=_personalShowUserHeadForPaySwitch;
@property(nonatomic) _Bool personalRecommendSwitchClickLimit; // @synthesize personalRecommendSwitchClickLimit=_personalRecommendSwitchClickLimit;
@property(nonatomic) _Bool personalRecommendSwitch; // @synthesize personalRecommendSwitch=_personalRecommendSwitch;
@property(retain, nonatomic) WCTimeLineFooterView *tableViewFooterView; // @synthesize tableViewFooterView=_tableViewFooterView;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(nonatomic) __weak id <BrandTimelineSettingViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)showFailAlertView:(id)arg1 retryBlock:(CDUnknownBlockType)arg2 returnBlock:(CDUnknownBlockType)arg3;
- (void)dealWithFinderRecommendSwitch:(_Bool)arg1 error:(id)arg2 needReloadSections:(_Bool)arg3;
- (void)dealWithCreationCenterNotifySwitch:(_Bool)arg1 error:(id)arg2 needReloadSections:(_Bool)arg3;
- (void)dealWithHeadForPaySwitch:(_Bool)arg1 error:(id)arg2 needReloadSections:(_Bool)arg3;
- (void)dealWithPersonalRecommendSwitch:(_Bool)arg1 error:(id)arg2 needReloadSections:(_Bool)arg3;
- (void)_setFinderRecommendSwitch:(_Bool)arg1;
- (void)_setCreationCenterNotifySwitch:(_Bool)arg1;
- (void)_setPersonalHeadForPaySwitch:(_Bool)arg1;
- (void)_setPersonalRecommendSwitch:(_Bool)arg1;
- (void)showTableViewFooterView;
- (void)_getTimelineSetting;
- (void)onFinderRecommendSwitch:(id)arg1;
- (void)onPersonalCreationCenterNotifySwitch:(id)arg1;
- (void)onPersonalHeadForPaySwitch:(id)arg1;
- (void)onPersonalRecommendSwitch:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)genCreationCenterNotifyCountSetting;
- (void)genPayForHeadSetting;
- (void)genFinderRecommendSetting;
- (void)genPersonalRecommendSetting;
- (void)reloadSections;
- (void)initFooterView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

@end

