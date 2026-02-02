//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveUserAttrUserSetting, MMFinderLiveTaskId, WCTableViewManager;

@interface MMFinderLiveRecommandSettingSheet
{
    MMFinderLiveTaskId *_taskId;
    WCTableViewManager *_tableViewManager;
    FinderLiveUserAttrUserSetting *_userSetting;
}

+ (id)showWithTaskId:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) FinderLiveUserAttrUserSetting *userSetting; // @synthesize userSetting=_userSetting;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (id)headerViewWithTitle:(id)arg1 height:(double)arg2;
- (id)cornerShapeWithSize:(struct CGSize)arg1 byRoundingCorners:(unsigned long long)arg2;
- (id)getTranslateRecommendCitiesMaxString;
- (id)genUpdatedLiteAppQuery;
- (id)commonSelectIcon;
- (id)liveTask;
- (double)fixedHeight;
- (double)tableViewWidth;
- (id)getCurrentRightButton;
- (void)rightButtonAction;
- (void)leftButtonAction;
- (id)getCurrentLeftButton;
- (void)sendRecommendOption;
- (void)updateDataOnSubmitPickCity:(id)arg1 vc:(id)arg2;
- (void)internalSetupAndOpenLiteAppVC:(id)arg1;
- (void)openSelectCityInfo;
- (id)genSelectCityCellWithStr:(id)arg1 size:(struct CGSize)arg2;
- (id)genSomeCityCell;
- (id)genAllCityCell;
- (void)addRecommendAeraSettingsSection;
- (void)addRecommendToFriendsSettingsSection;
- (void)addSettingSections;
- (void)configureOptionTableView;
- (void)configureUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (id)initWithTaskId:(id)arg1;

@end

