//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WeAppMPShortLinkParser
{
    NSString *_nsUrl;
    NSString *_nsSourceUrl;
}

+ (id)newInstance;
- (void).cxx_destruct;
- (id)getStyle;
- (id)attributeStringForContent:(id)arg1;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)stylesForString:(id)arg1 withRange:(struct _NSRange)arg2 withParserPosition:(struct _NSParserPosition *)arg3;
- (struct _NSRange)rangeOfObjectInString:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)init;

@end

