//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveKTVSongItem, MMFinderLiveKTVStateInfo, NSString;
@protocol MMLiveUniqueTaskId;

@protocol MMFinderLiveKTVStateExt <NSObject>

@optional
- (void)onLiveTaskId:(id <MMLiveUniqueTaskId>)arg1 ktvState:(MMFinderLiveKTVStateInfo *)arg2 pauseActionStateUpdated:(MMFinderLiveKTVSongItem *)arg3;
- (void)onLiveTaskId:(id <MMLiveUniqueTaskId>)arg1 ktvState:(MMFinderLiveKTVStateInfo *)arg2 nextSongNameUpdated:(NSString *)arg3;
- (void)onLiveTaskId:(id <MMLiveUniqueTaskId>)arg1 ktvState:(MMFinderLiveKTVStateInfo *)arg2 disableScoreAdjustChanged:(_Bool)arg3;
- (void)onLiveTaskId:(id <MMLiveUniqueTaskId>)arg1 ktvState:(MMFinderLiveKTVStateInfo *)arg2 singerVoicingChanged:(_Bool)arg3;
- (void)onLiveTaskId:(id <MMLiveUniqueTaskId>)arg1 ktvState:(MMFinderLiveKTVStateInfo *)arg2 pauseChanged:(_Bool)arg3;
- (void)onLiveTaskId:(id <MMLiveUniqueTaskId>)arg1 ktvState:(MMFinderLiveKTVStateInfo *)arg2 scoreLevelStrChanged:(NSString *)arg3;
- (void)onLiveTaskId:(id <MMLiveUniqueTaskId>)arg1 ktvState:(MMFinderLiveKTVStateInfo *)arg2 realTimeScoreChanged:(int)arg3 sentenceIndex:(int)arg4;
- (void)onLiveTaskId:(id <MMLiveUniqueTaskId>)arg1 ktvState:(MMFinderLiveKTVStateInfo *)arg2 totalScoreChanged:(int)arg3;
- (void)onLiveTaskId:(id <MMLiveUniqueTaskId>)arg1 ktvState:(MMFinderLiveKTVStateInfo *)arg2 useVideoChanged:(_Bool)arg3;
- (void)onLiveTaskId:(id <MMLiveUniqueTaskId>)arg1 ktvState:(MMFinderLiveKTVStateInfo *)arg2 singerContactUpdated:(MMFinderLiveKTVSongItem *)arg3;
- (void)onLiveTaskId:(id <MMLiveUniqueTaskId>)arg1 ktvState:(MMFinderLiveKTVStateInfo *)arg2 songItemBasicInfoUpdated:(MMFinderLiveKTVSongItem *)arg3;
- (void)onLiveTaskId:(id <MMLiveUniqueTaskId>)arg1 ktvState:(MMFinderLiveKTVStateInfo *)arg2 songItemUpdated:(MMFinderLiveKTVSongItem *)arg3;
- (void)onLiveTaskId:(id <MMLiveUniqueTaskId>)arg1 ktvState:(MMFinderLiveKTVStateInfo *)arg2 songNameUpdated:(NSString *)arg3;
- (void)onLiveTaskId:(id <MMLiveUniqueTaskId>)arg1 ktvState:(MMFinderLiveKTVStateInfo *)arg2 singerUserIdChanged:(NSString *)arg3;
- (void)onLiveTaskId:(id <MMLiveUniqueTaskId>)arg1 ktvState:(MMFinderLiveKTVStateInfo *)arg2 uniqueIdChanged:(NSString *)arg3;
- (void)onLiveTaskId:(id <MMLiveUniqueTaskId>)arg1 ktvState:(MMFinderLiveKTVStateInfo *)arg2 songIdChanged:(NSString *)arg3;
- (void)onLiveTaskId:(id <MMLiveUniqueTaskId>)arg1 ktvState:(MMFinderLiveKTVStateInfo *)arg2 singStateChanged:(long long)arg3;
@end

