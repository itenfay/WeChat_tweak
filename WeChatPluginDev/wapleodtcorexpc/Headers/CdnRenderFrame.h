//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTextureBuffer;

@interface CdnRenderFrame : NSObject
{
    int _texture;
    int _maskTexture;
    struct __CVBuffer *_pixelBuffer;
    char *_texBuff;
    MMLiveTextureBuffer *_maskTexBuffer;
    struct CGSize _textureSize;
    struct CGSize _maskTextureSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize maskTextureSize; // @synthesize maskTextureSize=_maskTextureSize;
@property(retain, nonatomic) MMLiveTextureBuffer *maskTexBuffer; // @synthesize maskTexBuffer=_maskTexBuffer;
@property(nonatomic) int maskTexture; // @synthesize maskTexture=_maskTexture;
@property(nonatomic) struct CGSize textureSize; // @synthesize textureSize=_textureSize;
@property(nonatomic) int texture; // @synthesize texture=_texture;
@property(nonatomic) char *texBuff; // @synthesize texBuff=_texBuff;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;

@end

