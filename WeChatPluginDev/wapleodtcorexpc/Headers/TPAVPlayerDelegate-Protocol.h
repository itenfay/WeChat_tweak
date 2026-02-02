//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVAsset, NSError, NSObject;
@protocol ITPAVPlayer;

@protocol TPAVPlayerDelegate <NSObject>
- (void)player:(NSObject<ITPAVPlayer> *)arg1 didFailedToPlayToEndWithError:(NSError *)arg2;
- (void)player:(NSObject<ITPAVPlayer> *)arg1 didDeselectedTrackAtIndex:(unsigned long long)arg2 opaque:(long long)arg3;
- (void)player:(NSObject<ITPAVPlayer> *)arg1 didSelectedTrackAtIndex:(unsigned long long)arg2 opaque:(long long)arg3;
- (void)player:(NSObject<ITPAVPlayer> *)arg1 endOfOneClipWithIndex:(unsigned long long)arg2;
- (void)player:(NSObject<ITPAVPlayer> *)arg1 startOneClipWithIndex:(unsigned long long)arg2;
- (void)player:(NSObject<ITPAVPlayer> *)arg1 videoEndOfOnePlayLoop:(id)arg2;
- (AVAsset *)player:(NSObject<ITPAVPlayer> *)arg1 assembleAVAssetWithIndex:(unsigned long long)arg2;
- (void)player:(NSObject<ITPAVPlayer> *)arg1 naturalSizeAvailableWithSize:(struct CGSize)arg2;
- (void)playerFirstFrameRendered:(NSObject<ITPAVPlayer> *)arg1;
- (void)player:(NSObject<ITPAVPlayer> *)arg1 onVideoFrame:(struct __CVBuffer *)arg2;
- (void)player:(NSObject<ITPAVPlayer> *)arg1 timeBaseValueChange:(double)arg2;
- (void)player:(NSObject<ITPAVPlayer> *)arg1 airplayDidActive:(_Bool)arg2;
- (void)player:(NSObject<ITPAVPlayer> *)arg1 seekCompleted:(_Bool)arg2;
- (void)player:(NSObject<ITPAVPlayer> *)arg1 didErrorOccurred:(NSError *)arg2;
- (void)player:(NSObject<ITPAVPlayer> *)arg1 playbackStateDidChange:(long long)arg2;
- (void)player:(NSObject<ITPAVPlayer> *)arg1 loadStateDidChange:(long long)arg2;
@end

