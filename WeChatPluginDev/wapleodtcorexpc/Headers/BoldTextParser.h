//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface BoldTextParser
{
}

+ (id)newInstance;
- (id)parseContent:(id)arg1;
- (id)attributeStringForContent:(id)arg1;
- (id)stylesForString:(id)arg1 withRange:(struct _NSRange)arg2 withParserPosition:(struct _NSParserPosition *)arg3;
- (id)styleStringForContent:(id)arg1 withParserPosition:(struct _NSParserPosition)arg2 outputLastPosition:(struct _NSParserPosition *)arg3;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)getStyle;
- (struct _NSRange)rangeOfObjectInString:(id)arg1 withRange:(struct _NSRange)arg2;

@end

