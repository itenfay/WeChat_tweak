//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "ITPLog-Protocol.h"
#import "ITPPlayerBase-Protocol.h"

@class TPPlaybackInfo, TPUrlDataSource, TPVideoInfo;
@protocol ITPPlayerAdapterDelegate, ITPRichMediaSynchronizer;

@protocol ITPPlayerAdapter <ITPPlayerBase, ITPLog>
@property(readonly, nonatomic) TPPlaybackInfo *playbackInfo;
@property(readonly, nonatomic) long long playerType;
@property(readonly, nonatomic) _Bool isPlaying;
@property(nonatomic) __weak id <ITPPlayerAdapterDelegate> adapterPlayerDelegate;
- (long long)getPlayerState;
- (void)setRichMediaSynchronizer:(id <ITPRichMediaSynchronizer>)arg1;
- (long long)reopenPlayer;
- (long long)forceStopPlayer;
- (long long)switchDefinitionWithUrlDataSource:(TPUrlDataSource *)arg1 definitionId:(long long)arg2 mode:(long long)arg3;
- (long long)switchDefinitionWithUrlDataSource:(TPUrlDataSource *)arg1 definitionId:(long long)arg2;
- (long long)setUrlDataSource:(TPUrlDataSource *)arg1;
- (long long)setVideoInfo:(TPVideoInfo *)arg1;
@end

