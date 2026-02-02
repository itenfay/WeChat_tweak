//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMWebCanvasView, NSString;

@protocol MMWebCanvasViewEventDelegate <NSObject>

@optional
- (void)onCanvasViewEnterForeground:(MMWebCanvasView *)arg1;
- (void)onCanvasViewEnterBackground:(MMWebCanvasView *)arg1;
- (void)onFirstFrameRendered:(MMWebCanvasView *)arg1;
- (void)onTouchEvent:(NSString *)arg1 withEvent:(NSString *)arg2 canvasView:(MMWebCanvasView *)arg3;
@end

