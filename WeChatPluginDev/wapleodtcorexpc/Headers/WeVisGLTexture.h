//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WeVisGLTexture : NSObject
{
    _Bool mOwnTextureId;
    unsigned int _textureId;
    struct __CVBuffer *_texture;
    struct CGSize _texSize;
}

@property(nonatomic) struct CGSize texSize; // @synthesize texSize=_texSize;
@property(nonatomic) unsigned int textureId; // @synthesize textureId=_textureId;
@property(nonatomic) struct __CVBuffer *texture; // @synthesize texture=_texture;
- (void)dealloc;
- (id)initWithTarget:(unsigned int)arg1 width:(int)arg2 height:(int)arg3 internalFormat:(int)arg4 format:(unsigned int)arg5 type:(unsigned int)arg6 data:(const void *)arg7 ownTexture:(_Bool)arg8;
- (id)initWithTarget:(unsigned int)arg1 width:(int)arg2 height:(int)arg3 internalFormat:(int)arg4 format:(unsigned int)arg5 type:(unsigned int)arg6 data:(const void *)arg7;
- (id)initWithTextureRef:(struct __CVBuffer *)arg1 ownTextureId:(_Bool)arg2;

@end

