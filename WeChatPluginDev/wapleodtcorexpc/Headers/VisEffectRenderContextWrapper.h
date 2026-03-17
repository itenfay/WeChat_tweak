//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class MMOpenGLContext, XImageContext;

@interface VisEffectRenderContextWrapper : NSObject
{
    long long _renderType;
    MMOpenGLContext *_openGLContext;
    XImageContext *_rciContext;
}

@property(retain) XImageContext *rciContext; // @synthesize rciContext=_rciContext;
@property(retain) MMOpenGLContext *openGLContext; // @synthesize openGLContext=_openGLContext;
@property long long renderType; // @synthesize renderType=_renderType;
- (void)runAsync:(CDUnknownBlockType)arg1;
- (void)runSync:(CDUnknownBlockType)arg1;
- (id)initWithRciContext:(id)arg1;
- (id)initWithOpenGLContext:(id)arg1;

@end
