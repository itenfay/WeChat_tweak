//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIPanGestureRecognizer.h>

@interface MPDragDownGestureRecognizer : UIPanGestureRecognizer
{
    struct CGPoint _beganLocation;
}

@property(nonatomic) struct CGPoint beganLocation; // @synthesize beganLocation=_beganLocation;
- (struct CGPoint)translationInView:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

