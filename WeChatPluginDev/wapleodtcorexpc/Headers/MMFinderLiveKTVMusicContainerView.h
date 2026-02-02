//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveKTVBeginContentView, MMFinderLiveKTVEmptyContentView, MMFinderLiveKTVEndContentView, MMFinderLiveKTVSingingContentView, MMLiveKtvUserView, NSString, WCFinderLiveAnchorLogReporter;

@interface MMFinderLiveKTVMusicContainerView
{
    _Bool _isUserViewAnimating;
    _Bool _isStateVisivilityChangeAnimating;
    MMFinderLiveKTVSingingContentView *_singingContentView;
    CDUnknownBlockType _userTappedBlock;
    CDUnknownBlockType _userMicMutedBtnTappedBlock;
    unsigned long long _scene;
    unsigned long long _currState;
    MMFinderLiveKTVBeginContentView *_beginContentView;
    MMFinderLiveKTVEndContentView *_endContentView;
    MMFinderLiveKTVBeginContentView *_nextAdvanceContentView;
    MMFinderLiveKTVEmptyContentView *_emptyContentView;
    MMLiveKtvUserView *_userView;
    WCFinderLiveAnchorLogReporter *_anchorReporter;
}

+ (unsigned long long)transferSingStateToUIState:(long long)arg1 lastUIState:(unsigned long long)arg2;
+ (double)preferHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveAnchorLogReporter *anchorReporter; // @synthesize anchorReporter=_anchorReporter;
@property(nonatomic) _Bool isStateVisivilityChangeAnimating; // @synthesize isStateVisivilityChangeAnimating=_isStateVisivilityChangeAnimating;
@property(nonatomic) _Bool isUserViewAnimating; // @synthesize isUserViewAnimating=_isUserViewAnimating;
@property(retain, nonatomic) MMLiveKtvUserView *userView; // @synthesize userView=_userView;
@property(retain, nonatomic) MMFinderLiveKTVEmptyContentView *emptyContentView; // @synthesize emptyContentView=_emptyContentView;
@property(retain, nonatomic) MMFinderLiveKTVBeginContentView *nextAdvanceContentView; // @synthesize nextAdvanceContentView=_nextAdvanceContentView;
@property(retain, nonatomic) MMFinderLiveKTVEndContentView *endContentView; // @synthesize endContentView=_endContentView;
@property(retain, nonatomic) MMFinderLiveKTVBeginContentView *beginContentView; // @synthesize beginContentView=_beginContentView;
@property(nonatomic) unsigned long long currState; // @synthesize currState=_currState;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) CDUnknownBlockType userMicMutedBtnTappedBlock; // @synthesize userMicMutedBtnTappedBlock=_userMicMutedBtnTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType userTappedBlock; // @synthesize userTappedBlock=_userTappedBlock;
@property(retain, nonatomic) MMFinderLiveKTVSingingContentView *singingContentView; // @synthesize singingContentView=_singingContentView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onLiveKTVUserView:(id)arg1 micMutedButtonTappedWithUserInfo:(id)arg2;
- (void)onLiveKtvUserViewAvatarTapped:(id)arg1 highlightingView:(id)arg2;
- (void)onUniqueTaskId:(id)arg1 micUsersInfoChanged:(id)arg2;
- (void)onLiveTask:(id)arg1 micUsersInfoChanged:(id)arg2;
- (void)updateSingerUserView:(id)arg1;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singerUserIdChanged:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singerVoicingChanged:(_Bool)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singerContactUpdated:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 nextSongNameUpdated:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 songNameUpdated:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 songItemBasicInfoUpdated:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 uniqueIdChanged:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singStateChanged:(long long)arg3;
- (void)onLiveKTVModeChanged:(_Bool)arg1 taskId:(id)arg2;
- (id)getAnchorReporter;
- (id)finderTaskId;
- (void)reportStatus;
- (void)startUserViewPrepareToBeginAnimation;
- (void)layoutUIForStateChanged;
- (void)refreshCurrStateUIForUniqueIdChanged:(id)arg1;
- (void)refreshCurrStateUIFromLastState:(unsigned long long)arg1;
- (void)onCurrStateChangedFromLastState:(unsigned long long)arg1;
- (void)refreshCurrStateVisivilityFromLastState:(unsigned long long)arg1;
- (void)refreshUIWithSingState:(long long)arg1 forUniqueIdChanged:(id)arg2;
- (void)updateUIStateWithSingState:(long long)arg1;
- (_Bool)isCurrSingerRectLargeStyle;
- (id)ktvUserView;
- (void)updateMainWidgetsColor:(id)arg1;
- (void)onEnterLive;
- (id)getSingerHeaderUIDesc;
- (id)getSingerPlayerUIDesc;
- (void)layoutUserView;
- (void)layoutEmptyContentView;
- (void)layoutNextAdvanceContentView;
- (void)layoutEndContentView;
- (void)layoutSingingContentView;
- (void)layoutBeginContentView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)clearStates;
- (void)checkKTVState:(id)arg1 changeUpdate:(_Bool)arg2;
- (void)initDefaultDatas;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

