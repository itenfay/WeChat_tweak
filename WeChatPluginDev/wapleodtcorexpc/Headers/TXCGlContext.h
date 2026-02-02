//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EAGLContext, NSString, TXCDispatchQueue;

@interface TXCGlContext : NSObject
{
    struct __CVOpenGLESTextureCache *_textureCache;
    EAGLContext *_context;
    TXCDispatchQueue *_queue;
}

+ (_Bool)supportsFastTextureUpload:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) struct __CVOpenGLESTextureCache *textureCache; // @synthesize textureCache=_textureCache;
- (_Bool)createTextureCache;
- (id)createContextFromContext:(id)arg1;
- (unsigned int)createTextureFromPixelBuffer:(struct __CVBuffer *)arg1 plane:(long long)arg2 format:(int)arg3;
- (_Bool)supportsSetUnpackRowLength;
- (void)assertContextIsCurrent;
- (void)runInGLQueue:(CDUnknownBlockType)arg1;
- (void)runGlCommands:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

