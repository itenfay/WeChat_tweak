//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString, UIImage;

@protocol WAOpenGLViewDelegate <NSObject>
- (NSString *)getCommandBufferScript;
- (NSData *)getFileData:(NSString *)arg1;
- (_Bool)isFileExist:(NSString *)arg1;

@optional
- (struct __CVBuffer *)providePixelBufferByViewId:(unsigned int)arg1 withType:(NSString *)arg2;
- (void)onCancelAllFileTask;
- (void)onOpenGLViewEnterForeground;
- (void)onOpenGLViewEnterBackground;
- (void)onFirstFrameRendered:(unsigned int)arg1;
- (void)onFrameEnd;
- (void)onFrameBegin;
- (void)onFrameTimeout:(int)arg1;
- (void)logGLError:(int)arg1 name:(NSString *)arg2;
- (void)logError:(NSString *)arg1 desc:(NSString *)arg2 stack:(NSString *)arg3;
- (void)systemLog:(NSString *)arg1;
- (void)log:(NSString *)arg1 func:(const char *)arg2 line:(int)arg3;
- (void)gameKVReport:(unsigned int)arg1 logstr:(NSString *)arg2;
- (UIImage *)createImageWithSvgData:(NSData *)arg1 resize:(struct CGSize)arg2 scale:(double)arg3;
- (NSData *)getFileDataWithUrl:(NSString *)arg1;
@end

