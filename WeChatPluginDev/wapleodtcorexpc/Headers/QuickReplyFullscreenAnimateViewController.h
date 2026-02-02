//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, CMessageWrap, MMPageSheetAdapter, UIView, UIVisualEffectView;

@interface QuickReplyFullscreenAnimateViewController
{
    UIView *_animateTopView;
    UIView *_customBackgroundView;
    UIView *_animateContentView;
    UIView *_animateBottomBlurView;
    UIView *_animateBottomView;
    UIView *_backgroundMaskView;
    UIView *_backgroundView;
    UIVisualEffectView *_foregroundBlurView;
    UIView *_presentingVCSnapshotView;
    UIView *_rootSnapshotView;
    double _targetCellOffset;
    MMPageSheetAdapter *_pageSheet;
    CMessageWrap *_targetMessage;
    CContact *_sessionContact;
}

+ (void)showFullscreenAnimateWith:(id)arg1 openSessionContact:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CContact *sessionContact; // @synthesize sessionContact=_sessionContact;
@property(retain, nonatomic) CMessageWrap *targetMessage; // @synthesize targetMessage=_targetMessage;
@property(nonatomic) __weak MMPageSheetAdapter *pageSheet; // @synthesize pageSheet=_pageSheet;
@property(nonatomic) double targetCellOffset; // @synthesize targetCellOffset=_targetCellOffset;
@property(retain, nonatomic) UIView *rootSnapshotView; // @synthesize rootSnapshotView=_rootSnapshotView;
@property(retain, nonatomic) UIView *presentingVCSnapshotView; // @synthesize presentingVCSnapshotView=_presentingVCSnapshotView;
@property(retain, nonatomic) UIVisualEffectView *foregroundBlurView; // @synthesize foregroundBlurView=_foregroundBlurView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *backgroundMaskView; // @synthesize backgroundMaskView=_backgroundMaskView;
@property(retain, nonatomic) UIView *animateBottomView; // @synthesize animateBottomView=_animateBottomView;
@property(retain, nonatomic) UIView *animateBottomBlurView; // @synthesize animateBottomBlurView=_animateBottomBlurView;
@property(retain, nonatomic) UIView *animateContentView; // @synthesize animateContentView=_animateContentView;
@property(retain, nonatomic) UIView *customBackgroundView; // @synthesize customBackgroundView=_customBackgroundView;
@property(retain, nonatomic) UIView *animateTopView; // @synthesize animateTopView=_animateTopView;
- (void)openSessionWithComplete:(CDUnknownBlockType)arg1;
- (void)dismissToRoot:(CDUnknownBlockType)arg1;
- (_Bool)shouldHandleStatusBarAppearance;
- (double)bottomViewHeight;
- (double)popupAnimateEndY;
- (void)slideRightAnimate;
- (void)sessionSnapshotFadeOutAnimate;
- (void)sessionViewPopUpAnimate;
- (void)backgroundFadeInAnimate;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

