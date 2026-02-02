//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIGestureRecognizer.h>

@interface EmoticonCustomManageSwipeSelectGestureRecognizer : UIGestureRecognizer
{
    _Bool _gestureRecognized;
    struct CGPoint _startPoint;
    struct CGPoint _lastPoint;
}

@property(nonatomic) struct CGPoint lastPoint; // @synthesize lastPoint=_lastPoint;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) _Bool gestureRecognized; // @synthesize gestureRecognized=_gestureRecognized;
- (void)cleanAll;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

