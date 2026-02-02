//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol IRemoteControlMusicPlayerExt

@optional
- (void)onRemoteControlMusicShouldPlayPrevTrack;
- (void)onRemoteControlMusicShouldPlayNextTrack;
- (void)onRemoteControlMusicShouldStop;
- (void)onRemoteControlMusicShouldPlayOrPause;
- (void)onRemoteControlMusicShouldPauseByMannual:(_Bool)arg1;
- (void)onRemoteControlMusicShouldPlay;
@end

