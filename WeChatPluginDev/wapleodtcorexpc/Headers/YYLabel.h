//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSAttributedString, NSMutableArray, NSMutableAttributedString, NSString, NSTimer, UIBezierPath, UIColor, UIFont, YYTextContainer, YYTextDebugOption, YYTextHighlight, YYTextLayout;
@protocol YYTextLinePositionModifier, YYTextParser;

@interface YYLabel : UIView
{
    NSMutableAttributedString *_innerText;
    YYTextLayout *_innerLayout;
    YYTextContainer *_innerContainer;
    NSMutableArray *_attachmentViews;
    NSMutableArray *_attachmentLayers;
    struct _NSRange _highlightRange;
    YYTextHighlight *_highlight;
    YYTextLayout *_highlightLayout;
    YYTextLayout *_shrinkInnerLayout;
    YYTextLayout *_shrinkHighlightLayout;
    NSTimer *_longPressTimer;
    struct CGPoint _touchBeganPoint;
    struct {
        unsigned int layoutNeedUpdate:1;
        unsigned int showingHighlight:1;
        unsigned int trackingTouch:1;
        unsigned int swallowTouch:1;
        unsigned int touchMoved:1;
        unsigned int hasTapAction:1;
        unsigned int hasLongPressAction:1;
        unsigned int contentsNeedFade:1;
    } _state;
    _Bool _verticalForm;
    _Bool _displaysAsynchronously;
    _Bool _clearContentsBeforeAsynchronouslyDisplay;
    _Bool _fadeOnAsynchronouslyDisplay;
    _Bool _fadeOnHighlight;
    _Bool _ignoreCommonProperties;
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_shadowColor;
    double _shadowBlurRadius;
    long long _textAlignment;
    long long _textVerticalAlignment;
    NSAttributedString *_attributedText;
    long long _lineBreakMode;
    NSAttributedString *_truncationToken;
    unsigned long long _numberOfLines;
    id <YYTextParser> _textParser;
    UIBezierPath *_textContainerPath;
    NSArray *_exclusionPaths;
    id <YYTextLinePositionModifier> _linePositionModifier;
    YYTextDebugOption *_debugOption;
    double _preferredMaxLayoutWidth;
    CDUnknownBlockType _textTapAction;
    CDUnknownBlockType _textLongPressAction;
    CDUnknownBlockType _highlightTapAction;
    CDUnknownBlockType _highlightLongPressAction;
    struct CGSize _shadowOffset;
    struct UIEdgeInsets _textContainerInset;
}

+ (Class)layerClass;
+ (id)_shrinkLayoutWithLayout:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool ignoreCommonProperties; // @synthesize ignoreCommonProperties=_ignoreCommonProperties;
@property(nonatomic) _Bool fadeOnHighlight; // @synthesize fadeOnHighlight=_fadeOnHighlight;
@property(nonatomic) _Bool fadeOnAsynchronouslyDisplay; // @synthesize fadeOnAsynchronouslyDisplay=_fadeOnAsynchronouslyDisplay;
@property(nonatomic) _Bool clearContentsBeforeAsynchronouslyDisplay; // @synthesize clearContentsBeforeAsynchronouslyDisplay=_clearContentsBeforeAsynchronouslyDisplay;
@property(nonatomic) _Bool displaysAsynchronously; // @synthesize displaysAsynchronously=_displaysAsynchronously;
@property(copy, nonatomic) CDUnknownBlockType highlightLongPressAction; // @synthesize highlightLongPressAction=_highlightLongPressAction;
@property(copy, nonatomic) CDUnknownBlockType highlightTapAction; // @synthesize highlightTapAction=_highlightTapAction;
@property(copy, nonatomic) CDUnknownBlockType textLongPressAction; // @synthesize textLongPressAction=_textLongPressAction;
@property(copy, nonatomic) CDUnknownBlockType textTapAction; // @synthesize textTapAction=_textTapAction;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(copy, nonatomic) YYTextDebugOption *debugOption; // @synthesize debugOption=_debugOption;
@property(copy, nonatomic) id <YYTextLinePositionModifier> linePositionModifier; // @synthesize linePositionModifier=_linePositionModifier;
@property(nonatomic, getter=isVerticalForm) _Bool verticalForm; // @synthesize verticalForm=_verticalForm;
@property(nonatomic) struct UIEdgeInsets textContainerInset; // @synthesize textContainerInset=_textContainerInset;
@property(copy, nonatomic) NSArray *exclusionPaths; // @synthesize exclusionPaths=_exclusionPaths;
@property(copy, nonatomic) UIBezierPath *textContainerPath; // @synthesize textContainerPath=_textContainerPath;
@property(retain, nonatomic) id <YYTextParser> textParser; // @synthesize textParser=_textParser;
@property(nonatomic) unsigned long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(copy, nonatomic) NSAttributedString *truncationToken; // @synthesize truncationToken=_truncationToken;
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(nonatomic) long long textVerticalAlignment; // @synthesize textVerticalAlignment=_textVerticalAlignment;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) double shadowBlurRadius; // @synthesize shadowBlurRadius=_shadowBlurRadius;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)newAsyncDisplayTask;
- (struct CGSize)intrinsicContentSize;
@property(retain, nonatomic) YYTextLayout *textLayout;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)accessibilityLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_initLabel;
- (void)_clearContents;
- (void)_updateOuterContainerProperties;
- (void)_updateOuterTextProperties;
- (void)_updateOuterLineBreakMode;
- (id)_shadowFromProperties;
- (id)_defaultFont;
- (struct CGRect)_convertRectFromLayout:(struct CGRect)arg1;
- (struct CGRect)_convertRectToLayout:(struct CGRect)arg1;
- (struct CGPoint)_convertPointFromLayout:(struct CGPoint)arg1;
- (struct CGPoint)_convertPointToLayout:(struct CGPoint)arg1;
- (void)_endTouch;
- (void)_removeHighlightAnimated:(_Bool)arg1;
- (void)_hideHighlightAnimated:(_Bool)arg1;
- (void)_showHighlightAnimated:(_Bool)arg1;
- (id)_getHighlightAtPoint:(struct CGPoint)arg1 range:(struct _NSRange *)arg2;
- (void)_trackDidLongPress;
- (void)_endLongPressTimer;
- (void)_startLongPressTimer;
- (id)_highlightLayout;
- (id)_innerLayout;
- (void)_clearInnerLayout;
- (void)_setLayoutNeedRedraw;
- (void)_setLayoutNeedUpdate;
- (void)_updateLayout;
- (void)_updateIfNeeded;
- (void)setDebugEnabled_:(_Bool)arg1;
- (void)setInsetRight_:(double)arg1;
- (void)setInsetLeft_:(double)arg1;
- (void)setInsetBottom_:(double)arg1;
- (void)setInsetTop_:(double)arg1;
- (void)setFontIsBold_:(_Bool)arg1;
- (void)setFontSize_:(double)arg1;
- (void)setFontName_:(id)arg1;
- (id)normalFont_:(id)arg1;
- (id)boldFont_:(id)arg1;
- (_Bool)fontIsBold_:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

