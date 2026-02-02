//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TXCVideoUtils : NSObject
{
}

+ (void)copyI420Bytes:(const char **)arg1 size:(const int *)arg2 toI420PixelBuffer:(struct __CVBuffer *)arg3;
+ (void)copyYuv420P10leBytes:(const char **)arg1 size:(const int *)arg2 toP010eBuffer:(struct __CVBuffer *)arg3;
+ (void)copyPixelBuffer:(struct __CVBuffer *)arg1 toSamePixelBuffer:(struct __CVBuffer *)arg2;
+ (void)copyNv12Buffer:(struct __CVBuffer *)arg1 toI420Buffer:(struct __CVBuffer *)arg2;
+ (void)copyI420Buffer:(struct __CVBuffer *)arg1 toNv12Buffer:(struct __CVBuffer *)arg2;
+ (void)copyBgraBuffer:(struct __CVBuffer *)arg1 toI420Buffer:(struct __CVBuffer *)arg2;
+ (void)copyBgraBuffer:(struct __CVBuffer *)arg1 toNv12Buffer:(struct __CVBuffer *)arg2;
+ (void)copyNv12Buffer:(struct __CVBuffer *)arg1 toBgraBuffer:(struct __CVBuffer *)arg2;
+ (unsigned int)osTypeOfVideoFormat:(unsigned long long)arg1;
+ (unsigned long long)bytesOfFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
+ (struct CGSize)sizeOfPixelBuffer:(struct __CVBuffer *)arg1;
+ (_Bool)isFormat:(unsigned long long)arg1 sameTo:(unsigned long long)arg2;
+ (_Bool)isI420:(unsigned long long)arg1;
+ (_Bool)isP010le:(unsigned long long)arg1;
+ (_Bool)isNv12:(unsigned long long)arg1;
+ (unsigned long long)formatOfPixelBuffer:(struct __CVBuffer *)arg1;
+ (struct __CVBuffer *)retainImageSupportedBuffer:(struct __CVBuffer *)arg1;
+ (struct __CVBuffer *)pixelBufferFromImage:(struct CGImage *)arg1;
+ (id)imageFromPixelBuffer:(struct __CVBuffer *)arg1;
+ (void)copyPixelBuffer:(struct __CVBuffer *)arg1 atPlane:(long long)arg2 toData:(char *)arg3;
+ (void)copyPixelBuffer:(struct __CVBuffer *)arg1 toPixelBuffer:(struct __CVBuffer *)arg2;
+ (struct __CVBuffer *)createPixelBufferFromPool:(struct __CVPixelBufferPool *)arg1;
+ (struct __CVPixelBufferPool *)createPixelBufferPoolWithFormat:(unsigned long long)arg1 bufferSize:(struct CGSize)arg2;
+ (struct __CVPixelBufferPool *)createPixelBufferPoolWithFormat:(unsigned long long)arg1 bufferSize:(struct CGSize)arg2 attribules:(id)arg3;
+ (struct __CVBuffer *)createPixelBufferWithFormat:(unsigned long long)arg1 bufferSize:(struct CGSize)arg2;
+ (struct opaqueCMSampleBuffer *)createSampleBufferFromPixelBuffer:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2;
+ (id)transferSession;
+ (id)context;

@end

