//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveMusicRelatedSettingTableFooterView, MMFinderLiveMusicSettingOperationNavBar, MMFinderLiveMusicTableViewBottomEditingBar, MMFinderLiveSongSettingOperationTableViewModel, MMFinderLiveSongSettingTableView, MMFinderLiveTaskId, MMUIActivityIndicatorView, MMUILabel, NSString, UIButton, UIImageView, UISwitch, UIView;

@interface MMFinderLiveSongSettingOperationPanel
{
    _Bool _isDataEnd;
    _Bool _isAutoPausing;
    _Bool _prepardForSEIMessage;
    _Bool _isAudience;
    _Bool _isBackFromDisappear;
    NSString *_targetVisibleSongName;
    CDUnknownBlockType _audienceOrderSongCallback;
    CDUnknownBlockType _anchorSingSongCallback;
    MMFinderLiveTaskId *_taskId;
    long long _currentState;
    UIView *_panelView;
    MMFinderLiveMusicSettingOperationNavBar *_navBar;
    UIImageView *_noMusicImgView;
    MMUILabel *_noMusicTitleLabel;
    MMUILabel *_noMusicTipLabel;
    UIButton *_addMusicButton;
    UIView *_tableHeaderView;
    MMUILabel *_musicNameTipLabel;
    MMUILabel *_heartValueLabel;
    MMFinderLiveSongSettingTableView *_musicTableView;
    MMFinderLiveMusicRelatedSettingTableFooterView *_footerView;
    MMUIActivityIndicatorView *_activityIndicatorView;
    MMFinderLiveSongSettingOperationTableViewModel *_musicTableViewModel;
    MMFinderLiveMusicTableViewBottomEditingBar *_tableEditingBar;
    NSString *_currentSingingSongName;
    UIView *_songEnableSwitchBGView;
    MMUILabel *_songEnableSwitchLabel;
    UISwitch *_songEnableSwitch;
    struct CGPoint _previousPanPos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UISwitch *songEnableSwitch; // @synthesize songEnableSwitch=_songEnableSwitch;
@property(retain, nonatomic) MMUILabel *songEnableSwitchLabel; // @synthesize songEnableSwitchLabel=_songEnableSwitchLabel;
@property(retain, nonatomic) UIView *songEnableSwitchBGView; // @synthesize songEnableSwitchBGView=_songEnableSwitchBGView;
@property(nonatomic) _Bool isBackFromDisappear; // @synthesize isBackFromDisappear=_isBackFromDisappear;
@property(retain, nonatomic) NSString *currentSingingSongName; // @synthesize currentSingingSongName=_currentSingingSongName;
@property(nonatomic) _Bool isAudience; // @synthesize isAudience=_isAudience;
@property(nonatomic) _Bool prepardForSEIMessage; // @synthesize prepardForSEIMessage=_prepardForSEIMessage;
@property(nonatomic) _Bool isAutoPausing; // @synthesize isAutoPausing=_isAutoPausing;
@property(nonatomic) struct CGPoint previousPanPos; // @synthesize previousPanPos=_previousPanPos;
@property(nonatomic) _Bool isDataEnd; // @synthesize isDataEnd=_isDataEnd;
@property(retain, nonatomic) MMFinderLiveMusicTableViewBottomEditingBar *tableEditingBar; // @synthesize tableEditingBar=_tableEditingBar;
@property(retain, nonatomic) MMFinderLiveSongSettingOperationTableViewModel *musicTableViewModel; // @synthesize musicTableViewModel=_musicTableViewModel;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) __weak MMFinderLiveMusicRelatedSettingTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMFinderLiveSongSettingTableView *musicTableView; // @synthesize musicTableView=_musicTableView;
@property(retain, nonatomic) MMUILabel *heartValueLabel; // @synthesize heartValueLabel=_heartValueLabel;
@property(retain, nonatomic) MMUILabel *musicNameTipLabel; // @synthesize musicNameTipLabel=_musicNameTipLabel;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) UIButton *addMusicButton; // @synthesize addMusicButton=_addMusicButton;
@property(retain, nonatomic) MMUILabel *noMusicTipLabel; // @synthesize noMusicTipLabel=_noMusicTipLabel;
@property(retain, nonatomic) MMUILabel *noMusicTitleLabel; // @synthesize noMusicTitleLabel=_noMusicTitleLabel;
@property(retain, nonatomic) UIImageView *noMusicImgView; // @synthesize noMusicImgView=_noMusicImgView;
@property(retain, nonatomic) MMFinderLiveMusicSettingOperationNavBar *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType anchorSingSongCallback; // @synthesize anchorSingSongCallback=_anchorSingSongCallback;
@property(copy, nonatomic) CDUnknownBlockType audienceOrderSongCallback; // @synthesize audienceOrderSongCallback=_audienceOrderSongCallback;
@property(retain, nonatomic) NSString *targetVisibleSongName; // @synthesize targetVisibleSongName=_targetVisibleSongName;
- (void)postAnchorSingingSong:(id)arg1;
- (id)currentLiveTask;
- (void)setSingSongEnabled:(_Bool)arg1;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (_Bool)onContainerPanGestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)autoEnableLiveSongsIfNeeded;
- (void)addSongPanel:(id)arg1 didCloseWithLatestSongs:(id)arg2;
- (void)updateDataLoadedTitleWithCount:(unsigned long long)arg1;
- (void)onSongSettingTableDataSelectAllStateChanged:(_Bool)arg1;
- (void)onSongSettingTableAllDataCountChanged:(unsigned long long)arg1;
- (void)onSongSettingTableDataDeleteDataItemList:(id)arg1;
- (void)onSongSettingTableDataDeleteDidSelectInEditingMode:(_Bool)arg1;
- (void)synchronizeModifiedSongItemArray:(id)arg1;
- (void)onSongSettingTableDataDidChangeSing:(id)arg1;
- (void)onSongSettingTableDataDidFinishSing:(id)arg1;
- (void)onSongSettingTableDataDidSelect:(id)arg1 isInEditing:(_Bool)arg2;
- (void)onSongSettingTableDataDeleteDateItem:(id)arg1 atIndexPath:(id)arg2;
- (void)onSongSettingTableDidScroll;
- (void)onSongSettingTableDataEndEdit:(_Bool)arg1;
- (void)onSongSettingTableDataBeginEdit;
- (void)onSongSettingTableDataCleared;
- (void)onSongSettingTableDataLoaded;
- (void)loadData;
- (void)showWithAnimated:(_Bool)arg1;
- (void)handleMusicTableInteractivePanGesture:(id)arg1;
- (void)addButtonAction;
- (void)rightButtonAction;
- (void)leftButtonAction;
- (void)onSongEnableSwitchChanged:(id)arg1;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)pageSheetDidDisappear;
- (void)pageSheetWillAppear;
- (void)showConfirmDisableSingSongSheet;
- (void)stopLoading;
- (void)startLoading;
- (id)getSortedSongItemList:(id)arg1;
- (void)startGetMusicDataListInNormalMode;
- (void)updateTableHeaderViewWidgetsOrigin;
- (double)getTableHeaderHeight;
- (id)createOperationTableHeaderView;
- (_Bool)shouldShowHeaderSwitchViews;
- (void)updateOperationTableHeader;
- (void)reloadUpdateOperationTableHeader;
- (id)createOperationTableFooterView;
- (void)updatePageSheetConfigForSettingStateChanged;
- (void)handleMusicSettingOperationTap:(long long)arg1 open:(_Bool)arg2;
- (void)updateCurrentStateWithRefreshUI:(_Bool)arg1;
- (double)contentHeight;
- (double)contentWidth;
- (double)getMusicTableTop;
- (double)getMusicTableHeight;
- (void)adjustUIForMusicTableEditingModeChanged;
- (_Bool)enableLiveSongs;
- (void)createSongEnableSwitchViews;
- (void)createHeartValueLabel;
- (void)createMusicNameTipLabel;
@property(readonly, nonatomic) _Bool isInLive;
- (void)updateWidgetsHidden;
- (void)layoutTableEditingBar;
- (void)layoutMucisTableView;
- (void)layoutAddMusicButton;
- (void)layoutNoMusicTipLabel;
- (void)layoutNoMusicTitleLabel;
- (void)layoutNoMusicImgView;
- (void)layoutActivityIndicatorView;
- (void)layoutNavBar;
- (void)layoutPanelView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (_Bool)shouldAdaptToDarkLight;
- (void)unResgisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2 isAudience:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

