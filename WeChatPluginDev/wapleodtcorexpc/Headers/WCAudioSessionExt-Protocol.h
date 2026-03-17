//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVAudioSessionRouteDescription;

@protocol WCAudioSessionExt <NSObject>

@optional
- (void)onWCAudioSessionSetActive:(_Bool)arg1;
- (void)onWCAudioSessionOverride;
- (void)onWCAudioSessionCategoryChange;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)onWCAudioSessionRouteChange:(AVAudioSessionRouteDescription *)arg1 reasonValue:(unsigned long long)arg2;
@end

