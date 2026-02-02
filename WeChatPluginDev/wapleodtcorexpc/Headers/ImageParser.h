//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIColor, UIFont;

@interface ImageParser
{
    UIFont *_font;
    NSString *_nsImgSrc;
    NSString *_nsDarkImgSrc;
    UIColor *_imgColor;
    _Bool _customImageProvider;
}

+ (id)newInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool customImageProvider; // @synthesize customImageProvider=_customImageProvider;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (id)imageStyleOfRect:(struct CGRect)arg1 range:(struct _NSRange)arg2;
- (id)getColorWithString:(id)arg1;
- (id)getImageForText:(id)arg1;
- (id)stylesForString:(id)arg1 withRange:(struct _NSRange)arg2 withParserPosition:(struct _NSParserPosition *)arg3;
- (id)styleStringForContent:(id)arg1 withParserPosition:(struct _NSParserPosition)arg2 outputLastPosition:(struct _NSParserPosition *)arg3;
- (id)getImageStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (struct _NSRange)rangeOfObjectInString:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)getImageWithSrc:(id)arg1;
- (id)getImage;
- (void)setImageSrc:(id)arg1;

@end

