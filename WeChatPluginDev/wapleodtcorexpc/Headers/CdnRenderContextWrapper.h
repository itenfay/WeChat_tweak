//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CdnOpenGLContext, CdnRciContext, EAGLContext;

@interface CdnRenderContextWrapper : NSObject
{
    _Bool _glContextUsed;
    long long _renderType;
    CdnOpenGLContext *_cdnGLContext;
    CdnRciContext *_cdnRciContext;
}

- (void).cxx_destruct;
@property _Bool glContextUsed; // @synthesize glContextUsed=_glContextUsed;
@property(retain) CdnRciContext *cdnRciContext; // @synthesize cdnRciContext=_cdnRciContext;
@property(retain) CdnOpenGLContext *cdnGLContext; // @synthesize cdnGLContext=_cdnGLContext;
@property long long renderType; // @synthesize renderType=_renderType;
- (void)preCheckGLError;
@property(readonly) EAGLContext *glContext;
- (void)runAsync:(CDUnknownBlockType)arg1;
- (void)runSync:(CDUnknownBlockType)arg1;
- (void)onGLContextEndUse;
- (void)onGLContextUsed;
- (id)initWithCdnRciContext:(id)arg1;
- (id)initWithCdnGLContext:(id)arg1;

@end

