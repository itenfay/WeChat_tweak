//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMDragManager, MMUIControl, NSString, UIDragInteraction, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UIView, WCImageViewModel;
@protocol WCImageViewDelegate;

@interface WCImageView
{
    _Bool _imageReady;
    _Bool _canShowInvisibleTipsInFullScreen;
    _Bool _isLongPressHandled;
    id <WCImageViewDelegate> _delegate;
    UIImageView *_imageView;
    UIImage *_image;
    WCImageViewModel *_vm;
    double _statusLength;
    double _statusMarginX;
    double _statusMarginBottom;
    long long _statusDirection;
    UIImageView *_lockStausView;
    UIImageView *_sharedStausView;
    UIImageView *_livePhotoStatusView;
    UIImageView *_starredStatusView;
    UIImageView *_failedStatusView;
    UIImageView *_shadowImageView;
    UILabel *_nickLabel;
    UIView *_highLightView;
    MMUIControl *_blurView;
    MMDragManager *_dragManager;
    UIImageView *_tmpLiftingImgView;
    UIDragInteraction *_dragInteraction;
    UITapGestureRecognizer *_debugTapGesture;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLongPressHandled; // @synthesize isLongPressHandled=_isLongPressHandled;
@property(retain, nonatomic) UITapGestureRecognizer *debugTapGesture; // @synthesize debugTapGesture=_debugTapGesture;
@property(retain, nonatomic) UIDragInteraction *dragInteraction; // @synthesize dragInteraction=_dragInteraction;
@property(retain, nonatomic) UIImageView *tmpLiftingImgView; // @synthesize tmpLiftingImgView=_tmpLiftingImgView;
@property(retain, nonatomic) MMDragManager *dragManager; // @synthesize dragManager=_dragManager;
@property(retain, nonatomic) MMUIControl *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *highLightView; // @synthesize highLightView=_highLightView;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) UIImageView *failedStatusView; // @synthesize failedStatusView=_failedStatusView;
@property(retain, nonatomic) UIImageView *starredStatusView; // @synthesize starredStatusView=_starredStatusView;
@property(retain, nonatomic) UIImageView *livePhotoStatusView; // @synthesize livePhotoStatusView=_livePhotoStatusView;
@property(retain, nonatomic) UIImageView *sharedStausView; // @synthesize sharedStausView=_sharedStausView;
@property(retain, nonatomic) UIImageView *lockStausView; // @synthesize lockStausView=_lockStausView;
@property(nonatomic) long long statusDirection; // @synthesize statusDirection=_statusDirection;
@property(nonatomic) double statusMarginBottom; // @synthesize statusMarginBottom=_statusMarginBottom;
@property(nonatomic) double statusMarginX; // @synthesize statusMarginX=_statusMarginX;
@property(nonatomic) double statusLength; // @synthesize statusLength=_statusLength;
@property(nonatomic) _Bool canShowInvisibleTipsInFullScreen; // @synthesize canShowInvisibleTipsInFullScreen=_canShowInvisibleTipsInFullScreen;
@property(nonatomic) _Bool imageReady; // @synthesize imageReady=_imageReady;
@property(retain, nonatomic) WCImageViewModel *vm; // @synthesize vm=_vm;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <WCImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hideViewWhenShowFullScreenAnimationEnd;
- (void)showViewWhenCloseFullScreenAnimationEnd;
- (void)appendBlurViewIfNeed;
- (void)resetBlurView;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (_Bool)canPeek;
- (void)showOwnerNickname:(_Bool)arg1 username:(id)arg2;
- (void)showFailedStatus:(_Bool)arg1;
- (void)updateLivePhotoStatus:(_Bool)arg1;
- (void)showStarredStatus:(_Bool)arg1;
- (void)showSharedStatus:(_Bool)arg1;
- (void)showLockStatus:(_Bool)arg1;
- (void)LongPressEvents;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)animationShow:(_Bool)arg1 fromViewController:(id)arg2;
- (void)onCancelDownloadSuccess:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)triggerClickAction;
- (void)onClickWCImage:(id)arg1;
- (void)updateImageCotentMode;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutStatusView;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)dealloc;
- (void)liftingImageNeedRemove;
- (id)liftingItemWithImage:(id)arg1 parameters:(id)arg2;
- (void)reloadImage;
- (id)getImage;
- (void)unsubscribeAll;
- (void)subscribeDownloadProcess;
- (void)updateViewModel:(id)arg1;
- (void)setupDebugHandlerIfNeeded;
- (void)setupLongPressHandler;
- (void)setupDragLogic;
- (void)updateShadowImageViewHiddenState;
- (void)setupShadowImageView;
- (void)setupImageView;
- (void)removeFromSuperview;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

