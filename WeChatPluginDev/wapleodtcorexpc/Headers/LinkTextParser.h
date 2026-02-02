//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface LinkTextParser
{
    NSString *_url;
    NSString *_sourceUrl;
    _Bool _shouldParseWeAppMPShortLink;
    _Bool _shouldParseWeAppTagLink;
}

+ (id)newInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldParseWeAppTagLink; // @synthesize shouldParseWeAppTagLink=_shouldParseWeAppTagLink;
@property(nonatomic) _Bool shouldParseWeAppMPShortLink; // @synthesize shouldParseWeAppMPShortLink=_shouldParseWeAppMPShortLink;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)limitLinkTextContentIfNeeded:(id)arg1;
- (id)getStyle;
- (id)attributeStringForContent:(id)arg1;
- (id)stylesForString:(id)arg1 withRange:(struct _NSRange)arg2 withParserPosition:(struct _NSParserPosition *)arg3;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (struct _NSRange)rangeOfObjectInString:(id)arg1 withRange:(struct _NSRange)arg2;
- (_Bool)useWordWrapping;

@end

