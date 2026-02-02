//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface YYTextDebugOption : NSObject
{
    UIColor *_baselineColor;
    UIColor *_CTFrameBorderColor;
    UIColor *_CTFrameFillColor;
    UIColor *_CTLineBorderColor;
    UIColor *_CTLineFillColor;
    UIColor *_CTLineNumberColor;
    UIColor *_CTRunBorderColor;
    UIColor *_CTRunFillColor;
    UIColor *_CTRunNumberColor;
    UIColor *_CGGlyphBorderColor;
    UIColor *_CGGlyphFillColor;
}

+ (void)setSharedDebugOption:(id)arg1;
+ (id)sharedDebugOption;
+ (void)removeDebugTarget:(id)arg1;
+ (void)addDebugTarget:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *CGGlyphFillColor; // @synthesize CGGlyphFillColor=_CGGlyphFillColor;
@property(retain, nonatomic) UIColor *CGGlyphBorderColor; // @synthesize CGGlyphBorderColor=_CGGlyphBorderColor;
@property(retain, nonatomic) UIColor *CTRunNumberColor; // @synthesize CTRunNumberColor=_CTRunNumberColor;
@property(retain, nonatomic) UIColor *CTRunFillColor; // @synthesize CTRunFillColor=_CTRunFillColor;
@property(retain, nonatomic) UIColor *CTRunBorderColor; // @synthesize CTRunBorderColor=_CTRunBorderColor;
@property(retain, nonatomic) UIColor *CTLineNumberColor; // @synthesize CTLineNumberColor=_CTLineNumberColor;
@property(retain, nonatomic) UIColor *CTLineFillColor; // @synthesize CTLineFillColor=_CTLineFillColor;
@property(retain, nonatomic) UIColor *CTLineBorderColor; // @synthesize CTLineBorderColor=_CTLineBorderColor;
@property(retain, nonatomic) UIColor *CTFrameFillColor; // @synthesize CTFrameFillColor=_CTFrameFillColor;
@property(retain, nonatomic) UIColor *CTFrameBorderColor; // @synthesize CTFrameBorderColor=_CTFrameBorderColor;
@property(retain, nonatomic) UIColor *baselineColor; // @synthesize baselineColor=_baselineColor;
- (void)clear;
- (_Bool)needDrawDebug;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

