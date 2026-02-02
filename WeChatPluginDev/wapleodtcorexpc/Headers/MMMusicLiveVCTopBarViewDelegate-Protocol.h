//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicLiveVCTopBarView, MusicLiveGetSongStatusResp_MusicianInfo, MusicSourceViewInfo, NSString, UIImage;

@protocol MMMusicLiveVCTopBarViewDelegate <NSObject>
- (_Bool)isChannelMusic;
- (void)onTopBarJumpMusician:(MusicLiveGetSongStatusResp_MusicianInfo *)arg1;
- (void)onClickAudioTypeButton;
- (MusicSourceViewInfo *)onMusicLiveTopBarViewRequestSourceViewInfo:(MMMusicLiveVCTopBarView *)arg1;
- (NSString *)requestGetAppName;
- (UIImage *)requestGetAppIconImageWithSize:(struct CGSize)arg1;
- (void)onTopBarOpenApp;
- (void)onTopBarOpenMusicInfoHalfScreen;
- (void)onTopBarTappedBack;
@end

