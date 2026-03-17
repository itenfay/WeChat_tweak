//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MegaVideoPlayItem, NSNumber;

@protocol MegaVideoPlayerService
- (NSNumber *)getCurrentPlayMsPlayerId:(long long)arg1 error:(id *)arg2;
- (void)pausePlayerId:(long long)arg1 error:(id *)arg2;
- (void)stopPlayerId:(long long)arg1 error:(id *)arg2;
- (void)playPlayerId:(long long)arg1 error:(id *)arg2;
- (void)releasePlayerId:(long long)arg1 error:(id *)arg2;
- (void)createPlayerTexturePlayItem:(MegaVideoPlayItem *)arg1 autoPlay:(_Bool)arg2 playOffset:(long long)arg3 completion:(void (^)(MegaVideoPlayerTextureInfo *, FlutterError *))arg4;
@end

