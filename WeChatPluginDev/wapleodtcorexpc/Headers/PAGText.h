//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface PAGText : NSObject
{
    _Bool applyFill;
    _Bool applyStroke;
    _Bool boxText;
    _Bool fauxBold;
    _Bool fauxItalic;
    _Bool strokeOverFill;
    unsigned char justification;
    float baselineShift;
    float fontSize;
    float strokeWidth;
    float leading;
    float tracking;
    int backgroundAlpha;
    float _firstBaseLine;
    UIColor *fillColor;
    NSString *fontFamily;
    NSString *fontStyle;
    UIColor *strokeColor;
    NSString *text;
    UIColor *backgroundColor;
    struct CGRect boxTextRect;
}

@property(nonatomic) float firstBaseLine; // @synthesize firstBaseLine=_firstBaseLine;
@property(nonatomic) int backgroundAlpha; // @synthesize backgroundAlpha;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor;
@property(nonatomic) float tracking; // @synthesize tracking;
@property(nonatomic) float leading; // @synthesize leading;
@property(nonatomic) unsigned char justification; // @synthesize justification;
@property(copy, nonatomic) NSString *text; // @synthesize text;
@property(nonatomic) float strokeWidth; // @synthesize strokeWidth;
@property(nonatomic) _Bool strokeOverFill; // @synthesize strokeOverFill;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor;
@property(nonatomic) float fontSize; // @synthesize fontSize;
@property(copy, nonatomic) NSString *fontStyle; // @synthesize fontStyle;
@property(copy, nonatomic) NSString *fontFamily; // @synthesize fontFamily;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor;
@property(nonatomic) _Bool fauxItalic; // @synthesize fauxItalic;
@property(nonatomic) _Bool fauxBold; // @synthesize fauxBold;
@property(nonatomic) struct CGRect boxTextRect; // @synthesize boxTextRect;
@property(nonatomic) _Bool boxText; // @synthesize boxText;
@property(nonatomic) float baselineShift; // @synthesize baselineShift;
@property(nonatomic) _Bool applyStroke; // @synthesize applyStroke;
@property(nonatomic) _Bool applyFill; // @synthesize applyFill;
- (void)dealloc;

@end

