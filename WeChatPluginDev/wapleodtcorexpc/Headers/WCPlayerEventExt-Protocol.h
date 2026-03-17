//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CdnComVideoProcessInfo, CdnDownloadTaskInfo, WCDownloadArgsWrap, WCPlayerView;

@protocol WCPlayerEventExt <NSObject>

@optional
- (void)onPlayerViewRestoreUserInterfaceForPictureInPictureStop:(WCPlayerView *)arg1;
- (void)onPlayerView:(WCPlayerView *)arg1 pictureInPictureStateDidChange:(long long)arg2;
- (void)onPlayerSwitchDataSource:(WCDownloadArgsWrap *)arg1;
- (void)onPlayerDownloadStop:(WCDownloadArgsWrap *)arg1 downloadInfo:(CdnDownloadTaskInfo *)arg2;
- (void)onPlayerDownloadComplete:(WCDownloadArgsWrap *)arg1 downloadInfo:(CdnDownloadTaskInfo *)arg2;
- (void)onPlayerDownloadProgress:(WCDownloadArgsWrap *)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onPlayerDownloadMoovReady:(WCDownloadArgsWrap *)arg1 progressInfo:(CdnComVideoProcessInfo *)arg2;
- (void)onPlayerDownloadStartFail:(int)arg1 argsWrap:(WCDownloadArgsWrap *)arg2;
- (void)onPlayerStartDownload:(WCDownloadArgsWrap *)arg1;
- (void)onMuteForExternalPlaybackMode:(WCPlayerView *)arg1;
- (void)onPlayer:(WCPlayerView *)arg1 muteChanged:(_Bool)arg2;
- (void)onPlayerPausePlay:(WCPlayerView *)arg1;
- (void)onPlayerStartPlay:(WCPlayerView *)arg1;
@end

