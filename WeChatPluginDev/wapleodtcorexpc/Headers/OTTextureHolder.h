//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface OTTextureHolder : NSObject
{
    _Bool _create;
    _Bool _boud;
    int _frameBuffer;
    int _renderBuffer;
    int _pixelWidth;
    int _pixelHeight;
    int _viewWidth;
    int _viewHeight;
    unsigned int _textureId;
    struct __CVBuffer *_pixeTexture;
    struct __CVBuffer *_pixelBuffer;
    _Bool ready;
    NSMutableData *nsData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property(readonly, nonatomic) unsigned int textureId; // @synthesize textureId=_textureId;
@property(readonly, nonatomic) int height; // @synthesize height=_pixelHeight;
@property(readonly, nonatomic) int width; // @synthesize width=_pixelWidth;
@property(readonly, nonatomic) int renderBuffer; // @synthesize renderBuffer=_renderBuffer;
@property(readonly, nonatomic) int frameBuffer; // @synthesize frameBuffer=_frameBuffer;
- (void)active;
- (void)bind;
- (_Bool)create:(struct __CVOpenGLESTextureCache *)arg1;
- (void)resize:(int)arg1 height:(int)arg2;
@property(readonly, nonatomic) NSMutableData *nsData; // @synthesize nsData;
@property(readonly, nonatomic) _Bool ready; // @synthesize ready;
- (void)dealloc;

@end

