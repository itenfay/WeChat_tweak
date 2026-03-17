//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WeVisGLComposeElement : NSObject
{
    struct __CVBuffer *texY;
    struct __CVBuffer *texUV;
    struct __CVOpenGLESTextureCache *cvTextureCache;
    unsigned int _textureY;
    unsigned int _textureUV;
    unsigned int _textureRGBA;
    long long _formatType;
    struct CGSize _inputSize;
    struct CGRect _normalizeFrame;
}

@property(nonatomic) struct CGRect normalizeFrame; // @synthesize normalizeFrame=_normalizeFrame;
@property(nonatomic) struct CGSize inputSize; // @synthesize inputSize=_inputSize;
@property(nonatomic) unsigned int textureRGBA; // @synthesize textureRGBA=_textureRGBA;
@property(nonatomic) unsigned int textureUV; // @synthesize textureUV=_textureUV;
@property(nonatomic) unsigned int textureY; // @synthesize textureY=_textureY;
@property(nonatomic) long long formatType; // @synthesize formatType=_formatType;
- (long long)getElementFormatFromRenderFormat:(long long)arg1;
- (_Bool)getTexYUVFromPixelBuffer:(struct __CVBuffer *)arg1;
- (void)clear;
- (_Bool)isValid;
- (void)transferFromRenderFrame:(id)arg1;
- (void)setSharedCVTexCache:(struct __CVOpenGLESTextureCache *)arg1;
- (void)dealloc;

@end

