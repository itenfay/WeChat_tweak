//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLivePlayInfo;

@protocol BizFinderLivePlayersManager
- (void)stopPlayerId:(long long)arg1 error:(id *)arg2;
- (void)playPlayerId:(long long)arg1 error:(id *)arg2;
- (void)destroyPlayerId:(long long)arg1 error:(id *)arg2;
- (void)createPlayerFinderLivePlayInfo:(FinderLivePlayInfo *)arg1 autoPlay:(_Bool)arg2 playOffset:(long long)arg3 completion:(void (^)(BizTLPlayerInfo *, FlutterError *))arg4;
@end

