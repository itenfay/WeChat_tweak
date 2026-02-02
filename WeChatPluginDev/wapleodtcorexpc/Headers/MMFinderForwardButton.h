//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class UILongPressGestureRecognizer, UIView;
@protocol MMFinderForwardButtonDelegate;

@interface MMFinderForwardButton : UIButton
{
    UIView *_mask;
    UILongPressGestureRecognizer *_longpressGesture;
    id <MMFinderForwardButtonDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFinderForwardButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILongPressGestureRecognizer *longpressGesture; // @synthesize longpressGesture=_longpressGesture;
@property(retain, nonatomic) UIView *mask; // @synthesize mask=_mask;
- (void)onLongPressGesture:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

