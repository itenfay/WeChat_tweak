//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TXCMetalContext;
@protocol MTLTexture;

@interface TXCMetalPixelBufferUploader : NSObject
{
    id <MTLTexture> _cpuTexturesCache[3];
    TXCMetalContext *_metalContext;
}

+ (id)metalTextureFromP010LEPixelBuffer:(struct __CVBuffer *)arg1 planeIndex:(unsigned long long)arg2 textureCache:(struct __CVMetalTextureCache *)arg3;
+ (id)metalTextureFromNV12PixelBuffer:(struct __CVBuffer *)arg1 planeIndex:(unsigned long long)arg2 textureCache:(struct __CVMetalTextureCache *)arg3;
+ (id)metalTextureFromI420PixelBuffer:(struct __CVBuffer *)arg1 planeIndex:(unsigned long long)arg2 textureCache:(struct __CVMetalTextureCache *)arg3;
+ (id)metalTextureFromRGBPixelBuffer:(struct __CVBuffer *)arg1 textureCache:(struct __CVMetalTextureCache *)arg2;
+ (id)uploadPixelBuffer:(struct __CVBuffer *)arg1 textureCache:(struct __CVMetalTextureCache *)arg2;
+ (_Bool)supportGPUUpload:(struct __CVBuffer *)arg1;
- (void).cxx_destruct;
- (id)uploadPixelBuffer:(struct __CVBuffer *)arg1;
- (id)cpuUploadPixelBuffer:(struct __CVBuffer *)arg1;
- (void)updateTexture:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 withBytes:(const void *)arg4 bytesPerRow:(unsigned long long)arg5 pixelFormat:(unsigned long long)arg6;
- (id)initWithMetalContext:(id)arg1;

@end

