//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveMusicSettingOperationNavBar, MMFinderLiveMusicSettingOperationTableViewModel, MMFinderLiveMusicTableViewBottomEditingBar, MMFinderLiveMusicVolumnBar, MMFinderLiveTaskId, MMLiveMusicPlayLogic, MMTableView, MMUIActivityIndicatorView, MMUILabel, NSString, UIButton, UIImageView, UIView;
@protocol MMFinderLiveMusicSettingOperationDelegate, MMFinderLiveMusicSettingReportDelegate;

@interface MMFinderLiveMusicSettingOperationPanel
{
    _Bool _needcheckSongOptSource;
    _Bool _isAutoPausing;
    _Bool _prepardForSEIMessage;
    id <MMFinderLiveMusicSettingOperationDelegate> _operationDelegate;
    id <MMFinderLiveMusicSettingReportDelegate> _reportDelegate;
    MMFinderLiveTaskId *_taskId;
    long long _currentState;
    UIView *_panelView;
    MMFinderLiveMusicSettingOperationNavBar *_navBar;
    UIImageView *_noMusicTipImage;
    MMUILabel *_noMusicTipTitle;
    MMUILabel *_noMusicTipLabel;
    UIButton *_addMusicButton;
    UIView *_tableHeaderView;
    MMUILabel *_musicCountTipLabel;
    MMTableView *_musicTableView;
    MMUIActivityIndicatorView *_activityIndicatorView;
    MMFinderLiveMusicSettingOperationTableViewModel *_musicTableViewModel;
    MMFinderLiveMusicTableViewBottomEditingBar *_tableEditingBar;
    MMFinderLiveMusicVolumnBar *_volumnBar;
    MMLiveMusicPlayLogic *_musicPlayLogic;
    unsigned long long _musicCountWhileEditing;
    struct CGPoint _previousPanPos;
}

