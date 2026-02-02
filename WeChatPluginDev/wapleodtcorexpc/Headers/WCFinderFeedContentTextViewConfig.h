//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor, UIFont;

@interface WCFinderFeedContentTextViewConfig : NSObject
{
    _Bool _isForceExpand;
    _Bool _hideExpandButton;
    _Bool _forbidLinkClickAction;
    _Bool _useGradientSuffix;
    NSString *_content;
    NSString *_prefix;
    NSArray *_prefixViewArray;
    NSString *_linkText;
    UIFont *_font;
    UIColor *_linkColor;
    double _width;
    double _lineSpacing;
    double _rightIconPadding;
    unsigned long long _unExpandLineNum;
    NSArray *_suffixViewArr;
    unsigned long long _suffixType;
    unsigned long long _suffixUIStyleType;
    UIColor *_suffixGradientColor;
    double _firstLineOriginX;
}

+ (unsigned long long)getCurSuffixUIStyleTypeIncludeXLabSwitch:(_Bool)arg1;
+ (id)defaultConfig;
- (void).cxx_destruct;
@property(nonatomic) double firstLineOriginX; // @synthesize firstLineOriginX=_firstLineOriginX;
@property(nonatomic) _Bool useGradientSuffix; // @synthesize useGradientSuffix=_useGradientSuffix;
@property(retain, nonatomic) UIColor *suffixGradientColor; // @synthesize suffixGradientColor=_suffixGradientColor;
@property(nonatomic) unsigned long long suffixUIStyleType; // @synthesize suffixUIStyleType=_suffixUIStyleType;
@property(nonatomic) unsigned long long suffixType; // @synthesize suffixType=_suffixType;
@property(retain, nonatomic) NSArray *suffixViewArr; // @synthesize suffixViewArr=_suffixViewArr;
@property(nonatomic) _Bool forbidLinkClickAction; // @synthesize forbidLinkClickAction=_forbidLinkClickAction;
@property(nonatomic) _Bool hideExpandButton; // @synthesize hideExpandButton=_hideExpandButton;
@property(nonatomic) unsigned long long unExpandLineNum; // @synthesize unExpandLineNum=_unExpandLineNum;
@property(nonatomic) _Bool isForceExpand; // @synthesize isForceExpand=_isForceExpand;
@property(nonatomic) double rightIconPadding; // @synthesize rightIconPadding=_rightIconPadding;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *linkText; // @synthesize linkText=_linkText;
@property(retain, nonatomic) NSArray *prefixViewArray; // @synthesize prefixViewArray=_prefixViewArray;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (id)init;

@end

