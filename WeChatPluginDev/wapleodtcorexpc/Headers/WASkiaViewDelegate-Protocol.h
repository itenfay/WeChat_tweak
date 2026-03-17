//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, WASkiaCanvasView;

@protocol WASkiaViewDelegate <NSObject>
- (void)onTouchDown:(WASkiaCanvasView *)arg1;
- (void)onLongPress:(NSDictionary *)arg1 canvas:(WASkiaCanvasView *)arg2;
- (void)onTouchCancel:(NSArray *)arg1 canvas:(WASkiaCanvasView *)arg2;
- (void)onTouchEnd:(NSDictionary *)arg1 canvas:(WASkiaCanvasView *)arg2;
- (void)onTouchMove:(NSArray *)arg1 canvas:(WASkiaCanvasView *)arg2;
- (void)onTouchBegin:(NSDictionary *)arg1 canvas:(WASkiaCanvasView *)arg2;
@end

