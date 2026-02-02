//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, NSArray, NSMutableArray, NSString, UIBezierPath, UIButton, UIColor, UILongPressGestureRecognizer, UIPanGestureRecognizer, WCAdDraggableImageView, WCAdFinderLiveLogic, WCAdFinderLivePlayerView, WCAdFullCardContentContainerView, WCAdFullCardDragImageGestureInfo, WCAdInteractionLabelLogic, WCAdInteractionTagLogic, WCAdLiveDisplayView, WCAdLiveLikeAnimationView, WCGestureReportInfo, WCGestureSet, WCTimeLineAdFullCardSightView;

@interface WCTimeLineAdFullCardView
{
    _Bool _isGestureAd;
    _Bool _isDragImageAd;
    _Bool _isSocialLikeAttractingAd;
    unsigned int _sourceType;
    unsigned int _liveStatus;
    unsigned long long _uiGestureStartTime;
    unsigned long long _uiGestureEndTime;
    double _uiGestureDistance;
    NSArray *_uiGestureTargetPoint;
    WCGestureSet *_uiGestureTargetSet;
    NSArray *_uiGestureTargetPointArrayList;
    NSMutableArray *_uiGestureTargetSetList;
    UIColor *_uiGestureColor;
    UIPanGestureRecognizer *_uiPanGestureRecognizer;
    UIButton *_adTouchButton;
    WCTimeLineAdFullCardSightView *_sightView;
    CAShapeLayer *_slayer;
    UIBezierPath *_bPath;
    NSMutableArray *_sourcePoints;
    WCGestureReportInfo *_gestureReportInfo;
    long long _longPressGestureState;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    WCAdLiveDisplayView *_liveDisplayView;
    WCAdLiveLikeAnimationView *_liveLikeAnimationView;
    WCAdInteractionLabelLogic *_interactionLabelLogic;
    double _lastTouchTimestamp;
    WCAdFullCardDragImageGestureInfo *_dragImageInfo;
    WCAdDraggableImageView *_dragImageView;
    WCAdFinderLivePlayerView *_finderLivePlayerView;
    WCAdFinderLiveLogic *_finderLiveLogic;
    WCAdFullCardContentContainerView *_contentContainerView;
    struct CGPoint _lastTouchPoint;
}

