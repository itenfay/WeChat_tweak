//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSSet, YYTextContainer, YYTextLine;

@interface YYTextLayout : NSObject
{
    _Bool _containsHighlight;
    _Bool _needDrawBlockBorder;
    _Bool _needDrawBackgroundBorder;
    _Bool _needDrawShadow;
    _Bool _needDrawUnderline;
    _Bool _needDrawText;
    _Bool _needDrawAttachment;
    _Bool _needDrawInnerShadow;
    _Bool _needDrawStrikethrough;
    _Bool _needDrawBorder;
    YYTextContainer *_container;
    NSAttributedString *_text;
    struct __CTFramesetter *_frameSetter;
    struct __CTFrame *_frame;
    NSArray *_lines;
    YYTextLine *_truncatedLine;
    NSArray *_attachments;
    NSArray *_attachmentRanges;
    NSArray *_attachmentRects;
    NSSet *_attachmentContentsSet;
    unsigned long long _rowCount;
    unsigned long long *_lineRowsIndex;
    CDStruct_c3b9c2ee *_lineRowsEdge;
    struct _NSRange _range;
    struct _NSRange _visibleRange;
    struct CGSize _textBoundingSize;
    struct CGRect _textBoundingRect;
}

+ (id)layoutWithContainers:(id)arg1 text:(id)arg2 range:(struct _NSRange)arg3;
+ (id)layoutWithContainers:(id)arg1 text:(id)arg2;
+ (id)layoutWithContainer:(id)arg1 text:(id)arg2 range:(struct _NSRange)arg3;
+ (id)layoutWithContainer:(id)arg1 text:(id)arg2;
+ (id)layoutWithContainerSize:(struct CGSize)arg1 text:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) CDStruct_c3b9c2ee *lineRowsEdge; // @synthesize lineRowsEdge=_lineRowsEdge;
@property(nonatomic) unsigned long long *lineRowsIndex; // @synthesize lineRowsIndex=_lineRowsIndex;
@property(nonatomic) _Bool needDrawBorder; // @synthesize needDrawBorder=_needDrawBorder;
@property(nonatomic) _Bool needDrawStrikethrough; // @synthesize needDrawStrikethrough=_needDrawStrikethrough;
@property(nonatomic) _Bool needDrawInnerShadow; // @synthesize needDrawInnerShadow=_needDrawInnerShadow;
@property(nonatomic) _Bool needDrawAttachment; // @synthesize needDrawAttachment=_needDrawAttachment;
@property(nonatomic) _Bool needDrawText; // @synthesize needDrawText=_needDrawText;
@property(nonatomic) _Bool needDrawUnderline; // @synthesize needDrawUnderline=_needDrawUnderline;
@property(nonatomic) _Bool needDrawShadow; // @synthesize needDrawShadow=_needDrawShadow;
@property(nonatomic) _Bool needDrawBackgroundBorder; // @synthesize needDrawBackgroundBorder=_needDrawBackgroundBorder;
@property(nonatomic) _Bool needDrawBlockBorder; // @synthesize needDrawBlockBorder=_needDrawBlockBorder;
@property(nonatomic) _Bool containsHighlight; // @synthesize containsHighlight=_containsHighlight;
@property(nonatomic) struct CGSize textBoundingSize; // @synthesize textBoundingSize=_textBoundingSize;
@property(nonatomic) struct CGRect textBoundingRect; // @synthesize textBoundingRect=_textBoundingRect;
@property(nonatomic) struct _NSRange visibleRange; // @synthesize visibleRange=_visibleRange;
@property(nonatomic) unsigned long long rowCount; // @synthesize rowCount=_rowCount;
@property(retain, nonatomic) NSSet *attachmentContentsSet; // @synthesize attachmentContentsSet=_attachmentContentsSet;
@property(retain, nonatomic) NSArray *attachmentRects; // @synthesize attachmentRects=_attachmentRects;
@property(retain, nonatomic) NSArray *attachmentRanges; // @synthesize attachmentRanges=_attachmentRanges;
@property(retain, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) YYTextLine *truncatedLine; // @synthesize truncatedLine=_truncatedLine;
@property(retain, nonatomic) NSArray *lines; // @synthesize lines=_lines;
@property(nonatomic) struct __CTFrame *frame; // @synthesize frame=_frame;
@property(nonatomic) struct __CTFramesetter *frameSetter; // @synthesize frameSetter=_frameSetter;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) NSAttributedString *text; // @synthesize text=_text;
@property(retain, nonatomic) YYTextContainer *container; // @synthesize container=_container;
- (void)removeAttachmentFromViewAndLayer;
- (void)addAttachmentToView:(id)arg1 layer:(id)arg2;
- (void)drawInContext:(struct CGContext *)arg1 size:(struct CGSize)arg2 debug:(id)arg3;
- (void)drawInContext:(struct CGContext *)arg1 size:(struct CGSize)arg2 point:(struct CGPoint)arg3 view:(id)arg4 layer:(id)arg5 debug:(id)arg6 cancel:(CDUnknownBlockType)arg7;
- (id)selectionRectsWithOnlyStartAndEndForRange:(id)arg1;
- (id)selectionRectsWithoutStartAndEndForRange:(id)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (struct CGRect)rectForRange:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGPoint)linePositionForPosition:(id)arg1;
- (unsigned long long)lineIndexForPosition:(id)arg1;
- (id)textRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)textRangeByExtendingPosition:(id)arg1;
- (id)closestTextRangeAtPoint:(struct CGPoint)arg1;
- (id)textRangeAtPoint:(struct CGPoint)arg1;
- (id)positionForPoint:(struct CGPoint)arg1 oldPosition:(id)arg2 otherPosition:(id)arg3;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (unsigned long long)textPositionForPoint:(struct CGPoint)arg1 lineIndex:(unsigned long long)arg2;
- (double)offsetForTextPosition:(unsigned long long)arg1 lineIndex:(unsigned long long)arg2;
- (unsigned long long)closestLineIndexForPoint:(struct CGPoint)arg1;
- (unsigned long long)lineIndexForPoint:(struct CGPoint)arg1;
- (unsigned long long)rowIndexForLine:(unsigned long long)arg1;
- (unsigned long long)lineCountForRow:(unsigned long long)arg1;
- (unsigned long long)lineIndexForRow:(unsigned long long)arg1;
- (id)_correctedRangeWithEdge:(id)arg1;
- (_Bool)_isRightToLeftInLine:(id)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)_insideEmoji:(id)arg1 position:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)_insideComposedCharacterSequences:(id)arg1 position:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (struct __CTRun *)_runForLine:(id)arg1 position:(id)arg2;
- (unsigned long long)_closestRowIndexForEdge:(double)arg1;
- (unsigned long long)_rowIndexForEdge:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)_init;

@end

