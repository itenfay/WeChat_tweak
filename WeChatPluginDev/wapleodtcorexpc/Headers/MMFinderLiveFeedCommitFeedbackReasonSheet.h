//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UIButton, UITableView, UIView, WCFinderAnimationLoadingView, WCFinderFeedContentVM;

@interface MMFinderLiveFeedCommitFeedbackReasonSheet
{
    _Bool _isClosing;
    int _commentScene;
    int _satisfactionQuestSubType;
    UIView *_containerView;
    UITableView *_tableView;
    WCFinderAnimationLoadingView *_loadingView;
    UIButton *_retryBtn;
    WCFinderFeedContentVM *_contentVM;
    long long _liveScene;
    unsigned long long _scene;
    NSMutableArray *_selectReasons;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *selectReasons; // @synthesize selectReasons=_selectReasons;
@property(nonatomic) _Bool isClosing; // @synthesize isClosing=_isClosing;
@property(nonatomic) int satisfactionQuestSubType; // @synthesize satisfactionQuestSubType=_satisfactionQuestSubType;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) long long liveScene; // @synthesize liveScene=_liveScene;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) UIButton *retryBtn; // @synthesize retryBtn=_retryBtn;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)onFeedContentFeedbackSatisfactionQuestFetchFail:(id)arg1;
- (void)onFeedContentFeedbackSatisfactionQuestUpdate:(id)arg1;
- (void)onFeedContentFeedbackReasonFetchFail:(id)arg1;
- (void)onFeedContentFeedbackReasonChanged:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (void)pageSheetWillAppear;
- (void)pageSheetWillClose:(_Bool)arg1;
- (long long)reasonCount;
- (unsigned long long)dislikePanelSceneFrom:(long long)arg1;
- (void)onCommit;
- (void)onRetry;
- (id)reason:(unsigned long long)arg1;
- (void)reload;
- (void)initViews;
- (void)layoutSubviews;
- (void)initPageSheetConfig;
- (id)initWithScene:(unsigned long long)arg1 contentVM:(id)arg2 commentScene:(int)arg3 liveScene:(long long)arg4 satisfactionQuestSubType:(int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

