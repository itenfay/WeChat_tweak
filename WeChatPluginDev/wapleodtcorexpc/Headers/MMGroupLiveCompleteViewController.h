//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LiveInfo, MMLiveTask, MMUIButton, MMUILabel, NSString, StatViewCell, UIButton, UIView;

@interface MMGroupLiveCompleteViewController
{
    _Bool _isAudience;
    LiveInfo *_liveInfo;
    MMLiveTask *_liveTask;
    NSString *_roomId;
    NSString *_anchorIdentityId;
    NSString *_liveName;
    UIView *_backgroundView;
    MMUIButton *_closeButton;
    MMUILabel *_liveNameLabel;
    MMUILabel *_liveVideoLengthLabel;
    MMUILabel *_reportTitleEndingLabel;
    UIView *_statView;
    StatViewCell *_totalUsersCell;
    StatViewCell *_totalCommentsCell;
    StatViewCell *_totalLikesCell;
    UIView *_replayStatusTopLine;
    UIView *_replayStatusBottomLine;
    MMUILabel *_replayStatusLabel;
    MMUIButton *_replayStatusButton;
    UIView *_replayStatusRightArrow;
    UIButton *_doneButton;
    long long _closeButtonStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long closeButtonStyle; // @synthesize closeButtonStyle=_closeButtonStyle;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIView *replayStatusRightArrow; // @synthesize replayStatusRightArrow=_replayStatusRightArrow;
@property(retain, nonatomic) MMUIButton *replayStatusButton; // @synthesize replayStatusButton=_replayStatusButton;
@property(retain, nonatomic) MMUILabel *replayStatusLabel; // @synthesize replayStatusLabel=_replayStatusLabel;
@property(retain, nonatomic) UIView *replayStatusBottomLine; // @synthesize replayStatusBottomLine=_replayStatusBottomLine;
@property(retain, nonatomic) UIView *replayStatusTopLine; // @synthesize replayStatusTopLine=_replayStatusTopLine;
@property(retain, nonatomic) StatViewCell *totalLikesCell; // @synthesize totalLikesCell=_totalLikesCell;
@property(retain, nonatomic) StatViewCell *totalCommentsCell; // @synthesize totalCommentsCell=_totalCommentsCell;
@property(retain, nonatomic) StatViewCell *totalUsersCell; // @synthesize totalUsersCell=_totalUsersCell;
@property(retain, nonatomic) UIView *statView; // @synthesize statView=_statView;
@property(retain, nonatomic) MMUILabel *reportTitleEndingLabel; // @synthesize reportTitleEndingLabel=_reportTitleEndingLabel;
@property(retain, nonatomic) MMUILabel *liveVideoLengthLabel; // @synthesize liveVideoLengthLabel=_liveVideoLengthLabel;
@property(retain, nonatomic) MMUILabel *liveNameLabel; // @synthesize liveNameLabel=_liveNameLabel;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSString *liveName; // @synthesize liveName=_liveName;
@property(retain, nonatomic) NSString *anchorIdentityId; // @synthesize anchorIdentityId=_anchorIdentityId;
@property(nonatomic) _Bool isAudience; // @synthesize isAudience=_isAudience;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) MMLiveTask *liveTask; // @synthesize liveTask=_liveTask;
@property(retain, nonatomic) LiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
- (void)onClickMakeSureActionWithViewController:(id)arg1;
- (id)createVerticalSeperator;
- (id)createHorizontalSeperator;
- (id)createReportLabel:(id)arg1 withFontSize:(id)arg2 withTextColor:(id)arg3;
@property(readonly, nonatomic) unsigned int expiredDays;
@property(readonly, nonatomic) _Bool isReplayExpired;
- (void)onStatViewCellClicked:(id)arg1;
- (void)onGetLiveInfoWithResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3 andLiveInfo:(id)arg4;
- (void)onLiveClosedResult:(id)arg1 andLiveId:(unsigned long long)arg2;
- (void)onOpenLiveReplayResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3 enableLiveReplay:(_Bool)arg4;
- (void)onBackButtonClicked;
- (void)onDoneButtonClicked:(id)arg1;
- (void)onReplayStatusButtonIfReplayExpiredClicked;
- (void)onReplayStatusButtonIfReplayErrorAnchorOnlyClicked;
- (void)onReplayStatusButtonIfReplayClosedAudienceOnlyClicked;
- (void)onReplayStatusButtonClickedToReplayPageAuidenceOnlyClicked;
- (void)onReplayStatusButtonClicked;
- (void)layoutDoneButton;
- (void)layoutStatView;
- (void)layoutTopLabels;
- (void)setupUI;
- (void)setupBlurBackground;
- (void)updateReplayStatusButtonIfReplayExpired;
- (void)updateReplayStatusButtonIfReplayErrorAnchorOnly;
- (void)updateReplayStatusButtonIfReplayClosedAudienceOnly;
- (void)updateReplayStatusButtonIfReplayIsReadyAudienceOnly;
- (void)hideReplayStatusButtonView;
- (void)updateReplayStatusForAudience;
- (void)updateReplayStatus;
- (void)updateWithLiveInfo:(id)arg1;
- (void)loadData;
- (_Bool)shouldInteractivePop;
- (long long)preferredStatusBarStyle;
- (_Bool)useBlackStatusbar;
- (long long)getCurrentOrientation;
- (void)forceRotateToPortrait;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithLiveTask:(id)arg1 closeButtonStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

