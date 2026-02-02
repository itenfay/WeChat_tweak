//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPageSheetAdapter, NSNumber, NSString, TingFlutterCommentInputController, TingInsertedContentCallBack, UIView;

@interface TingFlutterViewController
{
    _Bool _allowRotation;
    _Bool _bSyncProgress;
    _Bool _bInShowAnimation;
    CDUnknownBlockType _actionOnPopedOrDismissed;
    TingFlutterCommentInputController *_commentInputController;
    MMPageSheetAdapter *_brandAdpter;
    TingInsertedContentCallBack *_callback;
    NSNumber *_heightRatio;
    UIView *_shadowView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) _Bool bInShowAnimation; // @synthesize bInShowAnimation=_bInShowAnimation;
@property(nonatomic) _Bool bSyncProgress; // @synthesize bSyncProgress=_bSyncProgress;
@property(retain, nonatomic) NSNumber *heightRatio; // @synthesize heightRatio=_heightRatio;
@property(retain, nonatomic) TingInsertedContentCallBack *callback; // @synthesize callback=_callback;
@property(nonatomic) __weak MMPageSheetAdapter *brandAdpter; // @synthesize brandAdpter=_brandAdpter;
@property(retain, nonatomic) TingFlutterCommentInputController *commentInputController; // @synthesize commentInputController=_commentInputController;
@property(copy, nonatomic) CDUnknownBlockType actionOnPopedOrDismissed; // @synthesize actionOnPopedOrDismissed=_actionOnPopedOrDismissed;
@property(nonatomic) _Bool allowRotation; // @synthesize allowRotation=_allowRotation;
- (void)viewDidLoad;
- (void)activeCommentInput:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)isTingAppHomePage;
- (_Bool)shouldDisableTingDismissGesture;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setInteractiveDismissEnable:(_Bool)arg1;
- (_Bool)shouldInteractiveDismiss;
- (void)checkNeedRecoverAppearanceBeforeDismiss;
- (void)closeProfilePageSheetIfNeed;
- (id)getCurTargetRatioValue;
- (unsigned long long)listenHalfScreenOption;
- (void)listenHalfScreenMoveProgress:(double)arg1 heightRatio:(double)arg2;
- (void)listenHalfScreenIsShow:(_Bool)arg1 eventType:(unsigned long long)arg2;
- (void)onChangeProfileShadow:(double)arg1 animate:(_Bool)arg2;
- (void)onChangeProfileShadow:(double)arg1;
- (void)onEndShowHalfScreenProfile;
- (void)onShowAnimationDone;
- (void)onBeginShowHalfScreenProfile;
- (_Bool)isInAnimation;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)setEnableProfileShadow:(_Bool)arg1;
- (void)updateShadowLayer:(_Bool)arg1;
- (void)initShadowView;
- (void)initProfileCallbackIfNeed:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

