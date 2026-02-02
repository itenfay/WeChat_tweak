//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CTFrameWrap, NSArray, NSMutableArray, NSMutableAttributedString, NSString, UIColor, UIFont, UIView;
@protocol ILinkEventExt, RichTextViewSelectProtocol;

@interface CTRichTextView
{
    NSMutableAttributedString *_attString;
    struct __CTFramesetter *_framesetter;
    CTFrameWrap *_frame;
    NSMutableArray *_images;
    NSMutableArray *_colors;
    NSMutableArray *_tempImages;
    double _fWidth;
    double _fHeight;
    unsigned long long _parserType;
    id <ILinkEventExt> _linkDelegate;
    _Bool _bUpdateFramesIfNeeded;
    _Bool _bWholeField;
    _Bool _bIsLongPressHandled;
    struct CGRect _touchedRect;
    _Bool _bTouchesPassOn;
    _Bool _bHandleLongPress;
    _Bool _bSelectable;
    _Bool _isHighlightedBackgroundStyle;
    UIFont *_highlightedRangeFont;
    UIColor *_highlightedRangeTextColor;
    double _lineSpace;
    UIView<RichTextViewSelectProtocol> *_richTextCoverView;
    NSString *_originalContent;
    NSArray *_lineRanges;
    struct _NSRange _highlightedRange;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *lineRanges; // @synthesize lineRanges=_lineRanges;
@property(readonly, nonatomic) NSString *originalContent; // @synthesize originalContent=_originalContent;
@property(nonatomic) _Bool isHighlightedBackgroundStyle; // @synthesize isHighlightedBackgroundStyle=_isHighlightedBackgroundStyle;
@property(nonatomic) _Bool bSelectable; // @synthesize bSelectable=_bSelectable;
@property(retain, nonatomic) UIView<RichTextViewSelectProtocol> *richTextCoverView; // @synthesize richTextCoverView=_richTextCoverView;
@property(nonatomic) double lineSpace; // @synthesize lineSpace=_lineSpace;
@property(nonatomic) _Bool bHandleLongPress; // @synthesize bHandleLongPress=_bHandleLongPress;
@property(nonatomic) _Bool bTouchesPassOn; // @synthesize bTouchesPassOn=_bTouchesPassOn;
@property(nonatomic) __weak id <ILinkEventExt> linkDelegate; // @synthesize linkDelegate=_linkDelegate;
@property(retain, nonatomic) UIColor *highlightedRangeTextColor; // @synthesize highlightedRangeTextColor=_highlightedRangeTextColor;
@property(retain, nonatomic) UIFont *highlightedRangeFont; // @synthesize highlightedRangeFont=_highlightedRangeFont;
@property(nonatomic) struct _NSRange highlightedRange; // @synthesize highlightedRange=_highlightedRange;
@property(nonatomic) unsigned long long parserType; // @synthesize parserType=_parserType;
@property(nonatomic) double fHeight; // @synthesize fHeight=_fHeight;
@property(nonatomic) double fWidth; // @synthesize fWidth=_fWidth;
- (id)delegateView;
- (_Bool)isEmojiLocation:(unsigned long long)arg1 bStart:(_Bool)arg2;
- (id)getTextString;
- (float)getLineHeight;
- (struct _NSRange)getTouchRangeWithTouchPoint:(struct CGPoint)arg1;
- (long long)getTouchIndexWithTouchRect:(struct CGRect)arg1;
- (long long)getTouchIndexWithTouchPoint:(struct CGPoint)arg1 FrontCursor:(_Bool)arg2;
- (struct _NSRange)characterRangeAtIndex:(long long)arg1;
- (id)getStringWithRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeIntersection:(struct _NSRange)arg1 withSecond:(struct _NSRange)arg2;
- (id)getSelectRectsWithRange:(struct _NSRange)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)longPressOnSearchTopicEvent:(id)arg1;
- (void)longPressOnTextEvent:(id)arg1;
- (void)longPressOnAddressEvent:(id)arg1;
- (void)longPressOnPhoneEvent:(id)arg1;
- (void)longPressOnLinkEvent:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (void)setContent:(id)arg1;
- (double)heightForContent:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateFrames;
- (void)updateFramesIfNeeded;
- (void)updateFrame;
- (void)updateFrameSetting;
- (double)boundingHeightForWidth:(double)arg1;
- (id)createParser:(unsigned long long)arg1;
- (id)getParserByPaserType:(unsigned long long)arg1;
- (void)baseInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

