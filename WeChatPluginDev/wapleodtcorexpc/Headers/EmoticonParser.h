//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface EmoticonParser
{
    struct CGSize m_emptySpaceSize;
}

+ (id)newInstance;
- (id)stylesForString:(id)arg1 withRange:(struct _NSRange)arg2 withParserPosition:(struct _NSParserPosition *)arg3;
- (id)styleStringForContent:(id)arg1 withParserPosition:(struct _NSParserPosition)arg2 outputLastPosition:(struct _NSParserPosition *)arg3;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (struct _NSRange)rangeOfObjectInString:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)getImageForText:(id)arg1;
- (id)getImage;

@end

