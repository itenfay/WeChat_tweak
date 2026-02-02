//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EAGLContext, WADynamicBackgroundGLSceneRenderTexture;

@interface BlurContext : NSObject
{
    unsigned int _framebuffer;
    unsigned int _framebufferColorTexture;
    WADynamicBackgroundGLSceneRenderTexture *_displayFramebufferPlane;
    EAGLContext *_glContext;
}

- (void).cxx_destruct;
@property(nonatomic) __weak EAGLContext *glContext; // @synthesize glContext=_glContext;
@property(nonatomic) unsigned int framebufferColorTexture; // @synthesize framebufferColorTexture=_framebufferColorTexture;
@property(nonatomic) unsigned int framebuffer; // @synthesize framebuffer=_framebuffer;
@property(retain, nonatomic) WADynamicBackgroundGLSceneRenderTexture *displayFramebufferPlane; // @synthesize displayFramebufferPlane=_displayFramebufferPlane;
- (void)dealloc;

@end

