//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class JITRuntimeView, NSArray;

@interface JITRuntimeTouchReceiverView : UIView
{
    JITRuntimeView *_view;
    NSArray *_sortDescriptors;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(nonatomic) __weak JITRuntimeView *view; // @synthesize view=_view;
- (void)handleTouches:(id)arg1 timestamp:(double)arg2 touches:(id)arg3 changedTouches:(id)arg4;
- (id)convertTouches:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 runtimeView:(id)arg2;

@end

