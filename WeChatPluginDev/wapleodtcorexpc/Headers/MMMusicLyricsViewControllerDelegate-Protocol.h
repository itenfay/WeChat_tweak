//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMMusicLyricsViewControllerDelegate <NSObject>
- (void)onSlideLyricsPanel:(_Bool)arg1;
- (void)onSlideLyricsViewAlbum:(_Bool)arg1;
- (void)onClickLyricsViewAlbum:(_Bool)arg1;
- (void)onSwitchToMMMusicLiveViewController:(_Bool)arg1;
- (void)onWillSwitchToMMMusicLiveViewController:(_Bool)arg1;

@optional
- (void)onMusicLyricDidSeekToTime:(double)arg1;
@end

