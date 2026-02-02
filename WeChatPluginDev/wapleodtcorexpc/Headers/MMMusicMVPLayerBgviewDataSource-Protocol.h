//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicMVPlayerBgView, MMMusicMVTrackItem, WCFinderDataItem;

@protocol MMMusicMVPLayerBgviewDataSource <NSObject>
- (_Bool)musicMVPlayerIsGetMvInfoFinish;
- (double)musicMVPlayerTrackPlayOffsetAtIndex:(unsigned long long)arg1;
- (MMMusicMVTrackItem *)musicMVPlayerTrackItemAtIndex:(unsigned long long)arg1;
- (long long)numberOfMusicMVTracks;

@optional
- (WCFinderDataItem *)musicPlayerBgView:(MMMusicMVPlayerBgView *)arg1 finderDataItemForTrack:(MMMusicMVTrackItem *)arg2;
@end

