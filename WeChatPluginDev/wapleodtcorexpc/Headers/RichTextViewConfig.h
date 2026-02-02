//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont;
@protocol RichTextLayoutDelegate;

@interface RichTextViewConfig : NSObject
{
    _Bool _useRedesignLinespacing;
    _Bool _lineBreakByClipping;
    unsigned int _linkTextVisiableLength;
    NSString *_prefixContent;
    NSString *_content;
    NSString *_parserString;
    NSString *_suffixContent;
    UIFont *_font;
    double _fWidth;
    double _lineSpacing;
    unsigned long long _lineNumber;
    unsigned long long _parserType;
    id <RichTextLayoutDelegate> _layoutDelegate;
    double _originX;
    UIColor *_linkColor;
    UIColor *_linkHighlightColor;
    double _rightIconPadding;
    NSString *_truncatedTrailingLinkText;
    NSString *_truncatedTrailingLinkUrl;
    UIColor *_truncatedTrailingLinkColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *truncatedTrailingLinkColor; // @synthesize truncatedTrailingLinkColor=_truncatedTrailingLinkColor;
@property(retain, nonatomic) NSString *truncatedTrailingLinkUrl; // @synthesize truncatedTrailingLinkUrl=_truncatedTrailingLinkUrl;
@property(retain, nonatomic) NSString *truncatedTrailingLinkText; // @synthesize truncatedTrailingLinkText=_truncatedTrailingLinkText;
@property(nonatomic) _Bool lineBreakByClipping; // @synthesize lineBreakByClipping=_lineBreakByClipping;
@property(nonatomic) _Bool useRedesignLinespacing; // @synthesize useRedesignLinespacing=_useRedesignLinespacing;
@property(nonatomic) double rightIconPadding; // @synthesize rightIconPadding=_rightIconPadding;
@property(retain, nonatomic) UIColor *linkHighlightColor; // @synthesize linkHighlightColor=_linkHighlightColor;
@property(retain, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(nonatomic) double originX; // @synthesize originX=_originX;
@property(nonatomic) __weak id <RichTextLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) unsigned long long parserType; // @synthesize parserType=_parserType;
@property(nonatomic) unsigned int linkTextVisiableLength; // @synthesize linkTextVisiableLength=_linkTextVisiableLength;
@property(nonatomic) unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) double fWidth; // @synthesize fWidth=_fWidth;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSString *suffixContent; // @synthesize suffixContent=_suffixContent;
@property(retain, nonatomic) NSString *parserString; // @synthesize parserString=_parserString;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *prefixContent; // @synthesize prefixContent=_prefixContent;

@end

