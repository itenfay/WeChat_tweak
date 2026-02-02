//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol FlutterTexture;

@interface FlutterDarwinExternalTextureMetal : NSObject
{
    struct __CVMetalTextureCache *_textureCache;
    NSObject<FlutterTexture> *_externalTexture;
    _Bool _textureFrameAvailable;
    sk_sp_5de25408 _externalImage;
    struct __CVBuffer *_lastPixelBuffer;
    unsigned int _pixelFormat;
    _Bool _enableImpeller;
    long long _textureID;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long textureID; // @synthesize textureID=_textureID;
- (sk_sp_5de25408)wrapRGBAExternalPixelBuffer:(struct __CVBuffer *)arg1 context:(struct PaintContext *)arg2;
- (sk_sp_5de25408)wrapNV12ExternalPixelBuffer:(struct __CVBuffer *)arg1 context:(struct PaintContext *)arg2;
- (sk_sp_5de25408)wrapExternalPixelBuffer:(struct __CVBuffer *)arg1 context:(struct PaintContext *)arg2;
- (void)onTextureUnregistered;
- (void)markNewFrameAvailable;
- (void)onGrContextDestroyed;
- (void)onGrContextCreated;
- (void)onNeedsUpdatedTexture:(struct PaintContext *)arg1;
- (void)paintContext:(struct PaintContext *)arg1 bounds:(const struct SkRect *)arg2 freeze:(_Bool)arg3 sampling:(int)arg4;
- (void)dealloc;
- (id)initWithTextureCache:(struct __CVMetalTextureCache *)arg1 textureID:(long long)arg2 texture:(id)arg3 enableImpeller:(_Bool)arg4;

@end

