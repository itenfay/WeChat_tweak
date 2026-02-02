//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LinkWeAppJumpWrap, NSString, UIColor;

@interface LinkAnchorParser
{
    NSString *_url;
    NSString *_sourceUrl;
    UIColor *_highlightedColor;
    _Bool _bBackgroundEnabled;
    unsigned long long _jumpType;
    LinkWeAppJumpWrap *_weappJumpWrap;
    _Bool _isNativeWeApp;
}

+ (id)stringByStrippingHref:(id)arg1;
+ (id)newInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)openWeAppLogoCustomImageContent;
- (id)getCustomImgParser;
- (_Bool)isJumpWeApp;
- (id)getPrefixStylesWithStyleString:(id)arg1;
- (id)prefixStyleStringWithParserPosition:(struct _NSParserPosition)arg1 outputLastPosition:(struct _NSParserPosition *)arg2;
- (id)getPrefixStylesWithParserPosition:(struct _NSParserPosition *)arg1;
- (id)attributeStringForContent:(id)arg1;
- (id)getStyle;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)styleStringForContent:(id)arg1 withParserPosition:(struct _NSParserPosition)arg2 outputLastPosition:(struct _NSParserPosition *)arg3;
- (id)stylesForString:(id)arg1 withRange:(struct _NSRange)arg2 withParserPosition:(struct _NSParserPosition *)arg3;
- (struct _NSRange)rangeOfObjectInString:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)init;

@end

