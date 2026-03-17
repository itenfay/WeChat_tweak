//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CBaseContact, NSString, WCNetworkMediaPlayer;

@protocol WCNetworkMediaPlayerDelegate <NSObject>
- (void)onClosePlayer;

@optional
- (void)onMediaPlayer:(WCNetworkMediaPlayer *)arg1 playerStateChange:(long long)arg2;
- (_Bool)needHiddenMoreMenu;
- (void)onShareVideoToTimeline:(_Bool)arg1;
- (void)onCancelShareVideoToFriend;
- (void)onShareVideoToFriend:(CBaseContact *)arg1;
- (void)onClickFavVideoMenu;
- (void)willAnimateRotation:(_Bool)arg1;
- (void)onClosePlayerForViewDetail:(NSString *)arg1;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (void)onEndPlayer;
- (void)onPausePlayer;
- (void)onStartPlayer;
@end

