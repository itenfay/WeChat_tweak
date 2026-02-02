//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LiveInfo, MMLiveTask, MMUILabel, NSString, UIButton, UIView;

@interface MMGroupLiveReplaySettingViewController
{
    _Bool _needAutoRotateToPortrait;
    _Bool _enableLiveReplay;
    long long _currDeviceOrientation;
    LiveInfo *_liveInfo;
    MMLiveTask *_liveTask;
    NSString *_roomId;
    NSString *_replayUrl;
    MMUILabel *_titleLabel;
    MMUILabel *_subTitleLabel;
    UIView *_replaySettingTopLine;
    UIView *_replaySettingBottomLine;
    UIButton *_replaySettingButton;
    MMUILabel *_replaySettingButtonLabel;
    MMUILabel *_replayStatusTitle;
    MMUILabel *_replayStatusTips;
    UIButton *_replayButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *replayButton; // @synthesize replayButton=_replayButton;
@property(retain, nonatomic) MMUILabel *replayStatusTips; // @synthesize replayStatusTips=_replayStatusTips;
@property(retain, nonatomic) MMUILabel *replayStatusTitle; // @synthesize replayStatusTitle=_replayStatusTitle;
@property(retain, nonatomic) MMUILabel *replaySettingButtonLabel; // @synthesize replaySettingButtonLabel=_replaySettingButtonLabel;
@property(retain, nonatomic) UIButton *replaySettingButton; // @synthesize replaySettingButton=_replaySettingButton;
@property(retain, nonatomic) UIView *replaySettingBottomLine; // @synthesize replaySettingBottomLine=_replaySettingBottomLine;
@property(retain, nonatomic) UIView *replaySettingTopLine; // @synthesize replaySettingTopLine=_replaySettingTopLine;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool enableLiveReplay; // @synthesize enableLiveReplay=_enableLiveReplay;
@property(retain, nonatomic) NSString *replayUrl; // @synthesize replayUrl=_replayUrl;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) MMLiveTask *liveTask; // @synthesize liveTask=_liveTask;
@property(retain, nonatomic) LiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(nonatomic) long long currDeviceOrientation; // @synthesize currDeviceOrientation=_currDeviceOrientation;
@property(nonatomic) _Bool needAutoRotateToPortrait; // @synthesize needAutoRotateToPortrait=_needAutoRotateToPortrait;
- (id)createHorizontalSeperator;
- (id)createReportLabel:(id)arg1 withFontSize:(id)arg2 withTextColor:(id)arg3;
- (void)onClickMakeSureActionWithViewController:(id)arg1;
- (void)onGetLiveInfoWithResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3 andLiveInfo:(id)arg4;
- (void)onOpenLiveReplayResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3 enableLiveReplay:(_Bool)arg4;
- (void)onMMGroupLiveReplaySettingPickerControllerReplayStatus:(_Bool)arg1;
- (void)onReplayButtonIfReplayErrorClicked;
- (void)onReplayButtonIfReplayExpiredClicked;
- (void)onReplayButtonClicked;
- (void)onReplaySettingButtonClicked;
- (void)layoutReplayStatusView;
- (void)layoutReplaySettingButtonView;
- (void)layoutHeaderView;
- (void)setupUI;
- (void)updateReplayButtonIfReplayInProcess;
- (void)updateReplayButtonIfReplayIsReady;
- (void)hideReplayStatus;
- (void)updateReplaySettingButtonLabel;
- (void)updateReplayStatus;
- (void)updateWithLiveInfo:(id)arg1;
- (void)loadData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithLiveTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

