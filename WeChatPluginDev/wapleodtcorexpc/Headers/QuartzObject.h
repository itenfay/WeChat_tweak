//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol IMMQuartz2DContextDelegate;

@interface QuartzObject : NSObject
{
    NSArray *_data;
    NSString *_action;
    id <IMMQuartz2DContextDelegate> _contextDelegate;
}

+ (id)getFontWithSize:(unsigned int)arg1 family:(id)arg2 weight:(id)arg3 style:(id)arg4;
+ (void)reset;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IMMQuartz2DContextDelegate> contextDelegate; // @synthesize contextDelegate=_contextDelegate;
- (struct CGAffineTransform)getTransform;
- (void)addTransform:(struct CGAffineTransform)arg1;
- (void)setGlobalCompositeOperation:(struct CGContext *)arg1;
- (void)setLineDash:(struct CGContext *)arg1;
- (void)setMiterLimit:(struct CGContext *)arg1;
- (void)setLineWidth:(struct CGContext *)arg1;
- (void)setLineJoin:(struct CGContext *)arg1;
- (void)setLineCap:(struct CGContext *)arg1;
- (struct CGPattern *)newPatternWithData:(id)arg1;
- (void)setPatternStyle:(struct CGContext *)arg1 data:(id)arg2 isFill:(_Bool)arg3;
- (void)setStrokeStyle:(struct CGContext *)arg1;
- (void)setFillStyle:(struct CGContext *)arg1;
- (void)restore:(struct CGContext *)arg1;
- (void)save:(struct CGContext *)arg1;
- (void)setGlobalAlpha:(struct CGContext *)arg1;
- (void)drawImageData:(struct CGContext *)arg1;
- (void)drawImage:(struct CGContext *)arg1;
- (void)drawText:(struct CGContext *)arg1 isStroke:(_Bool)arg2;
- (void)strokeText:(struct CGContext *)arg1;
- (void)fillText:(struct CGContext *)arg1;
- (void)setTextBaseline:(struct CGContext *)arg1;
- (void)setTextAlign:(struct CGContext *)arg1;
- (id)getFontWithContext;
- (void)setFontFamily:(struct CGContext *)arg1;
- (void)setFontWeight:(struct CGContext *)arg1;
- (void)setFontStyle:(struct CGContext *)arg1;
- (void)setFontSize:(struct CGContext *)arg1;
- (void)setTransform:(struct CGContext *)arg1;
- (void)transform:(struct CGContext *)arg1;
- (void)translate:(struct CGContext *)arg1;
- (void)rotate:(struct CGContext *)arg1;
- (void)scale:(struct CGContext *)arg1;
- (void)clearRect:(struct CGContext *)arg1;
- (void)setShadow:(struct CGContext *)arg1;
- (void)Execute:(struct CGContext *)arg1;
- (id)initWithAction:(id)arg1 data:(id)arg2;

@end

