//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@protocol MJBubbleTouchCaptureViewDelegate;

@interface MJBubbleTouchCaptureView : UIView
{
    id <MJBubbleTouchCaptureViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MJBubbleTouchCaptureViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

