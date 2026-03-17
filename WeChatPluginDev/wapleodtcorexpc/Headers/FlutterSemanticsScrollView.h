//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class SemanticsObject;

@interface FlutterSemanticsScrollView : UIScrollView
{
    SemanticsObject *_semanticsObject;
}

@property(nonatomic) SemanticsObject *semanticsObject; // @synthesize semanticsObject=_semanticsObject;
- (long long)accessibilityElementCount;
- (id)accessibilityContainer;
- (void)accessibilityElementDidLoseFocus;
- (void)accessibilityElementDidBecomeFocused;
- (_Bool)accessibilityPerformEscape;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (_Bool)accessibilityActivate;
- (id)accessibilityAttributedHint;
- (id)accessibilityHint;
- (id)accessibilityAttributedValue;
- (id)accessibilityValue;
- (id)accessibilityAttributedLabel;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithSemanticsObject:(id)arg1;

@end

