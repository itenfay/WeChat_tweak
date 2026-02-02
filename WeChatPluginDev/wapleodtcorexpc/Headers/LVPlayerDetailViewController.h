//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LVMinimizeContext, MegaVideoPlayerDetailOpenParam, NSString, UIView;

@interface LVPlayerDetailViewController
{
    _Bool _allowRotate;
    _Bool _pendingMinimize;
    MegaVideoPlayerDetailOpenParam *_openParam;
    LVMinimizeContext *_minimizeContext;
    UIView *_pushAnimationSnapshot;
    UIView *_pushAnimationCardSnapshot;
    UIView *_pushAnimationChannelListSnapshot;
    NSString *_updatedSessionId;
}

+ (id)createWithParam:(id)arg1 openParam:(id)arg2 player:(id)arg3;
+ (id)extraPlugins;
+ (id)routeName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *updatedSessionId; // @synthesize updatedSessionId=_updatedSessionId;
@property(retain, nonatomic) UIView *pushAnimationChannelListSnapshot; // @synthesize pushAnimationChannelListSnapshot=_pushAnimationChannelListSnapshot;
@property(retain, nonatomic) UIView *pushAnimationCardSnapshot; // @synthesize pushAnimationCardSnapshot=_pushAnimationCardSnapshot;
@property(retain, nonatomic) UIView *pushAnimationSnapshot; // @synthesize pushAnimationSnapshot=_pushAnimationSnapshot;
@property(nonatomic) _Bool pendingMinimize; // @synthesize pendingMinimize=_pendingMinimize;
@property(retain, nonatomic) LVMinimizeContext *minimizeContext; // @synthesize minimizeContext=_minimizeContext;
@property(nonatomic) _Bool allowRotate; // @synthesize allowRotate=_allowRotate;
@property(retain, nonatomic) MegaVideoPlayerDetailOpenParam *openParam; // @synthesize openParam=_openParam;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)viewDidTransitionToNewSize;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidPushOrPresent:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)shouldShowQuickReplyPush:(id)arg1;
- (_Bool)forceLandscape;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (_Bool)useTransparentNavibar;
- (_Bool)shouldInteractiveDismiss;
- (void)prepareMinimize:(id)arg1;
- (void)minimizeWithPlayerId:(id)arg1;
- (_Bool)enterFromMinimize;

@end

