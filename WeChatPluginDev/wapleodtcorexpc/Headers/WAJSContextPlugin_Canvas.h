//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MagicBrushCore, NSMapTable, NSMutableDictionary, NSString, WAOpenGLView;
@protocol WALivePusherPixelBufferDelegate, WAMagicARPixelBufferDelegate;

@interface WAJSContextPlugin_Canvas
{
    id <WALivePusherPixelBufferDelegate> _livePusherDelegate;
    id <WAMagicARPixelBufferDelegate> _magicARDelegate;
    unsigned long long _frameCaptureState;
    WAOpenGLView *_glview;
    NSMapTable *_canvasMap;
    MagicBrushCore *_mbCore;
    NSMapTable *_glLayerMap;
    NSMutableDictionary *_rendertargets;
    NSMutableDictionary *_captureInfos;
}

+ (id)getBundle;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *captureInfos; // @synthesize captureInfos=_captureInfos;
@property(retain, nonatomic) NSMutableDictionary *rendertargets; // @synthesize rendertargets=_rendertargets;
@property(retain, nonatomic) NSMapTable *glLayerMap; // @synthesize glLayerMap=_glLayerMap;
@property(retain) MagicBrushCore *mbCore; // @synthesize mbCore=_mbCore;
@property(retain, nonatomic) NSMapTable *canvasMap; // @synthesize canvasMap=_canvasMap;
@property(retain) WAOpenGLView *glview; // @synthesize glview=_glview;
@property(nonatomic) unsigned long long frameCaptureState; // @synthesize frameCaptureState=_frameCaptureState;
@property(nonatomic) __weak id <WAMagicARPixelBufferDelegate> magicARDelegate; // @synthesize magicARDelegate=_magicARDelegate;
@property(nonatomic) __weak id <WALivePusherPixelBufferDelegate> livePusherDelegate; // @synthesize livePusherDelegate=_livePusherDelegate;
- (void)onFrameAvailable:(struct __CVBuffer *)arg1 inRT:(id)arg2;
- (void)onScreenCanvasBindWindow:(int)arg1 windowId:(int)arg2;
- (void)onProfilerFileGenerated:(id)arg1 type:(id)arg2;
- (id)onLoadDataSync:(id)arg1;
- (void)onLoadData:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)onJsException:(id)arg1 stack:(id)arg2;
- (id)onCreateScreenCanvas:(unsigned int)arg1 viewId:(int)arg2;
- (struct __CVBuffer *)providePixelBufferByViewId:(unsigned int)arg1 withType:(id)arg2;
- (id)getCommandBufferScript;
- (id)createImageWithSvgData:(id)arg1 resize:(struct CGSize)arg2 scale:(double)arg3;
- (id)getFileData:(id)arg1;
- (_Bool)isFileExist:(id)arg1;
- (_Bool)isNano;
- (void)captureMBCanvas:(unsigned int)arg1 mark:(unsigned int)arg2 delegate:(id)arg3;
- (void)notifyViewDestroyForViewId:(int)arg1;
- (void)notifyViewCreated:(id)arg1 forViewId:(int)arg2;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)setupFrameCapture;
- (void)releaseMagicBrush;
- (id)getMagicBrush;
- (id)getGLView;
- (void)setupGLView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

