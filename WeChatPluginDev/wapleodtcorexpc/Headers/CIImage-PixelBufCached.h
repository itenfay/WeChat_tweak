//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <CoreImage/CIImage.h>

@interface CIImage (PixelBufCached)
+ (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2;
- (struct __CVBuffer *)getRGBPixelBufCached;
- (struct __CVBuffer *)tav_copyCurrentPixelBuffer;
- (struct __CVBuffer *)tav_renderNewPixelBufferWithSize:(struct CGSize)arg1;
- (struct __CVBuffer *)tav_copyPixelBufferWithRenderSize:(struct CGSize)arg1;
- (struct __CVBuffer *)tav_copyPixelBuffer;
- (id)safeApplyTransform:(struct CGAffineTransform)arg1;
- (id)applyAlpha:(double)arg1;
- (id)flipYCoordinate;
- (id)wc_imageByCroppingToAspectRatio:(double)arg1;
- (void)toMetalTexture:(struct __CVBuffer **)arg1 ciContext:(id)arg2 cache:(struct __CVMetalTextureCache *)arg3;
- (struct __CVBuffer *)videoCompositinRenderNewPixelBufferWithSize:(struct CGSize)arg1 ciContext:(id)arg2;
- (struct __CVBuffer *)videoCompositionCopyImagePixelBuffer:(id)arg1;
- (struct __CVBuffer *)videoCompositionCopyCurrentPixelBuffer;
@end

