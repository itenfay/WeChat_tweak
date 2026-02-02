//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EAGLContext, NSValue, WAEJTextureCapture;

@interface WAEJCanvasContext : NSObject
{
    short width;
    short height;
    double contentScale;
    short bufferWidth;
    short bufferHeight;
    _Bool preserveDrawingBuffer;
    _Bool msaaEnabled;
    _Bool needsPresenting;
    int msaaSamples;
    EAGLContext *glContext;
    WAEJTextureCapture *textureCapture;
    _Bool stopRender;
    NSValue *canvasContext;
    _Bool _isTransparent;
    _Bool _isEAGLViewOwner;
    _Bool _firstRendered;
    unsigned int _canvasId;
    unsigned int _drawCall;
    unsigned int _vertexCount;
    unsigned int _triangleCount;
}

@property(nonatomic) _Bool firstRendered; // @synthesize firstRendered=_firstRendered;
@property(nonatomic) unsigned int triangleCount; // @synthesize triangleCount=_triangleCount;
@property(nonatomic) unsigned int vertexCount; // @synthesize vertexCount=_vertexCount;
@property(nonatomic) unsigned int drawCall; // @synthesize drawCall=_drawCall;
@property(nonatomic) _Bool isEAGLViewOwner; // @synthesize isEAGLViewOwner=_isEAGLViewOwner;
@property(nonatomic) unsigned int canvasId; // @synthesize canvasId=_canvasId;
@property(nonatomic) _Bool isTransparent; // @synthesize isTransparent=_isTransparent;
@property(readonly, nonatomic) WAEJTextureCapture *textureCapture; // @synthesize textureCapture;
@property(retain, nonatomic) NSValue *canvasContext; // @synthesize canvasContext;
@property(nonatomic) _Bool stopRender; // @synthesize stopRender;
@property(nonatomic) _Bool preserveDrawingBuffer; // @synthesize preserveDrawingBuffer;
@property(nonatomic) int msaaSamples; // @synthesize msaaSamples;
@property(nonatomic) _Bool msaaEnabled; // @synthesize msaaEnabled;
@property(nonatomic) short bufferHeight; // @synthesize bufferHeight;
@property(nonatomic) short bufferWidth; // @synthesize bufferWidth;
@property(nonatomic) double contentScale; // @synthesize contentScale;
@property(nonatomic) short height; // @synthesize height;
@property(nonatomic) short width; // @synthesize width;
@property(readonly, nonatomic) EAGLContext *glContext; // @synthesize glContext;
- (void)dealloc;
- (id)captureImage;
- (id)getTexture;
- (void)resumeUpdate:(_Bool)arg1;
- (void)clearDrawCount;
- (void)remove;
- (void)prepare;
- (void)flushBuffers;
- (void)create;

@end

