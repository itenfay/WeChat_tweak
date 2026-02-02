//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIGestureRecognizer.h>

@class FlutterTouchInterceptingView, NSString;

@interface DelayingGestureRecognizer : UIGestureRecognizer
{
    struct scoped_nsobject<UIGestureRecognizer> _forwardingRecognizer;
    _Bool _shouldEndInNextTouchesEnded;
    _Bool _touchedEndedWithoutBlocking;
    FlutterTouchInterceptingView *_interceptingView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) FlutterTouchInterceptingView *interceptingView; // @synthesize interceptingView=_interceptingView;
@property(nonatomic) _Bool touchedEndedWithoutBlocking; // @synthesize touchedEndedWithoutBlocking=_touchedEndedWithoutBlocking;
@property(nonatomic) _Bool shouldEndInNextTouchesEnded; // @synthesize shouldEndInNextTouchesEnded=_shouldEndInNextTouchesEnded;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)isInsidePlatformView:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 forwardingRecognizer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

