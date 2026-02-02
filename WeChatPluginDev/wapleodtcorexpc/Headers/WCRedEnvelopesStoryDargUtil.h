//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSDate, UIView, WCRedEnvelopesRedEnvelopesDetailViewController, WCRedEnvelopesStoryViewController;

@interface WCRedEnvelopesStoryDargUtil
{
    _Bool _isHasStory;
    _Bool _isDragEnd;
    _Bool _isNeedRecover;
    _Bool _isNeedDoAuto;
    _Bool _isDragEnd_back;
    _Bool _isNeedRecover_back;
    _Bool _isNeedDoAuto_back;
    _Bool _hasTriggerLightShock;
    _Bool _isDoneFromChangeState;
    _Bool _hasBeginDrag;
    _Bool _shouldIgnoreDrag;
    WCRedEnvelopesStoryViewController *_backViewController;
    WCRedEnvelopesRedEnvelopesDetailViewController *_frontViewController;
    MMTableView *_frontView;
    UIView *_backView;
    double _frontViewTop;
    NSDate *_dragStartTime;
    double _lastMovement;
    double _beginTouchPosY;
    double _lastTouchPosY;
    double _lastBottomY;
    NSDate *_dragStartTime_back;
    double _lastMovement_back;
    double _beginTouchPosY_back;
    double _beginTouchPosX_back;
    double _lastTouchPosY_back;
    double _beginToZoomDistance;
    long long _enterBackCount;
    CDUnknownBlockType _animationInHide;
    CDUnknownBlockType _hideCompletetion;
    CDUnknownBlockType _animationInShow;
    CDUnknownBlockType _showCompletetion;
    CDUnknownBlockType _autoHideCompletetion;
    CDUnknownBlockType _frontViewShowCompletion;
    struct CGSize _beginScrollContentSize_back;
    struct CGPoint _beginScrollContentOffset_back;
}

+ (void)lightShock;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldIgnoreDrag; // @synthesize shouldIgnoreDrag=_shouldIgnoreDrag;
@property(nonatomic) _Bool hasBeginDrag; // @synthesize hasBeginDrag=_hasBeginDrag;
@property(copy, nonatomic) CDUnknownBlockType frontViewShowCompletion; // @synthesize frontViewShowCompletion=_frontViewShowCompletion;
@property(copy, nonatomic) CDUnknownBlockType autoHideCompletetion; // @synthesize autoHideCompletetion=_autoHideCompletetion;
@property(copy, nonatomic) CDUnknownBlockType showCompletetion; // @synthesize showCompletetion=_showCompletetion;
@property(copy, nonatomic) CDUnknownBlockType animationInShow; // @synthesize animationInShow=_animationInShow;
@property(copy, nonatomic) CDUnknownBlockType hideCompletetion; // @synthesize hideCompletetion=_hideCompletetion;
@property(copy, nonatomic) CDUnknownBlockType animationInHide; // @synthesize animationInHide=_animationInHide;
@property(nonatomic) _Bool isDoneFromChangeState; // @synthesize isDoneFromChangeState=_isDoneFromChangeState;
@property(nonatomic) long long enterBackCount; // @synthesize enterBackCount=_enterBackCount;
@property(nonatomic) _Bool hasTriggerLightShock; // @synthesize hasTriggerLightShock=_hasTriggerLightShock;
@property(nonatomic) struct CGPoint beginScrollContentOffset_back; // @synthesize beginScrollContentOffset_back=_beginScrollContentOffset_back;
@property(nonatomic) struct CGSize beginScrollContentSize_back; // @synthesize beginScrollContentSize_back=_beginScrollContentSize_back;
@property(nonatomic) double beginToZoomDistance; // @synthesize beginToZoomDistance=_beginToZoomDistance;
@property(nonatomic) double lastTouchPosY_back; // @synthesize lastTouchPosY_back=_lastTouchPosY_back;
@property(nonatomic) double beginTouchPosX_back; // @synthesize beginTouchPosX_back=_beginTouchPosX_back;
@property(nonatomic) double beginTouchPosY_back; // @synthesize beginTouchPosY_back=_beginTouchPosY_back;
@property(nonatomic) double lastMovement_back; // @synthesize lastMovement_back=_lastMovement_back;
@property(retain, nonatomic) NSDate *dragStartTime_back; // @synthesize dragStartTime_back=_dragStartTime_back;
@property(nonatomic) _Bool isNeedDoAuto_back; // @synthesize isNeedDoAuto_back=_isNeedDoAuto_back;
@property(nonatomic) _Bool isNeedRecover_back; // @synthesize isNeedRecover_back=_isNeedRecover_back;
@property(nonatomic) _Bool isDragEnd_back; // @synthesize isDragEnd_back=_isDragEnd_back;
@property(nonatomic) double lastBottomY; // @synthesize lastBottomY=_lastBottomY;
@property(nonatomic) double lastTouchPosY; // @synthesize lastTouchPosY=_lastTouchPosY;
@property(nonatomic) double beginTouchPosY; // @synthesize beginTouchPosY=_beginTouchPosY;
@property(nonatomic) double lastMovement; // @synthesize lastMovement=_lastMovement;
@property(retain, nonatomic) NSDate *dragStartTime; // @synthesize dragStartTime=_dragStartTime;
@property(nonatomic) _Bool isNeedDoAuto; // @synthesize isNeedDoAuto=_isNeedDoAuto;
@property(nonatomic) _Bool isNeedRecover; // @synthesize isNeedRecover=_isNeedRecover;
@property(nonatomic) _Bool isDragEnd; // @synthesize isDragEnd=_isDragEnd;
@property(nonatomic) _Bool isHasStory; // @synthesize isHasStory=_isHasStory;
@property(nonatomic) double frontViewTop; // @synthesize frontViewTop=_frontViewTop;
@property(nonatomic) __weak UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) __weak MMTableView *frontView; // @synthesize frontView=_frontView;
@property(nonatomic) __weak WCRedEnvelopesRedEnvelopesDetailViewController *frontViewController; // @synthesize frontViewController=_frontViewController;
@property(nonatomic) __weak WCRedEnvelopesStoryViewController *backViewController; // @synthesize backViewController=_backViewController;
- (void)processBackViewGesture:(id)arg1;
- (void)hideStoryVC;
- (id)generateMaskImage:(id)arg1;
- (void)showStoryVC;
- (void)processFrontViewGesture:(id)arg1;
- (void)setShowAnimation:(CDUnknownBlockType)arg1 showCompletetion:(CDUnknownBlockType)arg2;
- (void)setHideAnimation:(CDUnknownBlockType)arg1 hideCompletetion:(CDUnknownBlockType)arg2;
- (id)initWithFrontViewController:(id)arg1 frontView:(id)arg2 backViewController:(id)arg3 frontViewTop:(double)arg4;

@end

