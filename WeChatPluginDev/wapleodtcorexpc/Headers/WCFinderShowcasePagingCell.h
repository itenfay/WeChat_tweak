//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UILongPressGestureRecognizer, WCFinderShowcasePagingView;

@interface WCFinderShowcasePagingCell : UIView
{
    UILongPressGestureRecognizer *_longGesture;
    WCFinderShowcasePagingView *_owner;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WCFinderShowcasePagingView *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) UILongPressGestureRecognizer *longGesture; // @synthesize longGesture=_longGesture;
- (void)onTap;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