+ (id)fetchAnimationViewForView:(id)arg1 isFromTimeline:(_Bool)arg2 dataItem:(id)arg3;
+ (double)heightForMedia:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdFullCardContentContainerView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) WCAdFinderLiveLogic *finderLiveLogic; // @synthesize finderLiveLogic=_finderLiveLogic;
@property(retain, nonatomic) WCAdFinderLivePlayerView *finderLivePlayerView; // @synthesize finderLivePlayerView=_finderLivePlayerView;
@property(nonatomic) _Bool isSocialLikeAttractingAd; // @synthesize isSocialLikeAttractingAd=_isSocialLikeAttractingAd;
@property(retain, nonatomic) WCAdDraggableImageView *dragImageView; // @synthesize dragImageView=_dragImageView;
@property(retain, nonatomic) WCAdFullCardDragImageGestureInfo *dragImageInfo; // @synthesize dragImageInfo=_dragImageInfo;
@property(nonatomic) _Bool isDragImageAd; // @synthesize isDragImageAd=_isDragImageAd;
@property(nonatomic) double lastTouchTimestamp; // @synthesize lastTouchTimestamp=_lastTouchTimestamp;
@property(nonatomic) struct CGPoint lastTouchPoint; // @synthesize lastTouchPoint=_lastTouchPoint;
@property(nonatomic) __weak WCAdInteractionLabelLogic *interactionLabelLogic; // @synthesize interactionLabelLogic=_interactionLabelLogic;
@property(retain, nonatomic) WCAdLiveLikeAnimationView *liveLikeAnimationView; // @synthesize liveLikeAnimationView=_liveLikeAnimationView;
@property(nonatomic) unsigned int liveStatus; // @synthesize liveStatus=_liveStatus;
@property(retain, nonatomic) WCAdLiveDisplayView *liveDisplayView; // @synthesize liveDisplayView=_liveDisplayView;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(nonatomic) long long longPressGestureState; // @synthesize longPressGestureState=_longPressGestureState;
@property(retain, nonatomic) WCGestureReportInfo *gestureReportInfo; // @synthesize gestureReportInfo=_gestureReportInfo;
@property(retain, nonatomic) NSMutableArray *sourcePoints; // @synthesize sourcePoints=_sourcePoints;
@property(retain, nonatomic) UIBezierPath *bPath; // @synthesize bPath=_bPath;
@property(retain, nonatomic) CAShapeLayer *slayer; // @synthesize slayer=_slayer;
@property(retain, nonatomic) WCTimeLineAdFullCardSightView *sightView; // @synthesize sightView=_sightView;
@property(retain, nonatomic) UIButton *adTouchButton; // @synthesize adTouchButton=_adTouchButton;
@property(nonatomic) unsigned int sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) UIPanGestureRecognizer *uiPanGestureRecognizer; // @synthesize uiPanGestureRecognizer=_uiPanGestureRecognizer;
@property(nonatomic) _Bool isGestureAd; // @synthesize isGestureAd=_isGestureAd;
@property(retain, nonatomic) UIColor *uiGestureColor; // @synthesize uiGestureColor=_uiGestureColor;
@property(retain, nonatomic) NSMutableArray *uiGestureTargetSetList; // @synthesize uiGestureTargetSetList=_uiGestureTargetSetList;
@property(retain, nonatomic) NSArray *uiGestureTargetPointArrayList; // @synthesize uiGestureTargetPointArrayList=_uiGestureTargetPointArrayList;
@property(retain, nonatomic) WCGestureSet *uiGestureTargetSet; // @synthesize uiGestureTargetSet=_uiGestureTargetSet;
@property(retain, nonatomic) NSArray *uiGestureTargetPoint; // @synthesize uiGestureTargetPoint=_uiGestureTargetPoint;
@property(nonatomic) double uiGestureDistance; // @synthesize uiGestureDistance=_uiGestureDistance;
@property(nonatomic) unsigned long long uiGestureEndTime; // @synthesize uiGestureEndTime=_uiGestureEndTime;
@property(nonatomic) unsigned long long uiGestureStartTime; // @synthesize uiGestureStartTime=_uiGestureStartTime;
@property(readonly, nonatomic) WCAdInteractionTagLogic *interactionTagLogic;
- (id)fetchJumpOriginView;
- (void)setAdBreakFrameView:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)handleFireworkCheerAttractingWithPlaybackTime:(double)arg1;
- (void)handleSocialLikeAttractingWithPlaybackTime:(double)arg1;
- (void)initSocialLikeAttracting:(id)arg1;
- (void)reportDragImageDidDragSuccess;
- (void)reportDragImageDidDragEndWithDuration:(unsigned long long)arg1;
- (void)reportDragImageDidBeginToDrag;
- (struct CGRect)getDragImageDestDisplayRect;
- (id)getDragImageCurrentView;
- (struct CGRect)draggableImageViewConvertRect:(struct CGRect)arg1 toView:(id)arg2;
- (void)onDraggableImageViewDidDragToDestArea;
- (void)onDraggableImageViewDidDragEndWithDuration:(unsigned long long)arg1;
- (void)onDraggableImageViewDidBeginToDrag;
- (void)initDragImageView:(id)arg1;
- (void)handleDragImageGestureWithPlaybackTime:(double)arg1;
- (void)endLongPressActionReportWithResult:(unsigned long long)arg1;
- (void)startLongPressActionReport;
- (void)sightViewLongPressGestureEnd;
- (void)onLongPressDone;
- (void)removeLongPressGestureRecognizer;
- (void)addLongPressGestureRecognizer;
- (void)handleLongPressGestureWithPlaybackTime:(double)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)initLongPressGestureWith:(id)arg1;
- (id)pickCardLogic;
- (void)doGestureChannelReport:(int)arg1 score:(float)arg2 targetScore:(float)arg3;
- (long long)getSamplingInterval:(long long)arg1;
- (void)onGestureEnd:(struct CGPoint)arg1;
- (void)handleUIGestureWithPlaybackTime:(double)arg1;
- (void)unregisterUIPanGestureRecognizer;
- (void)registerUIPanGestureRecognizer;
- (void)onUIGesureEvent:(id)arg1;
- (void)startGestureWithoutWCPlayer;
- (void)initUIGesture:(id)arg1;
- (void)onSightViewWillBeClear;
- (void)onActionOccurForGestureType:(long long)arg1;
- (void)onPlayEnd:(_Bool)arg1;
- (void)onPlaybackTimeUpdate:(double)arg1;
- (void)dealloc;
- (void)onClick:(long long)arg1;
- (void)delayClearTouchButtonColor;
- (void)delayClickAdTouchButton;
- (id)getVoiceOverStrForTimeline;
- (void)contentItemDidEndDecelerating;
- (void)contentItemWillDisappear;
- (void)contentItemBecomeInvisible;
- (void)contentItemDidEndDisplaying;
- (void)contentItemWillDisplay;
- (void)onVoiceOverClick;
- (void)setAdTouchButtonEnabled:(_Bool)arg1;
- (void)onClickAdTouchButton:(id)arg1 forEvent:(id)arg2;
- (void)addButtonForItem:(id)arg1;
- (void)checkUpdateLiveInfo;
- (void)stopLiveLikeAnimation;
- (void)tryStartLiveLikeAnimation;
- (void)updateLiveStatus:(int)arg1;
- (id)createLiveLikeAnimationView;
- (void)initLiveInfoView:(id)arg1;
- (void)playerSeekToTime:(double)arg1;
- (id)getPlayerCurrentSnapshot;
- (void)setPlayerContentHidden:(_Bool)arg1;
- (void)autoPauseWithoutSound;
- (void)autoPlayWithoutSound;
- (id)getMainContentView;
- (void)addFinderLivePlayer:(id)arg1;
- (id)createFinderLivePlayer:(id)arg1;
- (void)addSightViewWithMediaItem:(id)arg1;
- (void)initSightAndCoverView:(id)arg1;
- (void)addImageViewWithMediaItem:(id)arg1;
- (void)addTextContentContainerViewWithData:(id)arg1;
- (void)addMediaViewForItem:(id)arg1;
- (void)initViewsWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