+ (id)transferMusicItem:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long musicCountWhileEditing; // @synthesize musicCountWhileEditing=_musicCountWhileEditing;
@property(nonatomic) _Bool prepardForSEIMessage; // @synthesize prepardForSEIMessage=_prepardForSEIMessage;
@property(nonatomic) _Bool isAutoPausing; // @synthesize isAutoPausing=_isAutoPausing;
@property(nonatomic) struct CGPoint previousPanPos; // @synthesize previousPanPos=_previousPanPos;
@property(retain, nonatomic) MMLiveMusicPlayLogic *musicPlayLogic; // @synthesize musicPlayLogic=_musicPlayLogic;
@property(retain, nonatomic) MMFinderLiveMusicVolumnBar *volumnBar; // @synthesize volumnBar=_volumnBar;
@property(retain, nonatomic) MMFinderLiveMusicTableViewBottomEditingBar *tableEditingBar; // @synthesize tableEditingBar=_tableEditingBar;
@property(retain, nonatomic) MMFinderLiveMusicSettingOperationTableViewModel *musicTableViewModel; // @synthesize musicTableViewModel=_musicTableViewModel;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) MMTableView *musicTableView; // @synthesize musicTableView=_musicTableView;
@property(retain, nonatomic) MMUILabel *musicCountTipLabel; // @synthesize musicCountTipLabel=_musicCountTipLabel;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) UIButton *addMusicButton; // @synthesize addMusicButton=_addMusicButton;
@property(retain, nonatomic) MMUILabel *noMusicTipLabel; // @synthesize noMusicTipLabel=_noMusicTipLabel;
@property(retain, nonatomic) MMUILabel *noMusicTipTitle; // @synthesize noMusicTipTitle=_noMusicTipTitle;
@property(retain, nonatomic) UIImageView *noMusicTipImage; // @synthesize noMusicTipImage=_noMusicTipImage;
@property(retain, nonatomic) MMFinderLiveMusicSettingOperationNavBar *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool needcheckSongOptSource; // @synthesize needcheckSongOptSource=_needcheckSongOptSource;
@property(nonatomic) __weak id <MMFinderLiveMusicSettingReportDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
@property(nonatomic) __weak id <MMFinderLiveMusicSettingOperationDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (void)fetchDataAndShowMusicSearchPanel;
- (id)currentLiveTask;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)pageSheetWillDisappear;
- (void)onLiveTaskMainOrAssistantAnchorRestore:(id)arg1;
- (void)onLiveTaskMainOrAssistantAnchorExit:(id)arg1;
- (void)onNotifyAllMusicDataCountChanged:(unsigned long long)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onLiveAnchorSEISynchronizeRegistered:(id)arg1;
- (void)onRequestSynchronzizeInfoForSEIAnchorInfo:(id)arg1;
- (void)onPlayMusicItemStoped:(id)arg1;
- (void)onPlayMusicItemResumed:(id)arg1;
- (void)onPlayMusicItemPaused:(id)arg1;
- (void)onPlayMusicItem:(id)arg1 completed:(long long)arg2;
- (void)onPlayMusicItem:(id)arg1 started:(long long)arg2;
- (void)onPlayMusicItemWillStart:(id)arg1;
- (id)stringWithouHighlightedMark:(id)arg1;
- (void)onMusicSearchDataItemAdded:(id)arg1;
- (void)onMusicSettingTableDataDeleteDataItemList:(id)arg1;
- (void)onMusicSettingTableDataDeleteDidSelectInEditingMode:(_Bool)arg1;
- (void)synchronizeModifiedBriefMusicInfos:(id)arg1;
- (id)getCurrentBriefMusicInfos;
- (void)onMusicSettingTableDidScroll;
- (void)onMusicSettingTableDataDidSelect:(id)arg1 isInEditing:(_Bool)arg2;
- (void)onMusicSettingTableDataDeleteDateItem:(id)arg1 atIndexPath:(id)arg2;
- (void)onMusicSettingTableDataEndEdit:(_Bool)arg1;
- (void)onMusicSettingTableDataBeginEdit;
- (void)onMusicSettingTableDataCleared;
- (void)onMusicSettingTableDataLoaded;
- (void)onMusicSettingTableDataSelectAllStateChanged:(_Bool)arg1;
- (_Bool)onContainerPanGestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (long long)handleMusicSettingInteractiveTap:(long long)arg1;
- (void)updateUIWithSong:(id)arg1 playStatus:(unsigned int)arg2 volume:(int)arg3 songOptVersion:(unsigned long long)arg4;
- (void)syncBGMWithsuccessBlock:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;
- (_Bool)isPlayingMusic;
- (void)showWithAnimated:(_Bool)arg1;
- (void)handleMusicTableInteractivePanGesture:(id)arg1;
- (void)addButtonAction;
- (void)rightButtonAction;
- (void)leftButtonAction;
- (void)showToast:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)checkAndUpdatePlayingMusicItemAfterEditing;
- (_Bool)continueGetMusicDataListInNormalMode;
- (_Bool)continueGetMusicDataListInEditingMode;
- (void)startGetMusicDataListInNormalMode;
- (id)createOperationTableHeaderView;
- (id)createOperationNoDataTableFooterView;
- (id)createOperationTableFooterView;
- (void)updatePageSheetConfigForSettingStateChanged;
- (void)handleMusicSettingOperationTap:(long long)arg1 open:(_Bool)arg2;
- (void)createMusicVolumeBar;
- (void)hideMusicVolumeBar;
- (void)showMusicVolumeBar;
- (void)updateCurrentStateWithRefreshUI:(_Bool)arg1;
- (void)updateMusicCountTip:(unsigned long long)arg1;
- (double)contentHeight;
- (double)contentWidth;
- (double)getMusicTableTop;
- (double)getMusicTableHeight;
- (void)adjustUIForMusicTableEditingModeChanged;
- (void)bindMusicPlayLogic:(id)arg1;
- (id)getCurrentRightView;
- (id)currentMusicItem;
- (id)getCurrentLeftButton;
- (id)getCurrentTitleView;
- (void)setNoMusicTipViewsHidden:(_Bool)arg1;
- (void)updateWidgetsHidden;
- (void)layoutTableEditingBar;
- (void)layoutMusicVolumeBar;
- (void)layoutMucisTableView;
- (void)layoutAddMusicButton;
- (void)layoutNoMusicTipViews;
- (void)layoutActivityIndicatorView;
- (void)layoutNavBar;
- (void)layoutPanelView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (void)unResgisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

