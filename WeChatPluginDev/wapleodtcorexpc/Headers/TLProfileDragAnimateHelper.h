//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, CContact, NSDate, NSHashTable, NSString, TLProfileDragDownView, TLProfileMediaContainerView, TLProfileModel, UIButton, UILongPressGestureRecognizer, UITableView, UITapGestureRecognizer, UIView;
@protocol TLProfileDragAnimateHelperDelegate;

@interface TLProfileDragAnimateHelper
{
    _Bool _disableHover;
    _Bool _isAtHoverState;
    _Bool _autoPlay;
    _Bool _hasTriggerDragShock;
    _Bool _isHeaderPlaying;
    UIView *_frontView;
    UITableView *_frontTableView;
    TLProfileDragDownView *_dragDownInfoView;
    UIView *_bkgMaskView;
    id <TLProfileDragAnimateHelperDelegate> _delegate;
    CDUnknownBlockType _frontViewTopChangeBlock;
    double _hoverTargetOffset;
    double _expandedHeight;
    double _frontViewTop;
    CDUnknownBlockType _enterHoverPreparation;
    CDUnknownBlockType _enterHoverAnimation;
    CDUnknownBlockType _enterHoverCompletion;
    CDUnknownBlockType _exitHoverPreparation;
    CDUnknownBlockType _exitHoverAnimation;
    CDUnknownBlockType _exitHoverCompletion;
    CDUnknownBlockType _alphaAnimation;
    NSDate *_dragStartTime;
    double _lastMovement;
    double _beginTouchPosY;
    double _lastTouchPosY;
    double _frontViewY;
    double _currentDragProgress;
    double _mediaViewMinHeight;
    double _mediaViewInitialBottomMargin;
    double _mediaViewDrawDownBottomMargin;
    NSHashTable *_alphaAnimateViews;
    TLProfileMediaContainerView *_tlProfileMediaView;
    UIButton *_tlProfileDragMaskView;
    CAGradientLayer *_gradientLayer;
    CContact *_contact;
    TLProfileModel *_tlProfileModel;
    UILongPressGestureRecognizer *_longPressGesture;
    UITapGestureRecognizer *_tapGesture;
    unsigned long long _scene;
}

