//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderMusicPlaylistTabPageModel;

@protocol WCFinderStreamProfileMusicPlaylistDelegate <NSObject>
- (void)onPlayList:(WCFinderMusicPlaylistTabPageModel *)arg1 onLoadSuccess:(_Bool)arg2;
- (void)onPlayListBeginFetchData:(WCFinderMusicPlaylistTabPageModel *)arg1;
@end

