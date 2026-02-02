//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UILongPressGestureRecognizer.h>

@protocol MMLiveGestureRecognizerDelegate;

@interface MMLiveLongPressRecognizer : UILongPressGestureRecognizer
{
    id <MMLiveGestureRecognizerDelegate> _liveGestureDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMLiveGestureRecognizerDelegate> liveGestureDelegate; // @synthesize liveGestureDelegate=_liveGestureDelegate;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

