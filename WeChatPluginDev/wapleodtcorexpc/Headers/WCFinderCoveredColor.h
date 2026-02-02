//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSProxy.h>

@class UIColor;

@interface WCFinderCoveredColor : NSProxy
{
    _Bool _displayBlurWhenCovered;
    _Bool _displayCoveredStyle;
    UIColor *_normalColor;
    UIColor *_coveredColor;
}

+ (_Bool)isDynamicCoveredColor:(id)arg1;
+ (id)colorWithNormal:(id)arg1;
+ (id)colorWithNormal:(id)arg1 coveredBlurColor:(id)arg2;
+ (id)colorWithNormal:(id)arg1 coveredColor:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool displayCoveredStyle; // @synthesize displayCoveredStyle=_displayCoveredStyle;
@property(nonatomic) _Bool displayBlurWhenCovered; // @synthesize displayBlurWhenCovered=_displayBlurWhenCovered;
@property(retain, nonatomic) UIColor *coveredColor; // @synthesize coveredColor=_coveredColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
- (_Bool)isEqual:(id)arg1;
- (struct CGColor *)CGColor;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)resolvedColor;

@end

