//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicHorizontalScrollingView, MMMusicInfo, MMMusicOpenThirdAppHelper, MMUIActivityIndicatorView, MMUIButton, MMUILabel, MVWebViewController, NSString, UIButton, UIImageView, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol MMMusicInfoNewHalfViewControllerDelegate;

@interface MMMusicInfoNewHalfViewController
{
    MMMusicInfo *_musicInfo;
    UIView *_containerView;
    UIView *_albumContainerView;
    MMUILabel *_songNameView;
    MMUILabel *_songDescLabel;
    _Bool _bFirstLayoutFinish;
    _Bool _isPanning;
    _Bool _isPanningHorizontal;
    _Bool _hasGetA8Key;
    id <MMMusicInfoNewHalfViewControllerDelegate> _delegate;
    CDUnknownBlockType _blockOnClose;
    CDUnknownBlockType _onClickJump;
    CDUnknownBlockType _onJoinMembershipHandler;
    UIView *_headerView;
    UIImageView *_defaultIconView;
    MMUIButton *_closeButton;
    MMMusicHorizontalScrollingView *_singerScrollingView;
    UITapGestureRecognizer *_tapGesture;
    UIPanGestureRecognizer *_panGesture;
    UIButton *_jumpButton;
    MMUIActivityIndicatorView *_activityIndicatorView;
    unsigned long long _webViewGetA8KeyStatus;
    unsigned long long _webViewPageStatus;
    MVWebViewController *_webViewController;
    long long _currOrientation;
    MMUIButton *_openMembershipButton;
    MMUILabel *_openMembershipHintLabel;
    double _menbershipButtonAndLabelSpacing;
    MMMusicOpenThirdAppHelper *_thirdPartyAppHelper;
    struct CGPoint _panStartPos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicOpenThirdAppHelper *thirdPartyAppHelper; // @synthesize thirdPartyAppHelper=_thirdPartyAppHelper;
@property(nonatomic) double menbershipButtonAndLabelSpacing; // @synthesize menbershipButtonAndLabelSpacing=_menbershipButtonAndLabelSpacing;
@property(retain, nonatomic) MMUILabel *openMembershipHintLabel; // @synthesize openMembershipHintLabel=_openMembershipHintLabel;
@property(retain, nonatomic) MMUIButton *openMembershipButton; // @synthesize openMembershipButton=_openMembershipButton;
@property(nonatomic) long long currOrientation; // @synthesize currOrientation=_currOrientation;
@property(nonatomic) _Bool hasGetA8Key; // @synthesize hasGetA8Key=_hasGetA8Key;
@property(retain, nonatomic) MVWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(nonatomic) unsigned long long webViewPageStatus; // @synthesize webViewPageStatus=_webViewPageStatus;
@property(nonatomic) unsigned long long webViewGetA8KeyStatus; // @synthesize webViewGetA8KeyStatus=_webViewGetA8KeyStatus;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UIButton *jumpButton; // @synthesize jumpButton=_jumpButton;
@property(nonatomic) struct CGPoint panStartPos; // @synthesize panStartPos=_panStartPos;
@property(nonatomic) _Bool isPanningHorizontal; // @synthesize isPanningHorizontal=_isPanningHorizontal;
@property(nonatomic) _Bool isPanning; // @synthesize isPanning=_isPanning;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) MMMusicHorizontalScrollingView *singerScrollingView; // @synthesize singerScrollingView=_singerScrollingView;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *defaultIconView; // @synthesize defaultIconView=_defaultIconView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) CDUnknownBlockType onJoinMembershipHandler; // @synthesize onJoinMembershipHandler=_onJoinMembershipHandler;
@property(copy, nonatomic) CDUnknownBlockType onClickJump; // @synthesize onClickJump=_onClickJump;
@property(copy, nonatomic) CDUnknownBlockType blockOnClose; // @synthesize blockOnClose=_blockOnClose;
@property(nonatomic) __weak id <MMMusicInfoNewHalfViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)mmMusicOpenThirdAppHelper:(id)arg1 onOpen3rdMusicAppWithType:(unsigned long long)arg2 source:(unsigned long long)arg3;
- (void)musicLinkService:(id)arg1 didGetLinkWithResults:(id)arg2;
- (void)handleWebviewScrollViewScroll:(id)arg1;
- (void)handleGetA8KeyFinish:(id)arg1 reason:(int)arg2;
- (void)handleReceiveNavigationResponse:(_Bool)arg1;
- (void)handleFailOnGetA8Key;
- (void)showWebviewOrJumpButton;
- (void)onJumpButtonClicked;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handlePanGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)onClose;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)closeAnimated:(_Bool)arg1;
- (void)layoutOpenMembershipButton;
- (void)customLayout;
- (void)onOpenMembershipButtonClicked;
- (_Bool)showOpenMemberShipLabel;
- (struct CGRect)containerViewNormalFrame;
- (id)containerView;
- (id)resizeImage:(id)arg1 toMaxWidth:(int)arg2 andMaxHeight:(int)arg3;
- (id)generateWebViewControllerFromURL:(id)arg1;
- (void)configurateAndShowJumpButton;
- (void)showWebview;
- (_Bool)disableOperationWebview;
- (void)configurateWebview;
- (id)getMusicOperationUrl;
- (void)reloadDisplay;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMusicInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

