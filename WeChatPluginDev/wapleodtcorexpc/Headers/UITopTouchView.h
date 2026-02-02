//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString;

@interface UITopTouchView : UIView
{
    _Bool _isTopTouch;
    _Bool _isTransGesture;
    id _touchTarget;
    NSMutableArray *_requestFailed2EdgePanGesArr;
    SEL _touchSelBegan;
    SEL _touchSelMoved;
    SEL _touchSelEnded;
    SEL _touchSelCancelled;
}

- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)addGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)addRequestFailed2EdgePanGes:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)addTopTouchTarget:(id)arg1 began:(SEL)arg2 moved:(SEL)arg3 ended:(SEL)arg4 cancelled:(SEL)arg5;
- (void)transGesture:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

