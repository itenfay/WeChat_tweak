//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLivePixelBuffer, NSString, XImage;

@interface MMLiveRemoteTrtcRenderContext : NSObject
{
    _Bool _isFirstFrameRendered;
    _Bool _isFirstFrameFromCapture;
    int _texture;
    NSString *_userId;
    NSString *_userName;
    unsigned long long _renderSrc;
    MMLivePixelBuffer *_pixelBuffer;
    XImage *_texImage;
    struct CGSize _textureSize;
    struct CGRect _normalizeFrame;
}

- (void).cxx_destruct;
@property _Bool isFirstFrameFromCapture; // @synthesize isFirstFrameFromCapture=_isFirstFrameFromCapture;
@property _Bool isFirstFrameRendered; // @synthesize isFirstFrameRendered=_isFirstFrameRendered;
@property struct CGRect normalizeFrame; // @synthesize normalizeFrame=_normalizeFrame;
@property(retain) XImage *texImage; // @synthesize texImage=_texImage;
@property struct CGSize textureSize; // @synthesize textureSize=_textureSize;
@property int texture; // @synthesize texture=_texture;
@property(retain) MMLivePixelBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property unsigned long long renderSrc; // @synthesize renderSrc=_renderSrc;
@property(retain) NSString *userName; // @synthesize userName=_userName;
@property(retain) NSString *userId; // @synthesize userId=_userId;
- (id)normalizeFrameDescription;
- (id)description;
- (void)extractTexImage:(id *)arg1 textureSize:(struct CGSize *)arg2;
- (void)updateTexImage:(id)arg1 textureSize:(struct CGSize)arg2;
- (void)extractTexture:(int *)arg1 textureSize:(struct CGSize *)arg2;
- (void)updateTexture:(int)arg1 textureSize:(struct CGSize)arg2;
- (_Bool)isValid;

@end

