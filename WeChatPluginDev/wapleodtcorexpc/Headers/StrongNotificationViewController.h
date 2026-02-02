//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAudioPlayer, FakeStrongNotificationViewController, MMTableView, MMTimer, MMUIButton, MMUILabel, MMUIView, NSArray, NSMutableArray, NSMutableDictionary, NSString, StrongNotificationContentView, UIImageView;
@protocol StrongNotificationViewControllerDelegate;

@interface StrongNotificationViewController
{
    MMTableView *m_tableView;
    NSMutableDictionary *m_cellHeightDic;
    MMUIView *m_maskView;
    MMUIButton *m_closeButton;
    MMUIView *m_topView;
    MMUILabel *m_topViewTitleLabel;
    MMUIButton *m_topViewTitleLabelBn;
    UIImageView *m_logoImageView;
    MMTimer *m_stopPlaySoundAndAppVibrationTimer;
    AVAudioPlayer *m_player;
    _Bool m_isHadPlaySoundAndAppVibration;
    NSArray *m_strongNotificationItemAndMessageArray;
    _Bool _hideTopView;
    _Bool _ignorePlaySoundAndAppVibration;
    _Bool _dragging;
    _Bool _doingCloseAnimation;
    _Bool _doingShowAnimation;
    _Bool _preparingShowAnimation;
    StrongNotificationContentView *m_contentView;
    id <StrongNotificationViewControllerDelegate> _m_delegate;
    NSMutableArray *_arrExposeLiveTid;
    FakeStrongNotificationViewController *_fakeViewController;
    StrongNotificationContentView *_fakeContentView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool preparingShowAnimation; // @synthesize preparingShowAnimation=_preparingShowAnimation;
@property(nonatomic) _Bool doingShowAnimation; // @synthesize doingShowAnimation=_doingShowAnimation;
@property(nonatomic) _Bool doingCloseAnimation; // @synthesize doingCloseAnimation=_doingCloseAnimation;
@property(nonatomic) _Bool dragging; // @synthesize dragging=_dragging;
@property(retain, nonatomic) StrongNotificationContentView *fakeContentView; // @synthesize fakeContentView=_fakeContentView;
@property(retain, nonatomic) FakeStrongNotificationViewController *fakeViewController; // @synthesize fakeViewController=_fakeViewController;
@property(retain, nonatomic) NSMutableArray *arrExposeLiveTid; // @synthesize arrExposeLiveTid=_arrExposeLiveTid;
@property(nonatomic) _Bool ignorePlaySoundAndAppVibration; // @synthesize ignorePlaySoundAndAppVibration=_ignorePlaySoundAndAppVibration;
@property(nonatomic) _Bool hideTopView; // @synthesize hideTopView=_hideTopView;
@property(nonatomic) __weak id <StrongNotificationViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) StrongNotificationContentView *m_contentView; // @synthesize m_contentView;
- (void)onEnterBackground;
- (_Bool)isFinderLiveStrongNotification:(id)arg1;
- (void)stopPlaySound;
- (void)playSound:(id)arg1 OfType:(id)arg2 numberOfLoops:(long long)arg3;
- (void)asyncPlaySound:(id)arg1;
- (void)stopPlaySoundAndAppVibration;
- (void)checkNeedAsyncPlaySound;
- (void)stopPlaySoundAndAppVibrationTimerAction;
- (void)startStopPlaySoundAndAppVibrationTimer;
- (void)onModifyStrongNotification:(id)arg1 contactUserName:(id)arg2;
- (void)handleContentViewPanGesture:(id)arg1;
- (void)closeFinderUnreadMsg:(id)arg1;
- (void)reportFinderLiveExposeIfNeeded;
- (void)reloadFinderLiveData;
- (void)jumpFinderViewWithMsg:(id)arg1;
- (id)genLiveRoomAlternativeDataItem:(id)arg1;
- (void)jumpFinderLiveOpWrap:(id)arg1;
- (void)jumpMsgContentViewController:(id)arg1;
- (void)handleSelectIndexPath:(id)arg1 tableView:(id)arg2;
- (void)doClickTopViewTitleLabel;
- (void)doClickClose;
- (void)onClickClose;
- (void)scrollClickClose;
- (void)doAddNewStrongNotificationAnimationIfNeeded;
- (void)doCloseStrongNotificationAnimationIfNeeded:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getScheduleTableViewCellWithIndexPath:(id)arg1;
- (id)getFinderUnreadMsgTableViewCellWithIndexPath:(id)arg1;
- (void)updateFinderPushTableViewCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getFinderPushTableViewCellWithCellIdentifier:(id)arg1;
- (void)updateFinderLiveTableViewCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getFinderLiveTableViewCellWithCellIdentifier:(id)arg1;
- (id)getWeAppSubscriptionTableViewCellWithCellIdentifier:(id)arg1 indexPath:(id)arg2;
- (void)updateNormalTableViewCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getNormalTableViewCellWithCellIdentifier:(id)arg1;
- (void)updateWeAppTableViewCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getWeAppTableViewCellWithCellIdentifier:(id)arg1;
- (id)getRoamTableViewCellWithCellIdentifier:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getLiveIDWithMessageWrap:(id)arg1;
- (id)getNonceIDWithMessageWrap:(id)arg1;
- (id)getFeedIDWithMessageWrap:(id)arg1;
- (void)reloadTableData;
- (void)reloadTopViewTitleLabel;
- (double)calculateAllCellHeight;
- (void)updateContentLayout;
- (void)reloadTableView;
- (double)getContentWidth;
- (id)getContentView;
- (void)showWithAnimated:(int)arg1 inWindow:(id)arg2 showEndEditing:(_Bool)arg3;
- (_Bool)isAnimating;
- (void)viewWillLayoutSubviews;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)makeConstraints;
- (void)initCloseButton;
- (void)initTopView;
- (void)initView;
- (void)initTableView;
- (void)initContentView;
- (void)tryUpdateResource;
- (void)layoutFakeViews;
- (void)setupFakeViews;
- (void)setupNotificationItemAndMessageArrayAndFakeViews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

