//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol TXLivePushListener <NSObject>
- (void)onScreenCaptureStoped:(int)arg1;
- (void)onScreenCaptureResumed:(int)arg1;
- (void)onScreenCapturePaused:(int)arg1;
- (void)onScreenCaptureStarted;
- (void)onNetStatus:(NSDictionary *)arg1;
- (void)onPushEvent:(int)arg1 withParam:(NSDictionary *)arg2;
@end

