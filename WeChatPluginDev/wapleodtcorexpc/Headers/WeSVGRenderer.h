//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WeSVGRenderer : NSObject
{
    shared_ptr_fa695132 _model;
    struct RenderOptions _options;
}

+ (struct CGPath *)createPathFromPath:(const void *)arg1;
+ (struct CGPath *)createPathFromShape:(const void *)arg1;
+ (void)performContainerOpacity:(double)arg1 context:(struct CGContext *)arg2 handler:(CDUnknownBlockType)arg3;
+ (struct CGGradient *)createGradientFromGradient:(const void *)arg1 context:(struct CGContext *)arg2 providedColor:(optional_91f618e0)arg3;
+ (struct CGColor *)createColorFromRGBAColor:(const struct RGBAColor *)arg1;
+ (struct CGColor *)createColorFromRGBColor:(const RGBColor_87c90449 *)arg1 opacity:(double)arg2;
+ (struct CGImage *)createImageWithSize:(struct CGSize)arg1 transform:(struct CGAffineTransform)arg2 type:(long long)arg3 actions:(CDUnknownBlockType)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)performMask:(optional_9436b898)arg1 transform:(struct CGAffineTransform)arg2 context:(struct CGContext *)arg3 handler:(CDUnknownBlockType)arg4;
- (void)performGradient:(const void *)arg1 forPath:(struct CGPath *)arg2 context:(struct CGContext *)arg3 isEvenOdd:(_Bool)arg4;
- (void)drawGraphics:(const void *)arg1 context:(struct CGContext *)arg2;
- (void)drawContainer:(const void *)arg1 context:(struct CGContext *)arg2;
- (void)handleNode:(shared_ptr_3de03f82)arg1 context:(struct CGContext *)arg2;
- (struct CGImage *)createMaskImageWithTransform:(struct CGAffineTransform)arg1 actions:(CDUnknownBlockType)arg2;
- (struct CGImage *)createImageWithActions:(CDUnknownBlockType)arg1;
- (struct CGAffineTransform)contextBaseTransform;
- (id)renderImage;
- (id)initWithRenderModel:(shared_ptr_fa695132)arg1 options:(void *)arg2;

@end

