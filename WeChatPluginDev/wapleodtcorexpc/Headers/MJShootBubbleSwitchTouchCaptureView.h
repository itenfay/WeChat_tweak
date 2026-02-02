//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol MJShootBubbleSwitchTouchCaptureViewDelegate;

@interface MJShootBubbleSwitchTouchCaptureView : NSObject
{
    id <MJShootBubbleSwitchTouchCaptureViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MJShootBubbleSwitchTouchCaptureViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

