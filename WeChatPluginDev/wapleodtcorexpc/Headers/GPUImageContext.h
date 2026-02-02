//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EAGLContext, EAGLSharegroup, GLProgram, GPUImageFramebufferCache, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GPUImageContext : NSObject
{
    NSMutableDictionary *shaderProgramCache;
    NSMutableArray *shaderProgramUsageHistory;
    EAGLSharegroup *_sharegroup;
    EAGLContext *_context;
    GLProgram *_currentShaderProgram;
    NSObject<OS_dispatch_queue> *_contextQueue;
    struct __CVOpenGLESTextureCache *_coreVideoTextureCache;
    GPUImageFramebufferCache *_framebufferCache;
}

+ (_Bool)supportsFastTextureUpload;
+ (struct CGSize)sizeThatFitsWithinATextureForSize:(struct CGSize)arg1;
+ (_Bool)deviceSupportsFramebufferReads;
+ (_Bool)deviceSupportsRedTextures;
+ (_Bool)deviceSupportsOpenGLESExtension:(id)arg1;
+ (int)maximumVaryingVectorsForThisDevice;
+ (int)maximumTextureUnitsForThisDevice;
+ (int)maximumTextureSizeForThisDevice;
+ (void)setActiveShaderProgram:(id)arg1;
+ (void)releaseCustomContext;
+ (void)checkCustomContext:(id)arg1;
+ (void)setCustomContext:(id)arg1;
+ (void)useImageProcessingContext;
+ (id)sharedFramebufferCache;
+ (id)sharedContextQueue;
+ (id)sharedImageProcessingContext;
+ (void *)contextKey;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *contextQueue; // @synthesize contextQueue=_contextQueue;
@property(retain, nonatomic) GLProgram *currentShaderProgram; // @synthesize currentShaderProgram=_currentShaderProgram;
@property(readonly) GPUImageFramebufferCache *framebufferCache; // @synthesize framebufferCache=_framebufferCache;
@property(readonly) struct __CVOpenGLESTextureCache *coreVideoTextureCache; // @synthesize coreVideoTextureCache=_coreVideoTextureCache;
@property(readonly, retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
- (id)createContext;
- (void)useSharegroup:(id)arg1;
- (id)programForVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2;
- (void)presentBufferForDisplay;
- (void)setContextShaderProgram:(id)arg1;
- (void)useAsCurrentContext;
- (void)useCustomContext:(id)arg1;
- (void)checkContext:(id)arg1;
- (void)initContext;
- (void)releaseContext;
- (void)dealloc;
- (id)init;

@end

