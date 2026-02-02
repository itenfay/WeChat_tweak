//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class EAGLView, MagicBrushCore;
@protocol IMBExternalTextureDelegate, IMBExternalViewDelegate;

@interface MBExternalViewStub : UIView
{
    _Bool _firstFrame;
    int _canvasId;
    CDUnknownBlockType _oneTimeFrameCallback;
    CDUnknownBlockType _frameCallback;
    MagicBrushCore *_mb;
    id <IMBExternalViewDelegate> _externalViewDelegate;
    CDUnknownBlockType _whiteCheckCallback;
    long long _dangerControl;
    id <IMBExternalTextureDelegate> _externalTextureDelegate;
    EAGLView *_eaglView;
    CDUnknownBlockType _callback;
    struct __CVBuffer *_pixelbuffer;
    struct __CVBuffer *_copiedPixelBuffer;
    CDUnknownBlockType _imageBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType imageBlock; // @synthesize imageBlock=_imageBlock;
@property(nonatomic) struct __CVBuffer *copiedPixelBuffer; // @synthesize copiedPixelBuffer=_copiedPixelBuffer;
@property(nonatomic) struct __CVBuffer *pixelbuffer; // @synthesize pixelbuffer=_pixelbuffer;
@property(nonatomic) _Bool firstFrame; // @synthesize firstFrame=_firstFrame;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) EAGLView *eaglView; // @synthesize eaglView=_eaglView;
@property(nonatomic) __weak id <IMBExternalTextureDelegate> externalTextureDelegate; // @synthesize externalTextureDelegate=_externalTextureDelegate;
@property(nonatomic) long long dangerControl; // @synthesize dangerControl=_dangerControl;
@property(copy, nonatomic) CDUnknownBlockType whiteCheckCallback; // @synthesize whiteCheckCallback=_whiteCheckCallback;
@property(nonatomic) __weak id <IMBExternalViewDelegate> externalViewDelegate; // @synthesize externalViewDelegate=_externalViewDelegate;
@property(nonatomic) __weak MagicBrushCore *mb; // @synthesize mb=_mb;
@property(nonatomic) int canvasId; // @synthesize canvasId=_canvasId;
@property(copy, nonatomic) CDUnknownBlockType frameCallback; // @synthesize frameCallback=_frameCallback;
@property(copy, nonatomic) CDUnknownBlockType oneTimeFrameCallback; // @synthesize oneTimeFrameCallback=_oneTimeFrameCallback;
- (id)tryDetectCVPixelBufferEmpty:(struct __CVBuffer *)arg1;
- (void)doWhiteCheckAndCallback;
- (void)wrapWhiteCheckDelayForOneSecond;
- (id)imageFromPixelBuffer:(struct __CVBuffer *)arg1;
- (_Bool)checkPixelBufferEnable;
- (void)takeSnapshot:(CDUnknownBlockType)arg1;
- (void)onExternalTouchEventForMB:(id)arg1;
- (void)onExternalTouchEvent:(id)arg1;
- (void)notifyTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)notifyTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)notifyTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)notifyTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)unregisterPixelBufferCallback;
- (void)registerPixelBufferCallback:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (_Bool)setFlutterCanvasMaxFps:(_Bool)arg1 duration:(int)arg2;
- (struct __CVBuffer *)copyPixelBuffer;
- (void)setupCallback;
- (id)initWithExternalViewDelegate:(id)arg1;

@end

