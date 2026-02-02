//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, MMTableViewInfo, UIView;

@interface MMFinderLiveSettingPanel
{
    CDUnknownBlockType _pipSwitchChangeCallback;
    MMFinderLiveTaskId *_taskId;
    UIView *_contentView;
    MMTableViewInfo *_settingTableViewInfo;
}

+ (_Bool)hasSettingEntranceForLive:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTableViewInfo *settingTableViewInfo; // @synthesize settingTableViewInfo=_settingTableViewInfo;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType pipSwitchChangeCallback; // @synthesize pipSwitchChangeCallback=_pipSwitchChangeCallback;
- (id)audienceLogReporter;
- (void)pageSheetDidDisappear;
- (void)onPIPSettingSwitch:(id)arg1;
- (void)leftButtonAction;
- (void)addPIPSwitchCellInSection:(id)arg1;
- (void)reloadSettingTable;
- (void)layoutSettingTable;
- (double)contentHeight;
- (double)contentWidth;
- (void)layoutContentView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)getCurrentLeftButton;
- (void)setupPageSheetConfig;
- (id)initWithTaskId:(id)arg1;

@end

