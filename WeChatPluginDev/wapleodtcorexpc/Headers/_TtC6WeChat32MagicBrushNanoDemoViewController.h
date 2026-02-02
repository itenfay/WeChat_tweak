//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat32MagicBrushNanoDemoViewController
{
    MISSING_TYPE *rt;
    MISSING_TYPE *canvasMap;
    MISSING_TYPE *jvm;
    MISSING_TYPE *ctx;
    MISSING_TYPE *thread;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)evaluateScript;
- (id)onLoadDataSync:(id)arg1;
- (void)onLoadData:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)onScreenCanvasRemove:(int)arg1;
- (void)onScreenCanvasFirstFrameRendered:(int)arg1;
- (void)onScreenCanvasSetTouchableRects:(int)arg1 left:(const float *)arg2 top:(const float *)arg3 width:(const float *)arg4 height:(const float *)arg5 count:(unsigned int)arg6;
- (void)onScreenCanvasStyleChange:(int)arg1 top:(float)arg2 left:(float)arg3 width:(float)arg4 height:(float)arg5 zIndex:(unsigned int)arg6;
- (void)onScreenCanvasBindWindow:(int)arg1 windowId:(int)arg2;
- (void)onScreenCanvasCreated:(int)arg1;
- (void)stopThread;
- (void)willDisappear;
- (void)setupMB;
- (void)didAppear;

@end

