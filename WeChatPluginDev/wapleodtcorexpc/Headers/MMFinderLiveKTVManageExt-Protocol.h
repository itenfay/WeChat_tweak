//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveKtvPlayerWaitListInfo, NSArray, NSString;
@protocol MMLiveUniqueTaskId;

@protocol MMFinderLiveKTVManageExt <NSObject>

@optional
- (void)onLiveKTVSingerHeatValueUpdate:(unsigned long long)arg1 singSdkUserId:(NSString *)arg2 taskId:(id <MMLiveUniqueTaskId>)arg3;
- (void)onLiveKTVPlayerWaitListInfoUpdate:(MMFinderLiveKtvPlayerWaitListInfo *)arg1 source:(long long)arg2 taskId:(id <MMLiveUniqueTaskId>)arg3;
- (void)onLiveKTVFirstSongVersionUpdate:(unsigned int)arg1 pendingSongs:(NSArray *)arg2 source:(long long)arg3 taskId:(id <MMLiveUniqueTaskId>)arg4;
- (void)onLiveKTVPendingSongItemsUpdate:(NSArray *)arg1 source:(long long)arg2 taskId:(id <MMLiveUniqueTaskId>)arg3;
@end

