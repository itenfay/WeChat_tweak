//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface WCFinderPageControlStyleConfig : NSObject
{
    double _dotSize;
    UIColor *_dotNormalColor;
    UIColor *_dotHighlightColor;
    double _dotsHorizontalPadding;
    double _dotsVerticalPadding;
    UIColor *_dotNormalShadowColor;
    UIColor *_dotHighlightShadowColor;
    double _dotShadowRadius;
    struct CGSize _dotShadowOffset;
}

+ (id)defaultConfig;
- (void).cxx_destruct;
@property(nonatomic) double dotShadowRadius; // @synthesize dotShadowRadius=_dotShadowRadius;
@property(nonatomic) struct CGSize dotShadowOffset; // @synthesize dotShadowOffset=_dotShadowOffset;
@property(retain, nonatomic) UIColor *dotHighlightShadowColor; // @synthesize dotHighlightShadowColor=_dotHighlightShadowColor;
@property(retain, nonatomic) UIColor *dotNormalShadowColor; // @synthesize dotNormalShadowColor=_dotNormalShadowColor;
@property(nonatomic) double dotsVerticalPadding; // @synthesize dotsVerticalPadding=_dotsVerticalPadding;
@property(nonatomic) double dotsHorizontalPadding; // @synthesize dotsHorizontalPadding=_dotsHorizontalPadding;
@property(retain, nonatomic) UIColor *dotHighlightColor; // @synthesize dotHighlightColor=_dotHighlightColor;
@property(retain, nonatomic) UIColor *dotNormalColor; // @synthesize dotNormalColor=_dotNormalColor;
@property(nonatomic) double dotSize; // @synthesize dotSize=_dotSize;

@end

