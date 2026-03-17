//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicInfo, MMMusicPlayerErrInfo, NSString, UIImage;

@protocol IMusicPlayerExt <NSObject>

@optional
- (void)onMusicInfoUpdated;
- (void)onStopMusicListPlay;
- (void)onDataBuffering:(double)arg1;
- (void)OnUpdateDuarationOnForeGround;
- (void)OnGetSongAlbumUrl:(MMMusicInfo *)arg1 AlbumUrl:(NSString *)arg2;
- (void)onAlbumImageChanged:(MMMusicInfo *)arg1 AlbumImage:(UIImage *)arg2;
- (void)onLyricsChanged:(MMMusicInfo *)arg1 Lyrics:(NSString *)arg2;
- (void)onLevelMeterPeak:(float)arg1;
- (void)onPlayPreviousMusic;
- (void)onPlayNextMusic;
- (void)onPlayMusic:(MMMusicInfo *)arg1 fromScene:(long long)arg2;
- (void)prepareForMusicPlay:(MMMusicInfo *)arg1;
- (void)onMusicWillBePreempted:(MMMusicInfo *)arg1 byNewMusicInfo:(MMMusicInfo *)arg2;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(MMMusicInfo *)arg2 errInfo:(MMMusicPlayerErrInfo *)arg3;
- (void)onMusicPlayStatusChanged;
@end

