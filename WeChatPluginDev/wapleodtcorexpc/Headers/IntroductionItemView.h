//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class NSSet, WeChatIntroduction;

@interface IntroductionItemView : UIControl
{
    NSSet *m_touches;
    _Bool _isLongPressHandled;
    CDUnknownBlockType _handleClick;
    CDUnknownBlockType _handleLongPress;
    WeChatIntroduction *_introduction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WeChatIntroduction *introduction; // @synthesize introduction=_introduction;
@property(copy, nonatomic) CDUnknownBlockType handleLongPress; // @synthesize handleLongPress=_handleLongPress;
@property(copy, nonatomic) CDUnknownBlockType handleClick; // @synthesize handleClick=_handleClick;
@property(nonatomic) _Bool isLongPressHandled; // @synthesize isLongPressHandled=_isLongPressHandled;
- (void)LongPressEvents;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (void)initViews;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)sizeToFit:(struct CGSize)arg1;
- (id)initWithIntroduction:(id)arg1;

@end

