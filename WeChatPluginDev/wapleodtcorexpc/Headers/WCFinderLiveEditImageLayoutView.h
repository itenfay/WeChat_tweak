//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, UIImageView;

@interface WCFinderLiveEditImageLayoutView
{
    _Bool _shouldEnterCropModeAfterSafeAreaUpdate;
    _Bool _shouldAutoEnterCropMode;
    _Bool _restoreApsectRatioPostCrop;
    _Bool _changingAspectRatio;
    MMUIButton *_backBtn;
    CDUnknownBlockType _backCompletion;
    UIImageView *_blurBackgroundView;
    struct CGSize _ratio;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool changingAspectRatio; // @synthesize changingAspectRatio=_changingAspectRatio;
@property(retain, nonatomic) UIImageView *blurBackgroundView; // @synthesize blurBackgroundView=_blurBackgroundView;
@property(nonatomic) _Bool restoreApsectRatioPostCrop; // @synthesize restoreApsectRatioPostCrop=_restoreApsectRatioPostCrop;
@property(nonatomic) _Bool shouldAutoEnterCropMode; // @synthesize shouldAutoEnterCropMode=_shouldAutoEnterCropMode;
@property(nonatomic) _Bool shouldEnterCropModeAfterSafeAreaUpdate; // @synthesize shouldEnterCropModeAfterSafeAreaUpdate=_shouldEnterCropModeAfterSafeAreaUpdate;
@property(copy, nonatomic) CDUnknownBlockType backCompletion; // @synthesize backCompletion=_backCompletion;
@property(nonatomic) struct CGSize ratio; // @synthesize ratio=_ratio;
@property(retain, nonatomic) MMUIButton *backBtn; // @synthesize backBtn=_backBtn;
- (void)animateGridAlpha:(double)arg1;
- (void)animateBlurBackgroundAlpha:(double)arg1;
- (void)onFinishCroppingView;
- (void)onCroppingView;
- (void)setAspectRatio:(struct CGSize)arg1 withAnimation:(_Bool)arg2;
- (void)onceSavePropertyAndOutputImageAttr:(CDUnknownBlockType)arg1;
- (void)OnClickEditImageDoneBarButton;
- (void)onCropToolBarDoneBtnClicked;
- (void)onCropToolBarCancelBtnClicked;
- (void)updateCropLinesWithPoint:(struct CGPoint)arg1 aspectRatio:(double)arg2;
- (void)onCropEditImageInner;
- (void)onCropEditImage:(id)arg1;
- (void)autoEnterCropMode;
- (unsigned long long)adjustedBlackLevelForLevel:(unsigned long long)arg1;
- (void)didMoveToWindow;
- (void)safeAreaInsetsDidChange;
- (void)setFrame:(struct CGRect)arg1;
- (void)setupBlurBackgroundMask;
- (void)initBlurBackground;
- (double)getEmoticonToolViewBottom;
- (void)reloadBottomEditImageBar;
- (void)reloadTopEditImageBar;
- (void)onEditImage:(unsigned long long)arg1 withEditEntrance:(unsigned long long)arg2;
- (void)OnClickEditImageBackBarButton;
- (_Bool)shouldAutoTriggerMusic;
- (void)onClickBackBtn:(id)arg1;
- (id)customBottomButtonOrder;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

