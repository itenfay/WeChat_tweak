//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSObject;

@interface FlutterTouchInterceptingView : UIView
{
    struct scoped_nsobject<DelayingGestureRecognizer> _delayingRecognizer;
    int _blockingPolicy;
    UIView *_embeddedView;
    NSObject *_flutterAccessibilityContainer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityContainer;
- (void)setFlutterAccessibilityContainer:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)blockGesture;
- (void)releaseGesture;
- (id)embeddedView;
- (id)initWithEmbeddedView:(id)arg1 platformViewsController:(WeakPtr_bf33b10e)arg2 gestureRecognizersBlockingPolicy:(int)arg3;

@end

