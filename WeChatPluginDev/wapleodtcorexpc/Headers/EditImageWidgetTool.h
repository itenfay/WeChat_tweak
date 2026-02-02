//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditImageBorderView, EditImageModView, NSString, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer;
@protocol EditImageWidgetToolDelegate;

@interface EditImageWidgetTool
{
    _Bool _activeTouches;
    unsigned int _gestureMonitor;
    _Bool _isPressing;
    double _swipeLength;
    double _viewScale;
    struct CGPoint _startPanGesturePoint;
    _Bool _hasSaveAttr;
    _Bool _isMoveToTop;
    EditImageModView *_saveView;
    _Bool _hasAddView;
    double _viewBorder;
    double _maxFrameScaleWhileSelect;
    _Bool _hasPreClicked;
    _Bool _isSpecialPaning;
    _Bool _isSelected;
    _Bool _isAdsort;
    _Bool _ignoreShock;
    unsigned int _viewArrayIndex;
    id <EditImageWidgetToolDelegate> _delegate;
    EditImageBorderView *_borderView;
    double _screenScale;
    double _viewAngle;
    double _widgetScale;
    double _zoomScale;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UIRotationGestureRecognizer *_rotateGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    double _currentAdsortRadian;
    unsigned long long _handleGestureCount;
    CDStruct_c97747ee _gestureStartState;
}

+ (id)generateWidgetFromState:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool ignoreShock; // @synthesize ignoreShock=_ignoreShock;
@property(nonatomic) unsigned long long handleGestureCount; // @synthesize handleGestureCount=_handleGestureCount;
@property(nonatomic) CDStruct_c97747ee gestureStartState; // @synthesize gestureStartState=_gestureStartState;
@property(nonatomic) double currentAdsortRadian; // @synthesize currentAdsortRadian=_currentAdsortRadian;
@property(nonatomic) _Bool isAdsort; // @synthesize isAdsort=_isAdsort;
@property(retain, nonatomic) UILongPressGestureRecognizer *_longPressGesture; // @synthesize _longPressGesture;
@property(retain, nonatomic) UIRotationGestureRecognizer *_rotateGesture; // @synthesize _rotateGesture;
@property(retain, nonatomic) UIPinchGestureRecognizer *_pinchGesture; // @synthesize _pinchGesture;
@property(retain, nonatomic) UITapGestureRecognizer *_tapGesture; // @synthesize _tapGesture;
@property(retain, nonatomic) UIPanGestureRecognizer *_panGesture; // @synthesize _panGesture;
@property(nonatomic) double _zoomScale; // @synthesize _zoomScale;
@property(nonatomic) double _widgetScale; // @synthesize _widgetScale;
@property(nonatomic) double _viewAngle; // @synthesize _viewAngle;
@property(nonatomic) double _screenScale; // @synthesize _screenScale;
@property(nonatomic) unsigned int _viewArrayIndex; // @synthesize _viewArrayIndex;
@property(retain, nonatomic) EditImageBorderView *_borderView; // @synthesize _borderView;
@property(nonatomic) double _viewScale; // @synthesize _viewScale;
@property(nonatomic) _Bool _isSelected; // @synthesize _isSelected;
@property(nonatomic) __weak id <EditImageWidgetToolDelegate> _delegate; // @synthesize _delegate;
- (void)dealloc;
- (id)exportWidgetStateForEditorFrame:(struct CGRect)arg1 assetPreviewFrame:(struct CGRect)arg2;
- (void)resetWidget;
- (void)seekWidgetToTimeSec:(double)arg1;
- (void)reviveWidget;
- (void)freezeWidget;
- (void)onWidgitDeleted;
- (id)exportAnimatedLayer;
- (void)setScreenCenter:(struct CGPoint)arg1;
- (_Bool)needHighQuality;
- (void)subclassReloadFrame;
- (void)subclassLargeTouchFrame;
- (double)widgetViewBorder;
- (double)widgetHeight;
- (double)widgetWidth;
- (_Bool)startEditingText;
- (double)maxFrameScaleWhileSelect;
- (double)maxScaleFactor;
- (double)originalScaleFactor;
- (void)judgeFromDeleteBar:(id)arg1;
- (void)reloadFrameWithZoomScale:(double)arg1;
- (void)reloadFrame;
- (void)hideBorderView;
- (void)showBorderView;
- (void)sendShowNilTextToolBorderViewToDelegate;
- (void)sendShowSelectedTextToolBorderViewToDelegate;
- (void)sendEndGestureToDelegate;
- (void)sendStartGestureToDelegate;
- (void)printToolState:(CDStruct_c97747ee)arg1;
- (void)restoreWidgetState:(CDStruct_c97747ee)arg1;
- (CDStruct_c97747ee)getWidgetStartGestureState;
- (CDStruct_c97747ee)getCurrentWidgetState;
- (void)setHasSaveAttr;
- (void)resetHasAddViewState;
- (void)saveAttr;
- (void)endGesture;
- (void)startGesture;
- (void)forceCancelGesture;
- (void)_realPlayShock;
- (double)getAdsorbAngle:(double)arg1;
- (double)angleOfRadian:(double)arg1;
- (_Bool)needAdsorb:(double)arg1;
- (_Bool)checkAllGestureEnd;
- (void)saveWidgetStateInGestureStartIfNeeded;
- (void)handleRotateGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)initBorderView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

