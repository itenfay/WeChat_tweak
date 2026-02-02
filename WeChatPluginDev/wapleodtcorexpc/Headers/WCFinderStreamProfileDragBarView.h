//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIPanGestureRecognizer;
@protocol WCFinderSteramProfileBarViewInterface, WCFinderStreamProfileDragBarViewDelegate;

@interface WCFinderStreamProfileDragBarView : UIView
{
    _Bool _isExpand;
    _Bool _isExpandMax;
    _Bool _isExpandingState;
    _Bool _supportExpand;
    _Bool _enable;
    _Bool _draggingClose;
    _Bool _draggingBeginOnExpandArea;
    id <WCFinderStreamProfileDragBarViewDelegate> _delegate;
    double _displayCloseStyleDragDistance;
    UIView *_fullScreenView;
    UIView *_moveView;
    UIPanGestureRecognizer *_panGesture;
    UIView<WCFinderSteramProfileBarViewInterface> *_barView;
    double _dragExpandHeight;
    UIPanGestureRecognizer *_outerPanGesture;
    double _beginDragY;
    double _previousPanPositionY;
    double _viewTopAtPanBegin;
    double _expandMinHeight;
    double _expandMaxHeight;
    double _pointExpandMax;
    double _pointExpandMin;
    double _displayDragCloseStyleProgress;
    struct CGPoint _draggingScrollViewOffset;
}

- (void).cxx_destruct;
@property(nonatomic) double displayDragCloseStyleProgress; // @synthesize displayDragCloseStyleProgress=_displayDragCloseStyleProgress;
@property(nonatomic) double pointExpandMin; // @synthesize pointExpandMin=_pointExpandMin;
@property(nonatomic) double pointExpandMax; // @synthesize pointExpandMax=_pointExpandMax;
@property(nonatomic) double expandMaxHeight; // @synthesize expandMaxHeight=_expandMaxHeight;
@property(nonatomic) double expandMinHeight; // @synthesize expandMinHeight=_expandMinHeight;
@property(nonatomic) struct CGPoint draggingScrollViewOffset; // @synthesize draggingScrollViewOffset=_draggingScrollViewOffset;
@property(nonatomic) _Bool draggingBeginOnExpandArea; // @synthesize draggingBeginOnExpandArea=_draggingBeginOnExpandArea;
@property(nonatomic) _Bool draggingClose; // @synthesize draggingClose=_draggingClose;
@property(nonatomic) double viewTopAtPanBegin; // @synthesize viewTopAtPanBegin=_viewTopAtPanBegin;
@property(nonatomic) double previousPanPositionY; // @synthesize previousPanPositionY=_previousPanPositionY;
@property(nonatomic) double beginDragY; // @synthesize beginDragY=_beginDragY;
@property(retain, nonatomic) UIPanGestureRecognizer *outerPanGesture; // @synthesize outerPanGesture=_outerPanGesture;
@property(nonatomic) double dragExpandHeight; // @synthesize dragExpandHeight=_dragExpandHeight;
@property(retain, nonatomic) UIView<WCFinderSteramProfileBarViewInterface> *barView; // @synthesize barView=_barView;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) _Bool supportExpand; // @synthesize supportExpand=_supportExpand;
@property(nonatomic) __weak UIView *moveView; // @synthesize moveView=_moveView;
@property(nonatomic) __weak UIView *fullScreenView; // @synthesize fullScreenView=_fullScreenView;
@property(nonatomic) double displayCloseStyleDragDistance; // @synthesize displayCloseStyleDragDistance=_displayCloseStyleDragDistance;
@property(nonatomic) __weak id <WCFinderStreamProfileDragBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isExpandingState; // @synthesize isExpandingState=_isExpandingState;
@property(nonatomic) _Bool isExpandMax; // @synthesize isExpandMax=_isExpandMax;
@property(nonatomic) _Bool isExpand; // @synthesize isExpand=_isExpand;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)handleTableViewPanGesture:(id)arg1;
- (void)setupScrollView:(id)arg1 orMainView:(id)arg2;
- (void)setupScrollView:(id)arg1;
- (void)handleDragBarGestureEnd:(struct CGPoint)arg1;
- (void)handleDragBarGestureChange:(double)arg1;
- (void)handlePanGestureBegin;
- (void)handlePan:(id)arg1;
- (void)doLayoutBarView;
- (void)updateDisplayDragCloseStyle;
- (void)updateBarBGColor:(id)arg1 arrowColor:(id)arg2;
@property(nonatomic) _Bool displayDragCloseStyle;
- (void)layoutSubviews;
- (void)initBarViewWithType:(long long)arg1;
- (id)initWithWidth:(double)arg1 blankHeight:(double)arg2 dragExpandHeight:(double)arg3 type:(long long)arg4;
- (id)initWithWidth:(double)arg1 blankHeight:(double)arg2 dragExpandHeight:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

