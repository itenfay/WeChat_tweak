//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "IMBExternalViewDelegate-Protocol.h"

@class NSArray, NSString, _TtC6WeChat16MagicSclFrameSet;

@protocol _TtP6WeChat26IMBSclExternalViewDelegate_ <IMBExternalViewDelegate>
- (void)removeCoverWithFrameSetId:(NSString *)arg1;
- (void)setGestureRectsWithBizName:(NSString *)arg1 frameSetId:(NSString *)arg2 canvasId:(unsigned int)arg3 rects:(NSArray *)arg4;
- (void)onFrameSetResizeWithFrameSet:(_TtC6WeChat16MagicSclFrameSet *)arg1;
- (void)onCanvasIdAndFrameSetIdBindWithCanvasId:(unsigned int)arg1 frameSetId:(NSString *)arg2;
@end

