//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebCanvasView, NSString;
@protocol MMWebCanvasViewDataDelegate, MMWebCanvasViewEventDelegate;

@interface MMWebCanvasViewProxy
{
    MMWebCanvasView *_canvasView;
    id <MMWebCanvasViewDataDelegate> _dataDelegate;
    id <MMWebCanvasViewEventDelegate> _eventDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMWebCanvasViewEventDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(nonatomic) __weak id <MMWebCanvasViewDataDelegate> dataDelegate; // @synthesize dataDelegate=_dataDelegate;
@property(nonatomic) __weak MMWebCanvasView *canvasView; // @synthesize canvasView=_canvasView;
- (void)onOpenGLViewEnterForeground;
- (void)onOpenGLViewEnterBackground;
- (void)onFirstFrameRendered:(unsigned int)arg1;
- (void)logError:(id)arg1 desc:(id)arg2 stack:(id)arg3;
- (void)log:(id)arg1 func:(const char *)arg2 line:(int)arg3;
- (void)systemLog:(id)arg1;
- (id)getCommandBufferScript;
- (id)createImageWithSvgData:(id)arg1 resize:(struct CGSize)arg2 scale:(double)arg3;
- (void)onCancelAllFileTask;
- (id)getFileDataWithUrl:(id)arg1;
- (id)getFileData:(id)arg1;
- (_Bool)isFileExist:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

