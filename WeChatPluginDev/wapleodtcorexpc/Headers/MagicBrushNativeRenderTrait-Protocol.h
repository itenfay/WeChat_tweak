//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString, NativeRenderLoadImageResult;

@protocol MagicBrushNativeRenderTrait <NSObject>
- (void)onNativeRenderSwapWindow;
- (NSDictionary *)onNativeRenderProcessBuffer:(NSData *)arg1 extBuffer:(NSData *)arg2;
- (NSString *)notifyNativeRenderFontLoaded:(NSData *)arg1;
- (void)notifyNativeRenderImageDestroyed:(int)arg1;
- (NativeRenderLoadImageResult *)notifyNativeRenderImageLoaded:(NSData *)arg1 withId:(int)arg2;
- (NSString *)onNativeRenderCanvasToDataURL:(int)arg1 type:(NSString *)arg2 encoderOptions:(float)arg3;
- (void)notifyNativeRenderCanvasGotContext:(int)arg1 contextId:(int)arg2 contextType:(NSString *)arg3 options:(NSDictionary *)arg4;
- (void)notifyNativeRenderCanvasSetStyle:(int)arg1 x:(float)arg2 y:(float)arg3 width:(float)arg4 height:(float)arg5 zIndex:(int)arg6;
- (void)notifyNativeRenderCanvasDestroyed:(int)arg1;
- (void)notifyNativeRenderCanvasResized:(int)arg1 width:(int)arg2 height:(int)arg3;
- (void)notifyNativeRenderCanvasCreated:(int)arg1 width:(int)arg2 height:(int)arg3 onscreen:(_Bool)arg4;
@end

