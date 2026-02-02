//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ConcertTicketInfo, MMFinderLiveConcertTicketFailureView, MMFinderLiveConcertTicketViewController, MMFinderLiveConcertTicketViewControllerReportingContext, MMUIButton, NSArray, NSMutableDictionary, NSString, UIImageView, UILabel, UIView;

@interface MMFinderLiveConcertTicketContainerViewController
{
    _Bool _showingLoadingToast;
    CDUnknownBlockType _ticketFetchBlock;
    ConcertTicketInfo *_ticketModel;
    NSArray *_ticketStyleItems;
    unsigned long long _currentStyleIndex;
    NSString *_selectedStyleResouceId;
    MMFinderLiveConcertTicketViewController *_currentTicketViewController;
    NSMutableDictionary *_readyTicketViewControllers;
    NSMutableDictionary *_loadingTicketViewControllers;
    UIView *_ticketContainerView;
    MMUIButton *_closeButton;
    UIView *_loadingContainerView;
    UIImageView *_loadingRingView;
    UILabel *_loadingLabelView;
    MMFinderLiveConcertTicketFailureView *_failureView;
    unsigned long long _displayState;
    unsigned long long _sourceScene;
    MMFinderLiveConcertTicketViewControllerReportingContext *_reportingContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveConcertTicketViewControllerReportingContext *reportingContext; // @synthesize reportingContext=_reportingContext;
@property(nonatomic) unsigned long long sourceScene; // @synthesize sourceScene=_sourceScene;
@property(nonatomic) unsigned long long displayState; // @synthesize displayState=_displayState;
@property(retain, nonatomic) MMFinderLiveConcertTicketFailureView *failureView; // @synthesize failureView=_failureView;
@property(nonatomic) _Bool showingLoadingToast; // @synthesize showingLoadingToast=_showingLoadingToast;
@property(retain, nonatomic) UILabel *loadingLabelView; // @synthesize loadingLabelView=_loadingLabelView;
@property(retain, nonatomic) UIImageView *loadingRingView; // @synthesize loadingRingView=_loadingRingView;
@property(retain, nonatomic) UIView *loadingContainerView; // @synthesize loadingContainerView=_loadingContainerView;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *ticketContainerView; // @synthesize ticketContainerView=_ticketContainerView;
@property(retain, nonatomic) NSMutableDictionary *loadingTicketViewControllers; // @synthesize loadingTicketViewControllers=_loadingTicketViewControllers;
@property(retain, nonatomic) NSMutableDictionary *readyTicketViewControllers; // @synthesize readyTicketViewControllers=_readyTicketViewControllers;
@property(retain, nonatomic) MMFinderLiveConcertTicketViewController *currentTicketViewController; // @synthesize currentTicketViewController=_currentTicketViewController;
@property(retain, nonatomic) NSString *selectedStyleResouceId; // @synthesize selectedStyleResouceId=_selectedStyleResouceId;
@property(nonatomic) unsigned long long currentStyleIndex; // @synthesize currentStyleIndex=_currentStyleIndex;
@property(retain, nonatomic) NSArray *ticketStyleItems; // @synthesize ticketStyleItems=_ticketStyleItems;
@property(retain, nonatomic) ConcertTicketInfo *ticketModel; // @synthesize ticketModel=_ticketModel;
@property(copy, nonatomic) CDUnknownBlockType ticketFetchBlock; // @synthesize ticketFetchBlock=_ticketFetchBlock;
- (void)saveCurrentStyleSelection;
- (id)currentStyle;
- (void)nextStyle;
- (void)switchCurrentTicketViewControllerTo:(id)arg1;
- (void)loadTicketViewControllerForStyleItem:(id)arg1 hasOtherStyles:(_Bool)arg2 showLoadingToast:(_Bool)arg3;
- (void)retryLoading;
- (void)showFailurePrompt;
- (void)startLoadingAnimation;
- (void)showLoadingView;
- (_Bool)updateWithTicketModel:(id)arg1;
- (id)onTicketViewControllerShareActionSheetHostingViewRequested:(id)arg1;
- (void)onTicketViewControllerExternalNavigationRequested:(id)arg1;
- (void)onTicketViewControllerSaveCurrentStyleRequested:(id)arg1;
- (void)onTicketViewControllerNextStyleRequested:(id)arg1;
- (void)onTicketViewControllerLoadFailed:(id)arg1;
- (void)onTicketViewControllerReadyForDisplay:(id)arg1;
- (void)onResigningActive;
- (void)onCloseButtonTapped;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (id)initWithActivityId:(id)arg1 objectId:(unsigned long long)arg2 liveId:(unsigned long long)arg3 ticketReceivingScene:(unsigned int)arg4 sourceScene:(unsigned long long)arg5 reportingContext:(id)arg6;
- (id)initWithLiveNoticeId:(id)arg1 activityId:(id)arg2 sourceScene:(unsigned long long)arg3 reportingContext:(id)arg4;
- (id)initWithLiveTaskId:(id)arg1 sourceScene:(unsigned long long)arg2 reportingContext:(id)arg3;
- (id)initWithSourceScene:(unsigned long long)arg1 reportingContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

