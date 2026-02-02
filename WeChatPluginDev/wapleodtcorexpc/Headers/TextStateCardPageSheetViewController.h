//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMUIButton, MMUIViewController, MultipleTextStateCardView, NSString, TextStateCompositeCardView, TextStateMusicPlayerCoordinator, TextStatePrivacyMgr;

@interface TextStateCardPageSheetViewController
{
    _Bool _transitioning;
    CContact *_contact;
    MMUIViewController *_delegateViewController;
    MMUIButton *_backgroundMaskButton;
    MultipleTextStateCardView *_multipleCardView;
    MMUIButton *_closeButton;
    TextStateMusicPlayerCoordinator *_musicPlayerCoordinator;
    unsigned long long _enterTime;
    TextStatePrivacyMgr *_shareScopeMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TextStatePrivacyMgr *shareScopeMgr; // @synthesize shareScopeMgr=_shareScopeMgr;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) TextStateMusicPlayerCoordinator *musicPlayerCoordinator; // @synthesize musicPlayerCoordinator=_musicPlayerCoordinator;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MultipleTextStateCardView *multipleCardView; // @synthesize multipleCardView=_multipleCardView;
@property(retain, nonatomic) MMUIButton *backgroundMaskButton; // @synthesize backgroundMaskButton=_backgroundMaskButton;
@property(nonatomic) __weak MMUIViewController *delegateViewController; // @synthesize delegateViewController=_delegateViewController;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void)onWCStatusViewShowGroup:(id)arg1 view:(id)arg2;
- (void)configureSingleCardView:(id)arg1 forMultipleCardView:(id)arg2;
- (void)onMultipleTextStateCard:(id)arg1 didMoveFromCard:(id)arg2 toCard:(id)arg3;
- (void)onLongPress:(id)arg1 isDown:(_Bool)arg2;
- (void)onTapRedEnvelopeButton:(id)arg1;
- (void)onTapBackground:(id)arg1;
- (void)onTapTopic:(id)arg1 cardContentView:(id)arg2;
- (void)doHeadImageAction:(id)arg1;
- (void)doSourceAction:(id)arg1;
- (void)onTapCommentButton:(id)arg1;
- (void)onTapSelfFavoriteButton:(id)arg1;
- (void)onTapFavoriteButton:(id)arg1 isSelected:(_Bool)arg2;
- (void)onTapPositionButton:(id)arg1;
- (void)onTapCloseButton;
- (void)onTapBackgroundMaskButton;
@property(readonly, nonatomic) TextStateCompositeCardView *cardView;
- (id)targetViewController;
- (id)topViewController;
- (void)hideWithStopMedia:(_Bool)arg1 preventMinimize:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hideWithStopMedia:(_Bool)arg1 preventMinimize:(_Bool)arg2;
- (void)hideWithCompletion:(CDUnknownBlockType)arg1;
- (void)hide;
- (void)show;
- (void)updateLayout;
- (void)initReport;
- (void)initData;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

