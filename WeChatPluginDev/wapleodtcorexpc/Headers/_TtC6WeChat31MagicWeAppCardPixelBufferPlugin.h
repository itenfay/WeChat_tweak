//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC6WeChat31MagicWeAppCardPixelBufferPlugin : NSObject
{
    MISSING_TYPE *biz;
}

- (void).cxx_destruct;
- (id)init;
- (void)removeCoverWithFrameSetId:(id)arg1;
- (void)setGestureRectsWithBizName:(id)arg1 frameSetId:(id)arg2 canvasId:(unsigned int)arg3 rects:(id)arg4;
- (void)onFrameSetResizeWithFrameSet:(id)arg1;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasIdAndFrameSetIdBindWithCanvasId:(unsigned int)arg1 frameSetId:(id)arg2;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;

@end

