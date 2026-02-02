//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, WAEJJavaScriptView, WAEJSharedOpenGLContext, WAEJTexture;

@interface WAEJCanvasContextSkia2D
{
    unsigned int _offscreenFbo;
    WAEJJavaScriptView *_scriptView;
    sk_sp_f030eba7 _skContext;
    WAEJSharedOpenGLContext *_sharedGLContext;
    WAEJTexture *_innerTexture;
    sk_sp_ce222020 _offscreenSurface;
    NSMutableArray *_states;
    struct SkPath _path;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct SkPath path; // @synthesize path=_path;
@property(retain, nonatomic) NSMutableArray *states; // @synthesize states=_states;
@property(nonatomic) sk_sp_ce222020 offscreenSurface; // @synthesize offscreenSurface=_offscreenSurface;
@property(retain, nonatomic) WAEJTexture *innerTexture; // @synthesize innerTexture=_innerTexture;
@property(nonatomic) unsigned int offscreenFbo; // @synthesize offscreenFbo=_offscreenFbo;
@property(retain, nonatomic) WAEJSharedOpenGLContext *sharedGLContext; // @synthesize sharedGLContext=_sharedGLContext;
@property(nonatomic) sk_sp_f030eba7 skContext; // @synthesize skContext=_skContext;
@property(retain, nonatomic) WAEJJavaScriptView *scriptView; // @synthesize scriptView=_scriptView;
- (CDStruct_869f9c67)measureText:(struct basic_string<char, std::char_traits<char>, std::allocator<char>>)arg1;
- (void)strokeText:(struct basic_string<char, std::char_traits<char>, std::allocator<char>>)arg1 x:(float)arg2 y:(float)arg3;
- (void)fillText:(struct basic_string<char, std::char_traits<char>, std::allocator<char>>)arg1 x:(float)arg2 y:(float)arg3;
- (void)drawText:(void *)arg1 text:(struct basic_string<char, std::char_traits<char>, std::allocator<char>>)arg2 x:(float)arg3 y:(float)arg4 maxWidth:(float)arg5 paint:(const void *)arg6;
- (_Bool)isPointInStroke:(float)arg1 y:(float)arg2 withPath:(void *)arg3;
- (_Bool)isPointInStroke:(float)arg1 y:(float)arg2;
- (_Bool)isPointInPath:(float)arg1 y:(float)arg2 fillRule:(int)arg3 withPath:(void *)arg4;
- (_Bool)isPointInPath:(float)arg1 y:(float)arg2 fillRule:(int)arg3;
- (void)clip:(int)arg1 withPath:(void *)arg2;
- (void)clip:(int)arg1;
- (void)strokeWithPath:(void *)arg1;
- (void)stroke;
- (void)fill:(int)arg1 withPath:(void *)arg2;
- (void)fill:(int)arg1;
- (void)ellipse:(float)arg1 y:(float)arg2 radiusX:(float)arg3 radiusY:(float)arg4 rotation:(float)arg5 startAngle:(float)arg6 endAngle:(float)arg7 antiClockwise:(_Bool)arg8;
- (void)arcX:(float)arg1 y:(float)arg2 radius:(float)arg3 startAngle:(float)arg4 endAngle:(float)arg5 antiClockwise:(_Bool)arg6;
- (void)arcToX1:(float)arg1 y1:(float)arg2 x2:(float)arg3 y2:(float)arg4 radius:(float)arg5;
- (void)quadraticCurveToCpx:(float)arg1 cpy:(float)arg2 x:(float)arg3 y:(float)arg4;
- (void)bezierCurveToCpx1:(float)arg1 cpy1:(float)arg2 cpx2:(float)arg3 cpy2:(float)arg4 x:(float)arg5 y:(float)arg6;
- (void)rectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4;
- (void)lineToX:(float)arg1 y:(float)arg2;
- (void)moveToX:(float)arg1 y:(float)arg2;
- (void)closePath;
- (void)beginPath;
- (void)drawImage:(id)arg1 sx:(float)arg2 sy:(float)arg3 sw:(float)arg4 sh:(float)arg5 dx:(float)arg6 dy:(float)arg7 dw:(float)arg8 dh:(float)arg9;
- (void)putImageData:(id)arg1 dx:(float)arg2 dy:(float)arg3;
- (id)getImageDataSx:(short)arg1 sy:(short)arg2 sw:(short)arg3 sh:(short)arg4;
- (void)clearRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4;
- (void)strokeRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4;
- (void)fillRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4;
- (vector_8ca568ff)getTransform;
- (void)setTransformM11:(float)arg1 m12:(float)arg2 m21:(float)arg3 m22:(float)arg4 dx:(float)arg5 dy:(float)arg6;
- (void)transformM11:(float)arg1 m12:(float)arg2 m21:(float)arg3 m22:(float)arg4 dx:(float)arg5 dy:(float)arg6;
- (void)resetTransform;
- (void)scaleX:(float)arg1 y:(float)arg2;
- (void)translateX:(float)arg1 y:(float)arg2;
- (void)rotate:(float)arg1;
- (void)resetState;
- (void)restore;
- (void)save;
- (void)setStrokeStyleObject:(id)arg1;
- (void)setStrokeStyleColor:(CDUnion_a0760c36)arg1;
- (id)strokeObject;
- (void)setFillStyleObject:(id)arg1;
- (void)setFillStyleColor:(CDUnion_a0760c36)arg1;
- (id)fillObject;
- (id)capture;
- (id)texture;
- (id)getTexture;
- (void)prepare;
- (void)flushBuffers;
- (void)create;
- (void)resizeToWidth:(short)arg1 height:(short)arg2;
- (void)createOffScreenSurface;
- (void)markDrawCall;
- (void)setHeight:(short)arg1;
- (void)setWidth:(short)arg1;
- (void *)currentState;
- (void *)canvas;
- (void)dealloc;
- (id)initWithScriptView:(id)arg1 width:(short)arg2 height:(short)arg3 screenGroup:(_Bool)arg4;

@end

