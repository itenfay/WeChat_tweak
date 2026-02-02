//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderStreamProfileMusicPlaylist;

@protocol WCFinderStreamProfileMusicPlaylistPageDelegate <NSObject>
- (void)onPlayList:(WCFinderStreamProfileMusicPlaylist *)arg1 onLoadSuccess:(_Bool)arg2;
- (void)onPlayList:(WCFinderStreamProfileMusicPlaylist *)arg1 appendDataAtRange:(struct _NSRange)arg2;
@end

