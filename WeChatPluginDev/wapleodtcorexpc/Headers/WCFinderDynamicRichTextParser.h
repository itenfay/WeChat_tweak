//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCFinderDynamicRichTextParser : NSObject
{
    NSString *_richText;
    NSMutableArray *_items;
}

+ (id)parserWithRichText:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *richText; // @synthesize richText=_richText;
- (id)createRichTextContentWithColor:(id)arg1 iconSize:(struct CGSize)arg2;
- (id)createAttributedStringWith:(id)arg1 color:(id)arg2 iconSize:(struct CGSize)arg3 iconPadding:(struct CGSize)arg4 textAlignment:(long long)arg5 delegate:(id)arg6;
- (id)parseCustomLinkItem:(struct XmlReaderNode_t *)arg1;
- (void)parse;

@end

