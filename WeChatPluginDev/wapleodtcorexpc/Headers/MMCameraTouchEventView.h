//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol MMCameraTouchEventViewDelegate;

@interface MMCameraTouchEventView
{
    id <MMCameraTouchEventViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMCameraTouchEventViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)makeAllGestureRecognizerNotCancelsTouches;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

