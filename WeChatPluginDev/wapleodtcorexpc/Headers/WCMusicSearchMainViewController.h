//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicInfo, MMPageSheetAdapter, NSArray, NSString, UIViewController, WCMusicListenHistoryViewController, WCMusicSearchContentViewController, WCMusicSearchContext, WCMusicSearchReporter, WCMusicSmartBoxViewController, WCStateMachine;

@interface WCMusicSearchMainViewController
{
    _Bool _isEmbededMode;
    MMPageSheetAdapter *_adapter;
    CDUnknownBlockType _sendMusicHandler;
    CDUnknownBlockType _musicPlayStopHandler;
    CDUnknownBlockType _viewDidBePopedOrDismissedHandler;
    WCMusicSearchContext *_searchContext;
    WCStateMachine *_stateMachine;
    MMMusicInfo *_playingMusicInfo;
    UIViewController *_currentDisplayingViewController;
    WCMusicSearchContentViewController *_searchViewController;
    WCMusicSmartBoxViewController *_smartBoxViewController;
    WCMusicListenHistoryViewController *_historyViewController;
    NSArray *_viewControllers;
    WCMusicSearchReporter *_reporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMusicSearchReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) WCMusicListenHistoryViewController *historyViewController; // @synthesize historyViewController=_historyViewController;
@property(retain, nonatomic) WCMusicSmartBoxViewController *smartBoxViewController; // @synthesize smartBoxViewController=_smartBoxViewController;
@property(retain, nonatomic) WCMusicSearchContentViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(retain, nonatomic) UIViewController *currentDisplayingViewController; // @synthesize currentDisplayingViewController=_currentDisplayingViewController;
@property(retain, nonatomic) MMMusicInfo *playingMusicInfo; // @synthesize playingMusicInfo=_playingMusicInfo;
@property(retain, nonatomic) WCStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) WCMusicSearchContext *searchContext; // @synthesize searchContext=_searchContext;
@property(nonatomic) _Bool isEmbededMode; // @synthesize isEmbededMode=_isEmbededMode;
@property(copy, nonatomic) CDUnknownBlockType viewDidBePopedOrDismissedHandler; // @synthesize viewDidBePopedOrDismissedHandler=_viewDidBePopedOrDismissedHandler;
@property(copy, nonatomic) CDUnknownBlockType musicPlayStopHandler; // @synthesize musicPlayStopHandler=_musicPlayStopHandler;
@property(copy, nonatomic) CDUnknownBlockType sendMusicHandler; // @synthesize sendMusicHandler=_sendMusicHandler;
@property(nonatomic) __weak MMPageSheetAdapter *adapter; // @synthesize adapter=_adapter;
- (void)musicSmartBoxViewController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)musicSmartBoxViewController:(id)arg1 didSelectItemWithInfo:(id)arg2 indexPath:(id)arg3;
- (void)musicListenHistoryViewController:(id)arg1 didSelectItemWithMusicInfo:(id)arg2 indexPath:(id)arg3;
- (void)musicListenHistoryViewController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)musicSearchContentViewController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)musicSearchContentViewController:(id)arg1 didClickSendWithMusicInfo:(id)arg2 coverImageData:(id)arg3 responseInfo:(id)arg4;
- (void)musicSearchContentViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2 musicInfo:(id)arg3 responseInfo:(id)arg4;
- (void)setupChatUsername:(id)arg1;
- (_Bool)isCurrentPlayingSameMusicInfo:(id)arg1;
- (void)stopPlayingIfNeeded;
- (void)playOrStopWithMusicInfo:(id)arg1;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)pageSheetWillDisappear:(id)arg1;
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)onStateMachineDidEnterState:(id)arg1 withTransition:(id)arg2;
- (void)updateQuery:(id)arg1;
- (void)showSuggestionView;
- (void)showSearchView;
- (void)showHistoryView;
- (void)displayViewController:(id)arg1;
- (void)onDoneButtonClicked;
- (void)onTextCleared;
- (void)onTextChanged:(id)arg1;
- (void)lazySearch:(id)arg1;
- (void)doSearch;
- (void)setupViewControllers;
- (long long)overrideUserInterfaceStyle;
- (void)pushFromAdapter:(id)arg1;
- (id)generateAdapter;
- (void)showAsHalfScreen;
- (void)cancelLastSearch;
- (void)setupStateMachine;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

