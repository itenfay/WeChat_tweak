//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIPanGestureRecognizer.h>
typedef void (^CDUnknownBlockType)(void);

@interface MMLivePanGestureRecognizer : UIPanGestureRecognizer
{
    CDUnknownBlockType _touchCallback;
}

@property(copy, nonatomic) CDUnknownBlockType touchCallback; // @synthesize touchCallback=_touchCallback;
- (void)reset;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
