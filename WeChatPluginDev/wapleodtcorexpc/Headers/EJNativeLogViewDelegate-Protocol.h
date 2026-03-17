//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol EJNativeLogViewDelegate <NSObject>
- (void)onFrameEnd;
- (void)onFrameBegin;
- (void)onFirstFrameRendered:(unsigned int)arg1;
- (void)onFrameTimeout:(int)arg1;
- (void)onEJViewEnterForeground;
- (void)onEJViewEnterBackground;
- (void)logGLError:(int)arg1 name:(NSString *)arg2;
- (void)logError:(NSString *)arg1 desc:(NSString *)arg2 stack:(NSString *)arg3;
- (void)systemLog:(NSString *)arg1;
- (void)log:(NSString *)arg1 func:(const char *)arg2 line:(int)arg3;
- (void)gameKVReport:(unsigned int)arg1 logstr:(NSString *)arg2;
@end

