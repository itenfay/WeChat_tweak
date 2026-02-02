//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol BaseParserStyleDelegate, TextLayoutDelegate;

@interface BaseParser : NSObject
{
    id <TextLayoutDelegate> _layoutDelegate;
    unsigned long long _parserType;
    id <BaseParserStyleDelegate> _styleDelegate;
    double _lineSpacing;
}

+ (id)sharedInstance;
+ (id)newInstance;
- (void).cxx_destruct;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) __weak id <BaseParserStyleDelegate> styleDelegate; // @synthesize styleDelegate=_styleDelegate;
@property(nonatomic) unsigned long long parserType; // @synthesize parserType=_parserType;
@property(nonatomic) __weak id <TextLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (id)previousParsedStyles;
- (id)attributeStringForContent:(id)arg1;
- (unsigned int)perferedLinkTextVisiableLength;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2;
- (double)getCurrentLineWidthWithCurrentY:(double)arg1 lineIndex:(long long)arg2 lineHeight:(double)arg3;
- (double)getNextLineOriginWithCurrentY:(double)arg1 lineHeight:(double)arg2 withMaxWidth:(double)arg3;
- (id)parseTextForStyles:(id)arg1 withParserPosition:(struct _NSParserPosition *)arg2;
- (void)insertString:(id)arg1 stringRange:(struct _NSRange)arg2 styleRect:(struct CGRect)arg3;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)styleStringForContent:(id)arg1 withParserPosition:(struct _NSParserPosition)arg2 outputLastPosition:(struct _NSParserPosition *)arg3;
- (id)stylesForString:(id)arg1 withRange:(struct _NSRange)arg2 withParserPosition:(struct _NSParserPosition *)arg3;
- (struct _NSRange)rangeOfObjectInString:(id)arg1 withRange:(struct _NSRange)arg2;

@end