+ (id)tlProfileDragHelperWithFrontContainer:(id)arg1 frontInitialTop:(double)arg2 frontTableView:(id)arg3 scene:(unsigned long long)arg4;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(retain, nonatomic) TLProfileModel *tlProfileModel; // @synthesize tlProfileModel=_tlProfileModel;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIButton *tlProfileDragMaskView; // @synthesize tlProfileDragMaskView=_tlProfileDragMaskView;
@property(nonatomic) _Bool isHeaderPlaying; // @synthesize isHeaderPlaying=_isHeaderPlaying;
@property(retain, nonatomic) TLProfileMediaContainerView *tlProfileMediaView; // @synthesize tlProfileMediaView=_tlProfileMediaView;
@property(retain, nonatomic) NSHashTable *alphaAnimateViews; // @synthesize alphaAnimateViews=_alphaAnimateViews;
@property(nonatomic) double mediaViewDrawDownBottomMargin; // @synthesize mediaViewDrawDownBottomMargin=_mediaViewDrawDownBottomMargin;
@property(nonatomic) double mediaViewInitialBottomMargin; // @synthesize mediaViewInitialBottomMargin=_mediaViewInitialBottomMargin;
@property(nonatomic) double mediaViewMinHeight; // @synthesize mediaViewMinHeight=_mediaViewMinHeight;
@property(nonatomic) double currentDragProgress; // @synthesize currentDragProgress=_currentDragProgress;
@property(nonatomic) _Bool hasTriggerDragShock; // @synthesize hasTriggerDragShock=_hasTriggerDragShock;
@property(nonatomic) double frontViewY; // @synthesize frontViewY=_frontViewY;
@property(nonatomic) double lastTouchPosY; // @synthesize lastTouchPosY=_lastTouchPosY;
@property(nonatomic) double beginTouchPosY; // @synthesize beginTouchPosY=_beginTouchPosY;
@property(nonatomic) double lastMovement; // @synthesize lastMovement=_lastMovement;
@property(retain, nonatomic) NSDate *dragStartTime; // @synthesize dragStartTime=_dragStartTime;
@property(copy, nonatomic) CDUnknownBlockType alphaAnimation; // @synthesize alphaAnimation=_alphaAnimation;
@property(copy, nonatomic) CDUnknownBlockType exitHoverCompletion; // @synthesize exitHoverCompletion=_exitHoverCompletion;
@property(copy, nonatomic) CDUnknownBlockType exitHoverAnimation; // @synthesize exitHoverAnimation=_exitHoverAnimation;
@property(copy, nonatomic) CDUnknownBlockType exitHoverPreparation; // @synthesize exitHoverPreparation=_exitHoverPreparation;
@property(copy, nonatomic) CDUnknownBlockType enterHoverCompletion; // @synthesize enterHoverCompletion=_enterHoverCompletion;
@property(copy, nonatomic) CDUnknownBlockType enterHoverAnimation; // @synthesize enterHoverAnimation=_enterHoverAnimation;
@property(copy, nonatomic) CDUnknownBlockType enterHoverPreparation; // @synthesize enterHoverPreparation=_enterHoverPreparation;
@property(nonatomic) double frontViewTop; // @synthesize frontViewTop=_frontViewTop;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) double expandedHeight; // @synthesize expandedHeight=_expandedHeight;
@property(nonatomic) _Bool isAtHoverState; // @synthesize isAtHoverState=_isAtHoverState;
@property(nonatomic) double hoverTargetOffset; // @synthesize hoverTargetOffset=_hoverTargetOffset;
@property(nonatomic) _Bool disableHover; // @synthesize disableHover=_disableHover;
@property(copy, nonatomic) CDUnknownBlockType frontViewTopChangeBlock; // @synthesize frontViewTopChangeBlock=_frontViewTopChangeBlock;
@property(nonatomic) __weak id <TLProfileDragAnimateHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIView *bkgMaskView; // @synthesize bkgMaskView=_bkgMaskView;
@property(retain, nonatomic) TLProfileDragDownView *dragDownInfoView; // @synthesize dragDownInfoView=_dragDownInfoView;
@property(nonatomic) __weak UITableView *frontTableView; // @synthesize frontTableView=_frontTableView;
@property(nonatomic) __weak UIView *frontView; // @synthesize frontView=_frontView;
- (double)calMediaViewBottom;
- (double)calMediaViewHeightWithDragProgress:(double)arg1;
- (double)calMediaViewHeight;
- (_Bool)canTrigerAtPositionY:(double)arg1;
- (void)onTLProfileDragMaskButtonClick:(id)arg1;
- (void)onTapTLProfileLikeButton:(id)arg1 toLiked:(_Bool)arg2;
- (void)onTapTLProfileChangeCoverButton:(id)arg1;
- (void)onTapTLProfileHeadButton:(id)arg1;
- (void)onTapTLProfileHeaderDetailButton:(id)arg1;
- (id)onGetViewControllerForDragDownView;
- (id)onGetViewControllerForMediaContainerView;
- (void)onMediaFinishPlaying;
- (void)setMediaMuted:(_Bool)arg1;
- (void)stopMediaPlay;
- (void)pauseMediaPlay;
- (void)startMediaPlay;
- (void)setupMediaViewDrawDownBottomMargin:(double)arg1;
- (void)setupMediaViewInitialBottomMargin:(double)arg1;
- (void)setupMediaViewMinHeight:(double)arg1;
- (void)updateMediaWithContact:(id)arg1 profileModel:(id)arg2;
- (void)updateFrontViewTop:(double)arg1;
- (void)updateDragMaskView:(double)arg1;
- (double)progressForCurrentOffset:(double)arg1;
- (void)handleAlphaAnimateWithFrontViewTopOffset:(double)arg1;
- (void)addAlphaAnimateView:(id)arg1;
- (void)resetFrontViewOffsetAnimated:(_Bool)arg1;
- (void)handlePanGestureAtHoverDisable:(id)arg1;
- (void)handlePanGestureAtHoverEnable:(id)arg1;
- (void)processFrontViewGesture:(id)arg1;
- (void)touchAndExitHoverStateAnimated;
- (void)touchAndEnterHoverStateAnimated;
- (void)exitHoverStateByUser;
- (void)enterHoverStateByUser;
- (struct CGSize)tlProfileMediaSizeForWidth:(double)arg1;
- (void)exitHoverState:(_Bool)arg1;
- (void)enterHoverState:(_Bool)arg1;
- (void)onMediaViewSingleTap:(id)arg1;
- (void)onMediaViewLongPress:(id)arg1;
- (void)enableLongPressAction:(_Bool)arg1;
- (void)setupUI;
- (void)setDragAnimationProgress:(CDUnknownBlockType)arg1;
- (void)setExitHoverPreparaion:(CDUnknownBlockType)arg1 animation:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setEnterHoverPreparaion:(CDUnknownBlockType)arg1 animation:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;
- (void)lightShock;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

