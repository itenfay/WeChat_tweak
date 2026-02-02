//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol MTLTexture;

@interface VoIPCanvasBuffer : NSObject
{
    struct __CVBuffer *_pixelBuffer;
    struct __CVBuffer *_metalTexture;
    unsigned long long _width;
    unsigned long long _height;
    id <MTLTexture> _texture;
}

+ (id)bufferByMetalTextureCache:(struct __CVMetalTextureCache *)arg1 withWidth:(unsigned long long)arg2 height:(unsigned long long)arg3 pixelFormat:(unsigned long long)arg4;
+ (struct __CVBuffer *)createMetalTextureFromPixelBuffer:(struct __CVBuffer *)arg1 withMetalTextureCache:(struct __CVMetalTextureCache *)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 pixelFormat:(unsigned long long)arg5;
+ (struct __CVBuffer *)createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id <MTLTexture> texture; // @synthesize texture=_texture;
@property(nonatomic) unsigned long long height; // @synthesize height=_height;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 metalTexture:(struct __CVBuffer *)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (struct __CVBuffer *)metalTexture;
- (struct __CVBuffer *)pixelBuffer;

@end

