//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString, UIImage, V2TXLivePlayerStatistics, V2TXLiveVideoFrame;
@protocol V2TXLivePlayer;

@protocol V2TXLivePlayerObserver <NSObject>

@optional
- (void)onReceiveSeiMessage:(id <V2TXLivePlayer>)arg1 payloadType:(int)arg2 data:(NSData *)arg3;
- (void)onRenderVideoFrame:(id <V2TXLivePlayer>)arg1 frame:(V2TXLiveVideoFrame *)arg2;
- (void)onSnapshotComplete:(id <V2TXLivePlayer>)arg1 image:(UIImage *)arg2;
- (void)onStatisticsUpdate:(id <V2TXLivePlayer>)arg1 statistics:(V2TXLivePlayerStatistics *)arg2;
- (void)onPlayoutVolumeUpdate:(id <V2TXLivePlayer>)arg1 volume:(long long)arg2;
- (void)onAudioLoading:(id <V2TXLivePlayer>)arg1 extraInfo:(NSDictionary *)arg2;
- (void)onVideoLoading:(id <V2TXLivePlayer>)arg1 extraInfo:(NSDictionary *)arg2;
- (void)onAudioPlaying:(id <V2TXLivePlayer>)arg1 firstPlay:(_Bool)arg2 extraInfo:(NSDictionary *)arg3;
- (void)onVideoPlaying:(id <V2TXLivePlayer>)arg1 firstPlay:(_Bool)arg2 extraInfo:(NSDictionary *)arg3;
- (void)onConnected:(id <V2TXLivePlayer>)arg1 extraInfo:(NSDictionary *)arg2;
- (void)onVideoResolutionChanged:(id <V2TXLivePlayer>)arg1 width:(long long)arg2 height:(long long)arg3;
- (void)onWarning:(id <V2TXLivePlayer>)arg1 code:(long long)arg2 message:(NSString *)arg3 extraInfo:(NSDictionary *)arg4;
- (void)onError:(id <V2TXLivePlayer>)arg1 code:(long long)arg2 message:(NSString *)arg3 extraInfo:(NSDictionary *)arg4;
@end

