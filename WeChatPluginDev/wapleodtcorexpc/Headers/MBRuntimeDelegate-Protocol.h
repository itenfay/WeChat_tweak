//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString;

@protocol MBRuntimeDelegate <NSObject>
- (void)onProfilerFileGenerated:(NSString *)arg1 type:(NSString *)arg2;
- (void)onSetUserPreferredFps:(double)arg1;
- (void)onJsEventSend:(NSString *)arg1 data:(NSDictionary *)arg2;
- (void)onJsException:(NSString *)arg1 stack:(NSString *)arg2;
- (void)onJsLog:(NSString *)arg1;
- (struct __CVBuffer *)providePixelBufferByViewId:(unsigned int)arg1 withType:(NSString *)arg2;
- (NSData *)onLoadDataFromURLSync:(NSString *)arg1;
- (void)onLoadDataFromURL:(NSString *)arg1 callback:(void (^)(NSData *))arg2;
- (void)onCanvasFirstFrameRendered:(int)arg1;
- (void)onCanvasSetTouchableRects:(int)arg1 left:(const float *)arg2 top:(const float *)arg3 width:(const float *)arg4 height:(const float *)arg5 count:(unsigned int)arg6;
- (void)onCanvasRemove:(int)arg1;
- (void)onCanvasStyleChange:(int)arg1 top:(float)arg2 left:(float)arg3 width:(float)arg4 height:(float)arg5 zIndex:(unsigned int)arg6;
- (void)onCanvasContextCreated:(int)arg1 contextId:(int)arg2 contextType:(int)arg3;
- (void)onCanvasBindWindow:(int)arg1 windowId:(int)arg2;
- (void)onCanvasCreated:(int)arg1 onscreen:(_Bool)arg2;
@end

