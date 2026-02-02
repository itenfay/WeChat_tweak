//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCCustomImgParser
{
}

+ (id)newInstance;
- (_Bool)isNetworkImage;
- (id)getImageForText:(id)arg1;
- (id)stylesForString:(id)arg1 withRange:(struct _NSRange)arg2 withParserPosition:(struct _NSParserPosition *)arg3;
- (id)styleStringForContent:(id)arg1 withParserPosition:(struct _NSParserPosition)arg2 outputLastPosition:(struct _NSParserPosition *)arg3;
- (id)getImageStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (struct _NSRange)rangeOfObjectInString:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)getSvgImage:(id)arg1 size:(struct CGSize)arg2;
- (id)getImageWithSize:(struct CGSize)arg1;
- (id)getImage;
- (void)setImageSrc:(id)arg1;

@end

