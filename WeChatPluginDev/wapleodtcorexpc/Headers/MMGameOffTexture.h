//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EAGLContext, OTStatusHolder, OTTextureHolder, OTTextureProgram;

@interface MMGameOffTexture : NSObject
{
    struct __CVOpenGLESTextureCache *_textureCache;
    _Bool _textureCacheAvailable;
    unsigned int _frameBuffer;
    OTStatusHolder *_status;
    EAGLContext *_context;
    OTTextureHolder *_flipTexture;
    OTTextureProgram *_program;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OTTextureProgram *program; // @synthesize program=_program;
@property(retain, nonatomic) OTTextureHolder *flipTexture; // @synthesize flipTexture=_flipTexture;
@property(nonatomic) unsigned int frameBuffer; // @synthesize frameBuffer=_frameBuffer;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
@property(retain, nonatomic) OTStatusHolder *status; // @synthesize status=_status;
- (struct __CVBuffer *)draw:(void *)arg1 size:(unsigned int)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4;
- (void)tryUint;
- (void)tryInit;
- (void)dealloc;
- (id)init;

@end

