//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIGestureRecognizer.h>

@class NSString, UIPanGestureRecognizer, UIScrollView, UIView;
@protocol FullScreenGestureDelegate;

@interface WXFullScreenGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _panGestureBeginPoint;
    _Bool _shouldCloseWhenGestureEnd;
    unsigned long long _panGestureLastTimeStamp;
    struct CGPoint _panGestureLastPosition;
    double _panGestureAnimationDuration;
    _Bool _hasBeginDrag;
    _Bool _shouldIgnoreDrag;
    struct CGPoint _originPagingContentOffset;
    struct CGPoint _originInnerContentOffset;
    UIScrollView *_pagingScrollView;
    UIScrollView *_innerScrollView;
    UIView *_parentView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    _Bool _enableDragDownToClose;
    _Bool _enableLeftToRight;
    _Bool _enableRightToLeft;
    _Bool _isLongPressHandled;
    id <FullScreenGestureDelegate> _m_delegate;
    struct CGPoint _touchBeginPoint;
    struct CGRect _containerFrame;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLongPressHandled; // @synthesize isLongPressHandled=_isLongPressHandled;
@property(nonatomic) struct CGPoint touchBeginPoint; // @synthesize touchBeginPoint=_touchBeginPoint;
@property(nonatomic) struct CGRect containerFrame; // @synthesize containerFrame=_containerFrame;
@property(nonatomic) _Bool enableRightToLeft; // @synthesize enableRightToLeft=_enableRightToLeft;
@property(nonatomic) _Bool enableLeftToRight; // @synthesize enableLeftToRight=_enableLeftToRight;
@property(nonatomic) _Bool enableDragDownToClose; // @synthesize enableDragDownToClose=_enableDragDownToClose;
@property(nonatomic) __weak id <FullScreenGestureDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onDragging:(id)arg1;
- (_Bool)shouldCloseWhenGestureEndWithTranslation:(struct CGPoint)arg1;
- (double)durationFromCurPositionToTargetPointWithSpeed:(double)arg1;
- (double)distanceBetweenPointA:(struct CGPoint)arg1 pointB:(struct CGPoint)arg2;
- (void)cancelPressEvents;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)pressedEvents;
- (void)LongPressEvents;
- (void)LongPressBegin;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)initGestures;
- (id)panGestureRecognizer;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

