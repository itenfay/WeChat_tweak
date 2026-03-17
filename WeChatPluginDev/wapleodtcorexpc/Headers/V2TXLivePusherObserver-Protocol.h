//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIImage, V2TXLivePusherStatistics, V2TXLiveVideoFrame;

@protocol V2TXLivePusherObserver <NSObject>

@optional
- (void)onSetMixTranscodingConfig:(long long)arg1 message:(NSString *)arg2;
- (void)onGLContextDestroyed;
- (void)onProcessVideoFrame:(V2TXLiveVideoFrame *)arg1 dstFrame:(V2TXLiveVideoFrame *)arg2;
- (void)onSnapshotComplete:(UIImage *)arg1;
- (void)onStatisticsUpdate:(V2TXLivePusherStatistics *)arg1;
- (void)onPushStatusUpdate:(long long)arg1 message:(NSString *)arg2 extraInfo:(NSDictionary *)arg3;
- (void)onMicrophoneVolumeUpdate:(long long)arg1;
- (void)onCaptureFirstVideoFrame;
- (void)onCaptureFirstAudioFrame;
- (void)onWarning:(long long)arg1 message:(NSString *)arg2 extraInfo:(NSDictionary *)arg3;
- (void)onError:(long long)arg1 message:(NSString *)arg2 extraInfo:(NSDictionary *)arg3;
@end

