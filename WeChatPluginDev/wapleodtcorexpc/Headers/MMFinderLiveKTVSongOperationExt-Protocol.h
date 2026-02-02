//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveKTVSongItem, MMFinderLiveTaskId;

@protocol MMFinderLiveKTVSongOperationExt <NSObject>

@optional
- (void)onLiveKTVSongOperationRequestSongBlockedWithType:(unsigned long long)arg1 taskId:(MMFinderLiveTaskId *)arg2;
- (void)onLiveKTVSongOperationRequestSongBlockedAndDismissPanel;
- (void)onLiveKTVSongOperationNotifyStartSingCurrentSong;
- (void)onRequestSongItemReturned:(MMFinderLiveKTVSongItem *)arg1 success:(_Bool)arg2;
@end

