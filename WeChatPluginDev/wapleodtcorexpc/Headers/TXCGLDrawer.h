//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TXCGlProgram, TXCVideoFrameCoords;
@protocol TXIGlContext;

@interface TXCGLDrawer : NSObject
{
    struct vector<unsigned char, std::allocator<unsigned char>> _planeBuffer;
    unsigned int _positionAttr;
    unsigned int _textureCordAttr;
    id <TXIGlContext> _context;
    TXCVideoFrameCoords *_coords;
    TXCGlProgram *_program;
    long long _textureWidth;
    long long _textureHeight;
}

+ (id)createDrawerWithType:(unsigned long long)arg1 context:(id)arg2 coords:(id)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) long long textureHeight; // @synthesize textureHeight=_textureHeight;
@property(nonatomic) long long textureWidth; // @synthesize textureWidth=_textureWidth;
@property(nonatomic) unsigned int textureCordAttr; // @synthesize textureCordAttr=_textureCordAttr;
@property(nonatomic) unsigned int positionAttr; // @synthesize positionAttr=_positionAttr;
@property(retain, nonatomic) TXCGlProgram *program; // @synthesize program=_program;
@property(readonly, nonatomic) TXCVideoFrameCoords *coords; // @synthesize coords=_coords;
@property(readonly, nonatomic) id <TXIGlContext> context; // @synthesize context=_context;
- (void)texImageUploadTexture:(unsigned int)arg1 textureTarget:(unsigned int)arg2 pixelBuffer:(struct __CVBuffer *)arg3 planeIndex:(int)arg4 pixelFormat:(unsigned int)arg5;
- (_Bool)textureCacheUploadTexture:(struct __CVBuffer **)arg1 pixelBuffer:(struct __CVBuffer *)arg2 planeIndex:(int)arg3 pixelFormat:(unsigned int)arg4;
- (void)setupCoordsAndDraw;
- (unsigned int)createTexture:(unsigned int)arg1;
- (void)draw;
- (_Bool)drawTexture:(unsigned int)arg1 width:(double)arg2 height:(double)arg3;
- (_Bool)drawPixelBuffer:(struct __CVBuffer *)arg1;
- (struct CGSize)getTextureSize;
- (unsigned long long)getType;
- (id)initWithContext:(id)arg1 coords:(id)arg2;

@end

