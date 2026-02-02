//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EAGLContext, WAEJJavaScriptView;

@interface ExternalTextureHandler : NSObject
{
    struct CFRef<__CVOpenGLESTextureCache *> cacheRef;
    struct CFRef<__CVBuffer *> bufferRef;
    struct CFRef<__CVBuffer *> textureRef;
    struct CFRef<__CVBuffer *> textureRefY;
    struct CFRef<__CVBuffer *> textureRefUV;
    EAGLContext *ctx;
    WAEJJavaScriptView *_scriptView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak WAEJJavaScriptView *scriptView; // @synthesize scriptView=_scriptView;
- (sk_sp_851faaab)makeTextureImage:(struct __CVBuffer *)arg1;
- (_Bool)createYuvTexture:(int)arg1 height:(int)arg2;
- (void)createTextureFromPixelBuffer:(void *)arg1 textureFormat:(int)arg2 sourceFormat:(int)arg3 width:(int)arg4 height:(int)arg5 plane:(int)arg6;
- (void)ensureTextureCacheExists;
- (id)initWithScriptView:(id)arg1;

@end

