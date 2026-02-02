//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSBlockOperation, NSMutableData, NSMutableDictionary, NSString, WAEJFileSystem, WAEJSharedTextureCache, WAEJTextureStorage;

@interface WAEJTexture : NSObject
{
    _Bool cached;
    _Bool drawFlippedY;
    _Bool isCompressed;
    _Bool lazyLoaded;
    _Bool dimensionsKnown;
    short width;
    short height;
    NSString *fullPath;
    WAEJTextureStorage *textureStorage;
    unsigned int format;
    unsigned int fbo;
    NSMutableDictionary *params;
    NSBlockOperation *loadCallback;
    WAEJSharedTextureCache *textureCache;
    _Bool readOnly;
    _Bool originPixel;
    struct CGSize resize;
    double rescale;
    WAEJFileSystem *fileSystem;
    _Bool _isExternalTexture;
    _Bool _loadFailedForBackground;
    sk_sp_851faaab _skImage;
}

+ (void)flipPixelsY:(char *)arg1 bytesPerRow:(int)arg2 rows:(int)arg3;
+ (void)unPremultiplyPixels:(const char *)arg1 to:(char *)arg2 byteLength:(int)arg3 format:(unsigned int)arg4 scriptView:(id)arg5;
+ (void)premultiplyPixels:(const char *)arg1 to:(char *)arg2 byteLength:(int)arg3 format:(unsigned int)arg4 scriptView:(id)arg5;
+ (id)imageWithPixelsAndScale:(id)arg1 width:(int)arg2 height:(int)arg3 scale:(float)arg4;
+ (id)imageWithPixels:(id)arg1 width:(int)arg2 height:(int)arg3;
+ (id)cachedTextureWithPath:(id)arg1 loadOnQueue:(id)arg2 callback:(id)arg3 cache:(id)arg4 fileSystem:(id)arg5 glContext:(id)arg6;
+ (id)cachedTextureWithPathDeprecated:(id)arg1 loadOnQueue:(id)arg2 callback:(id)arg3 cache:(id)arg4 fileSystem:(id)arg5 glContext:(id)arg6;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) sk_sp_851faaab skImage; // @synthesize skImage=_skImage;
@property(nonatomic) _Bool loadFailedForBackground; // @synthesize loadFailedForBackground=_loadFailedForBackground;
@property(readonly, nonatomic) _Bool isExternalTexture; // @synthesize isExternalTexture=_isExternalTexture;
@property(nonatomic) double rescale; // @synthesize rescale;
@property(nonatomic) struct CGSize resize; // @synthesize resize;
@property(nonatomic) _Bool originPixel; // @synthesize originPixel;
@property(readonly, nonatomic) _Bool readOnly; // @synthesize readOnly;
@property(retain, nonatomic) WAEJSharedTextureCache *textureCache; // @synthesize textureCache;
@property(readonly, nonatomic) _Bool lazyLoaded; // @synthesize lazyLoaded;
@property(nonatomic) _Bool drawFlippedY; // @synthesize drawFlippedY;
@property(readonly, nonatomic) unsigned int format; // @synthesize format;
- (id)image;
- (void)changeGLTexture:(unsigned int)arg1 target:(unsigned int)arg2;
- (void)bindToTarget:(unsigned int)arg1;
- (void)bindWithFilter:(unsigned int)arg1;
- (void)setParam:(unsigned int)arg1 param:(id)arg2;
- (id)getParam:(unsigned int)arg1;
- (id)loadPixelsFromUIImage:(id)arg1;
- (id)loadPixelsFromPath:(id)arg1;
- (id)loadOriginPixel:(id)arg1 data:(id)arg2;
@property(readonly, nonatomic) NSMutableData *pixels;
- (void)updateWithPixels:(id)arg1 atX:(int)arg2 y:(int)arg3 width:(int)arg4 height:(int)arg5;
- (void)uploadCompressedPixels:(id)arg1 target:(unsigned int)arg2;
- (void)createWithPixels:(id)arg1 format:(unsigned int)arg2 target:(unsigned int)arg3;
- (void)createWithPixels:(id)arg1 format:(unsigned int)arg2;
- (void)createWhenCallbackLoaded:(id)arg1;
- (void)onCallback:(id)arg1;
- (void)createWithTexture:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) short height;
@property(readonly, nonatomic) short width;
@property(readonly, nonatomic) _Bool isDynamic;
@property(readonly, nonatomic) unsigned int textureId;
@property(readonly, nonatomic) double lastUsed;
- (void)ensureMutableKeepPixels:(_Bool)arg1 forTarget:(unsigned int)arg2;
- (void)maybeReleaseStorage;
- (void)dealloc;
- (id)initWithSkImage:(sk_sp_851faaab)arg1;
- (id)initWithUIImage:(id)arg1;
- (id)initAsRenderTargetWithWidth:(int)arg1 height:(int)arg2 fbo:(unsigned int)arg3;
- (id)initWithWidth:(int)arg1 height:(int)arg2 pixels:(id)arg3;
- (id)initWithWidth:(int)arg1 height:(int)arg2 format:(unsigned int)arg3;
- (id)initWithWidth:(int)arg1 height:(int)arg2;
- (id)initWithPath:(id)arg1 loadOnQueue:(id)arg2 callback:(id)arg3 fileSystem:(id)arg4 glContext:(id)arg5;
- (id)initWithPathDeprecated:(id)arg1 loadOnQueue:(id)arg2 callback:(id)arg3 fileSystem:(id)arg4 glContext:(id)arg5;
- (id)initWithPath:(id)arg1;
- (id)init;

@end

