//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>
typedef void (^CDUnknownBlockType)(void);

@class NSSet, UIColor;

@interface MassSendHighlightedView : UIView
{
    NSSet *m_touches;
    UIColor *_defaultBackgroundColor;
    UIColor *_highlightBackgroundColor;
    CDUnknownBlockType _handleTouchUpInside;
}

@property(copy, nonatomic) CDUnknownBlockType handleTouchUpInside; // @synthesize handleTouchUpInside=_handleTouchUpInside;
@property(retain, nonatomic) UIColor *highlightBackgroundColor; // @synthesize highlightBackgroundColor=_highlightBackgroundColor;
@property(retain, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
