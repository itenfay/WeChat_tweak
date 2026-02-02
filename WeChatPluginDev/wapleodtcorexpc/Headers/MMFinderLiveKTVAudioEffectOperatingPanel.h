//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveKTVAudioEffectSettingCell, MMFinderLiveTaskId, NSString, UIView, WCFinderLiveAnchorLogReporter, WCTableViewManager;

@interface MMFinderLiveKTVAudioEffectOperatingPanel
{
    MMFinderLiveTaskId *_taskId;
    UIView *_contentView;
    WCTableViewManager *_tableViewManager;
    WCFinderLiveAnchorLogReporter *_anchorLogReporter;
    MMFinderLiveKTVAudioEffectSettingCell *_humanVolumeSettingCell;
    MMFinderLiveKTVAudioEffectSettingCell *_bgmVolumeSettingCell;
}

+ (id)showWithTaskId:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak MMFinderLiveKTVAudioEffectSettingCell *bgmVolumeSettingCell; // @synthesize bgmVolumeSettingCell=_bgmVolumeSettingCell;
@property(nonatomic) __weak MMFinderLiveKTVAudioEffectSettingCell *humanVolumeSettingCell; // @synthesize humanVolumeSettingCell=_humanVolumeSettingCell;
@property(retain, nonatomic) WCFinderLiveAnchorLogReporter *anchorLogReporter; // @synthesize anchorLogReporter=_anchorLogReporter;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)reportForPanelDismiss;
- (void)reportForPanelExpose;
- (_Bool)mmTableView:(id)arg1 shouldBeginRecognizeGesture:(id)arg2;
- (void)onClearForExitLiveWithLiveTask:(id)arg1;
- (void)onVoiceEarMonitorUsableChanged:(_Bool)arg1 taskId:(id)arg2;
- (void)onVoiceEarMonitorEnableChanged:(_Bool)arg1 taskId:(id)arg2;
- (id)getSelectedReverbItem;
- (id)getAvailableReverbItems;
- (id)cornerShapeWithSize:(struct CGSize)arg1 byRoundingCorners:(unsigned long long)arg2;
- (id)liveTask;
- (double)tableWidth;
- (double)contentHeight;
- (double)contentWidth;
- (id)leftNavButton;
- (void)onLeftButtonTapped;
- (id)makeHeaderViewWith:(id)arg1 topPading:(double)arg2;
- (void)addReverbSettingSection;
- (void)addUIEffectSection;
- (void)addToneSettingSection;
- (void)addOriginSettingSection;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)layoutTableView;
- (void)configureOptionTableView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)registerExtensions;
- (void)setupPageSheetConfig;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

