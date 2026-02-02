//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MPCustomInteractiveHandler, MPDragDownGestureRecognizer, NSString, UIGestureRecognizer;
@protocol MPDragDownGestureHandlerDelegate;

@interface MPDragDownGestureHandler : NSObject
{
    _Bool _isShouldBegin;
    _Bool _isRunning;
    UIGestureRecognizer *_recognizeSimultaneouslyGestureRecognizer;
    MPCustomInteractiveHandler *_interactiveHandler;
    id <MPDragDownGestureHandlerDelegate> _delegate;
    MPDragDownGestureRecognizer *_recognizer;
    double _distance;
}

- (void).cxx_destruct;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) _Bool isShouldBegin; // @synthesize isShouldBegin=_isShouldBegin;
@property(retain, nonatomic) MPDragDownGestureRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(nonatomic) __weak id <MPDragDownGestureHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MPCustomInteractiveHandler *interactiveHandler; // @synthesize interactiveHandler=_interactiveHandler;
@property(nonatomic) __weak UIGestureRecognizer *recognizeSimultaneouslyGestureRecognizer; // @synthesize recognizeSimultaneouslyGestureRecognizer=_recognizeSimultaneouslyGestureRecognizer;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleGestureRecognizer:(id)arg1;
- (id)gestureRecognizer;
- (void)clearGesture;
- (void)setupGestureWithView:(id)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1 interactiveHandler:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

