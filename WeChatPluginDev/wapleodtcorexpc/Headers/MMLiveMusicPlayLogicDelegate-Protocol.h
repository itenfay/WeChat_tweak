//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveMusicDataItem;

@protocol MMLiveMusicPlayLogicDelegate <NSObject>
- (void)onPlayMusicItemStoped:(MMLiveMusicDataItem *)arg1;
- (void)onPlayMusicItemResumed:(MMLiveMusicDataItem *)arg1;
- (void)onPlayMusicItemPaused:(MMLiveMusicDataItem *)arg1;
- (void)onPlayMusicItem:(MMLiveMusicDataItem *)arg1 completed:(long long)arg2;
- (void)onPlayMusicItem:(MMLiveMusicDataItem *)arg1 started:(long long)arg2;
- (void)onPlayMusicItemWillStart:(MMLiveMusicDataItem *)arg1;
@end

