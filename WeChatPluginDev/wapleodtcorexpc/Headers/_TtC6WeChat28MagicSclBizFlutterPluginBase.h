//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC6WeChat28MagicSclBizFlutterPluginBase : NSObject
{
    MISSING_TYPE *mbPlugin;
    MISSING_TYPE *flutterApi;
    MISSING_TYPE *dpr;
    MISSING_TYPE *pendingCreateCanvas;
    MISSING_TYPE *pendingLayoutCanvas;
    MISSING_TYPE *pendingLock;
    MISSING_TYPE *pendingTasksAfterAttach;
    MISSING_TYPE *pendingTasksAfterBind;
    MISSING_TYPE *rootMap;
    MISSING_TYPE *weakEngine;
    MISSING_TYPE *control;
    MISSING_TYPE *randomNum;
}

- (void).cxx_destruct;
- (id)init;
- (void)removeCoverWithFrameSetId:(id)arg1;
- (void)setGestureRectsWithBizName:(id)arg1 frameSetId:(id)arg2 canvasId:(unsigned int)arg3 rects:(id)arg4;
- (void)onCanvasIdAndFrameSetIdBindWithCanvasId:(unsigned int)arg1 frameSetId:(id)arg2;
- (void)onFrameSetResizeWithFrameSet:(id)arg1;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;

@end

