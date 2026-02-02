//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIImageView, MMUILabel, MMUIView, NSDate, UIView, WCStoryPreviewReportObj, WCStorysPreviewViewController;

@interface WCStoryDragAnimationUtil
{
    _Bool _isFullScreenShowStory;
    _Bool _hasTriggerDragShock;
    _Bool _hasTriggerPlayMuteShock;
    _Bool _isPlayingMuted;
    _Bool _bBackViewShow;
    WCStoryPreviewReportObj *_previewReportObj;
    UIView *_frontView;
    UIView *_backView;
    unsigned long long _utilType;
    WCStorysPreviewViewController *_backViewController;
    MMUIView *_muteBtnView;
    MMUIImageView *_muteBtnImageView;
    MMUILabel *_muteBtnLabel;
    double _frontViewTop;
    CDUnknownBlockType _animationInHide;
    CDUnknownBlockType _hideCompletetion;
    CDUnknownBlockType _autoHideCompletetion;
    CDUnknownBlockType _animationInShow;
    CDUnknownBlockType _showCompletetion;
    NSDate *_dragStartTime;
    double _lastMovement;
    double _beginTouchPosY;
    double _lastTouchPosY;
}

+ (double)distanceFromtPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
+ (double)distanceToLeftBottom:(struct CGPoint)arg1;
+ (id)storyDragAnimationUtilWithFrontView:(id)arg1 backView:(id)arg2 frontViewTop:(double)arg3;
+ (void)errorShock;
+ (void)lightShock;
- (void).cxx_destruct;
@property(nonatomic) _Bool bBackViewShow; // @synthesize bBackViewShow=_bBackViewShow;
@property(nonatomic) _Bool isPlayingMuted; // @synthesize isPlayingMuted=_isPlayingMuted;
@property(nonatomic) _Bool hasTriggerPlayMuteShock; // @synthesize hasTriggerPlayMuteShock=_hasTriggerPlayMuteShock;
@property(nonatomic) _Bool hasTriggerDragShock; // @synthesize hasTriggerDragShock=_hasTriggerDragShock;
@property(nonatomic) double lastTouchPosY; // @synthesize lastTouchPosY=_lastTouchPosY;
@property(nonatomic) double beginTouchPosY; // @synthesize beginTouchPosY=_beginTouchPosY;
@property(nonatomic) double lastMovement; // @synthesize lastMovement=_lastMovement;
@property(retain, nonatomic) NSDate *dragStartTime; // @synthesize dragStartTime=_dragStartTime;
@property(copy, nonatomic) CDUnknownBlockType showCompletetion; // @synthesize showCompletetion=_showCompletetion;
@property(copy, nonatomic) CDUnknownBlockType animationInShow; // @synthesize animationInShow=_animationInShow;
@property(copy, nonatomic) CDUnknownBlockType autoHideCompletetion; // @synthesize autoHideCompletetion=_autoHideCompletetion;
@property(copy, nonatomic) CDUnknownBlockType hideCompletetion; // @synthesize hideCompletetion=_hideCompletetion;
@property(copy, nonatomic) CDUnknownBlockType animationInHide; // @synthesize animationInHide=_animationInHide;
@property(nonatomic) double frontViewTop; // @synthesize frontViewTop=_frontViewTop;
@property(nonatomic) __weak MMUILabel *muteBtnLabel; // @synthesize muteBtnLabel=_muteBtnLabel;
@property(nonatomic) __weak MMUIImageView *muteBtnImageView; // @synthesize muteBtnImageView=_muteBtnImageView;
@property(retain, nonatomic) MMUIView *muteBtnView; // @synthesize muteBtnView=_muteBtnView;
@property(nonatomic) __weak WCStorysPreviewViewController *backViewController; // @synthesize backViewController=_backViewController;
@property(nonatomic) unsigned long long utilType; // @synthesize utilType=_utilType;
@property(nonatomic) __weak UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) __weak UIView *frontView; // @synthesize frontView=_frontView;
@property(nonatomic) _Bool isFullScreenShowStory; // @synthesize isFullScreenShowStory=_isFullScreenShowStory;
@property(retain, nonatomic) WCStoryPreviewReportObj *previewReportObj; // @synthesize previewReportObj=_previewReportObj;
- (_Bool)canAutoPlayByFirstTakePhoto;
- (void)showFrontView:(_Bool)arg1;
- (void)autoHideFrontViewCompletetion:(CDUnknownBlockType)arg1;
- (void)hideFrontViewAndPlayMute:(_Bool)arg1;
- (void)processBackViewGestureWithTouchPoint:(struct CGPoint)arg1 andState:(long long)arg2;
- (void)moveMutePlayViewWithMovement:(double)arg1;
- (void)processFrontViewGesture:(id)arg1;
- (_Bool)isPanInMuteView:(id)arg1;
- (void)setShowAnimation:(CDUnknownBlockType)arg1 showCompletetion:(CDUnknownBlockType)arg2;
- (void)setHideAnimation:(CDUnknownBlockType)arg1 hideCompletetion:(CDUnknownBlockType)arg2;
- (void)setMutebtnViewBigger:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrontView:(id)arg1 backViewController:(id)arg2 frontViewTop:(double)arg3;

@end

