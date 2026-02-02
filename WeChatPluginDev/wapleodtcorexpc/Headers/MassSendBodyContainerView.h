//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class NSSet;

@interface MassSendBodyContainerView : UIControl
{
    id m_target;
    SEL m_action;
    NSSet *m_touches;
    _Bool _shouldHighlightBackground;
    _Bool _isLongPressHandled;
    CDUnknownBlockType _handleLongPress;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType handleLongPress; // @synthesize handleLongPress=_handleLongPress;
@property(nonatomic) _Bool isLongPressHandled; // @synthesize isLongPressHandled=_isLongPressHandled;
@property(nonatomic) _Bool shouldHighlightBackground; // @synthesize shouldHighlightBackground=_shouldHighlightBackground;
- (void)LongPressEvents;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

