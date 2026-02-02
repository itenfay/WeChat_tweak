//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMVPlayer, MMMusicInfo, MMMusicPlayerErrInfo, MVPlayerTimeRange, NSString;

@protocol MMMVPlayerDelegate <NSObject>

@optional
- (_Bool)MVPlayer:(MMMVPlayer *)arg1 shouldForbidSetupLyricServiceWithSongid:(NSString *)arg2;
- (_Bool)mvPlayer:(MMMVPlayer *)arg1 shouldHandleFinishLoopTimeRange:(MVPlayerTimeRange *)arg2;
- (_Bool)mvPlayerShouldPlayVideo:(MMMVPlayer *)arg1;
- (void)mvPlayerOnLoadRecommendListFinish:(MMMVPlayer *)arg1;
- (void)mvPlayerShouldHideVideoBuffering:(MMMVPlayer *)arg1;
- (void)mvPlayerShouldShowVideoBuffering:(MMMVPlayer *)arg1;
- (void)MVPlayer:(MMMVPlayer *)arg1 didUpdateEpisodeIndexFrom:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)MVPlayer:(MMMVPlayer *)arg1 onInnerMusicStateChanged:(unsigned long long)arg2 musicInfo:(MMMusicInfo *)arg3 errorInfo:(MMMusicPlayerErrInfo *)arg4;
- (void)MVPlayer:(MMMVPlayer *)arg1 onMusicStateChanged:(unsigned long long)arg2 musicInfo:(MMMusicInfo *)arg3 errorInfo:(MMMusicPlayerErrInfo *)arg4;
- (void)MVPlayer:(MMMVPlayer *)arg1 onMusicDurationAvailable:(double)arg2;
- (void)MVPlayer:(MMMVPlayer *)arg1 onMusicProgressUpdate:(double)arg2 totalDuration:(double)arg3;
@end

