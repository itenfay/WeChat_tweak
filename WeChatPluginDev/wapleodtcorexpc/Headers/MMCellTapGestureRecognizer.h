//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIGestureRecognizer.h>

@class UITouch;
@protocol MMCellTapGestureRecognizerActionDelegate;

@interface MMCellTapGestureRecognizer : UIGestureRecognizer
{
    id <MMCellTapGestureRecognizerActionDelegate> _actionDelegate;
    UITouch *_touch;
    struct CGPoint _point;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITouch *touch; // @synthesize touch=_touch;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(nonatomic) __weak id <MMCellTapGestureRecognizerActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

