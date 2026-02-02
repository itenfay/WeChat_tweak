//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIGestureRecognizer.h>

@class UITouch;

@interface TextStateFeverTapGestureRecognizer : UIGestureRecognizer
{
    _Bool _isInLongPress;
    UITouch *_recentTouch;
    CDUnknownBlockType _triggerHandler;
    CDUnknownBlockType _singleTapHandler;
    CDUnknownBlockType _longPressHandler;
    unsigned long long _tapCount;
    UITouch *_activeTouch;
    struct CGPoint _originPoint;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInLongPress; // @synthesize isInLongPress=_isInLongPress;
@property(nonatomic) struct CGPoint originPoint; // @synthesize originPoint=_originPoint;
@property(retain, nonatomic) UITouch *activeTouch; // @synthesize activeTouch=_activeTouch;
@property(nonatomic) unsigned long long tapCount; // @synthesize tapCount=_tapCount;
@property(copy, nonatomic) CDUnknownBlockType longPressHandler; // @synthesize longPressHandler=_longPressHandler;
@property(copy, nonatomic) CDUnknownBlockType singleTapHandler; // @synthesize singleTapHandler=_singleTapHandler;
@property(copy, nonatomic) CDUnknownBlockType triggerHandler; // @synthesize triggerHandler=_triggerHandler;
@property(retain, nonatomic) UITouch *recentTouch; // @synthesize recentTouch=_recentTouch;
- (unsigned int)tapType;
- (void)reset;
- (void)tapTimeout;
- (void)cancelTapTimeout;
- (void)refreshTapTimeout;
- (void)longPressTimeout;
- (void)cancelLongTimeout;
- (void)refreshLongTimeout;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

