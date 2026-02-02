//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UILabel.h>

@class NSString, UIColor, UILongPressGestureRecognizer;

@interface MMUILabel : UILabel
{
    _Bool _useRedesignLinespacing;
    _Bool _enableLongPressCopy;
    unsigned long long _textStyle;
    double _linespacingFactor;
    double _fixedLineHeight;
    UIColor *_highlightCopyColor;
    NSString *_textToCopy;
    UILongPressGestureRecognizer *_longPressCopyGesture;
}

+ (id)dotWithMultilineIntros:(id)arg1 font:(id)arg2 textColor:(id)arg3;
+ (id)DynamicLabel:(id)arg1 textStyle:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressCopyGesture; // @synthesize longPressCopyGesture=_longPressCopyGesture;
@property(retain, nonatomic) NSString *textToCopy; // @synthesize textToCopy=_textToCopy;
@property(retain, nonatomic) UIColor *highlightCopyColor; // @synthesize highlightCopyColor=_highlightCopyColor;
@property(nonatomic) _Bool enableLongPressCopy; // @synthesize enableLongPressCopy=_enableLongPressCopy;
@property(nonatomic) double fixedLineHeight; // @synthesize fixedLineHeight=_fixedLineHeight;
@property(nonatomic) double linespacingFactor; // @synthesize linespacingFactor=_linespacingFactor;
@property(nonatomic) _Bool useRedesignLinespacing; // @synthesize useRedesignLinespacing=_useRedesignLinespacing;
@property(nonatomic) unsigned long long textStyle; // @synthesize textStyle=_textStyle;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onLongPressCopy:(id)arg1;
- (void)longPressToCopy:(id)arg1;
- (void)menuItemHidden:(id)arg1;
- (void)setDotWithMultilineIntros:(id)arg1;
- (double)calcLineSpacing;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithTextStyle:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)setText:(id)arg1 lineSpacing:(double)arg2;
- (id)paragraphStyle;
- (double)baselineOffset;
- (void)setMultilineAttrText:(id)arg1;
- (void)setMultilineText:(id)arg1;
- (void)applyMultiLineConfig:(id)arg1;
- (void)sizeToFitWidth:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

