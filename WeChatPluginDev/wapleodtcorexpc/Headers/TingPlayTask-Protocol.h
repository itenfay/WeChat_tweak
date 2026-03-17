//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "TingPlayerStateClient-Protocol.h"
#import "TingPlayerStateService-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSArray, NSData, NSString, TingItem, TingPlayTaskConfig, TingPlayTaskStopContext, TingPlayerContext, TingReportContext, TingTTSPlayCtx;
@protocol TingAudioFocus, TingPlayList, TingPlayTaskService, TingPlayTaskStateListener, TingPlayer;

@protocol TingPlayTask <NSObject, UnitRCBaseProtocol, TingPlayerStateService, TingPlayerStateClient>
- (void)refreshPlayList;
- (_Bool)playBackgroundStatus;
- (void)setPlayBackgroundStatus:(_Bool)arg1;
- (void)checkUpdatePlayingItem;
- (void)stopWithContext:(TingPlayTaskStopContext *)arg1;
- (void)playWithList:(id <TingPlayTaskService>)arg1 index:(int)arg2;
- (void)switchToMVContext:(TingPlayerContext *)arg1;
- (void)playWithContext:(TingPlayerContext *)arg1;
- (TingReportContext *)generateReportContext;
- (void)loadTaskServiceAsync:(id <TingPlayTaskService>)arg1 callback:(void (^)(void))arg2;
- (void)loadList:(id <TingPlayTaskService>)arg1 index:(int)arg2;
- (void)loadTaskService:(id <TingPlayTaskService>)arg1;
- (void)clear;
- (void)clearPlayTaskStateListener;
- (void)removePlayTaskStateListener:(id <TingPlayTaskStateListener>)arg1;
- (void)addWeakPlayTaskStateListener:(id <TingPlayTaskStateListener>)arg1;
- (void)addPlayTaskStateListener:(id <TingPlayTaskStateListener>)arg1;
- (void)restorePlayListInfo;
- (NSData *)getTaskSnapshot;
- (NSData *)getTapeInfo;
- (id <TingPlayList>)getPlayList;
- (_Bool)getRandomPlaylist;
- (void)setRandomPlaylist:(_Bool)arg1 saveSetting:(_Bool)arg2;
- (_Bool)isPlayModeInteractionEnabled;
- (int)getPlayMode;
- (void)setPlayMode:(int)arg1 saveSetting:(_Bool)arg2;
- (_Bool)hasNext;
- (void)nextItemOrTape;
- (void)next;
- (_Bool)hasPrev;
- (void)prev;
- (TingTTSPlayCtx *)getTimbre;
- (void)setTimbre:(TingTTSPlayCtx *)arg1;
- (void)updateTingItem:(TingItem *)arg1;
- (void)setPlayRateGlobal:(float)arg1 inGlobal:(_Bool)arg2;
- (void)setPlayRate:(float)arg1;
- (void)seek:(long long)arg1;
- (void)passivePause;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)playWithId:(NSString *)arg1;
- (void)play:(int)arg1;
- (void)loadItemWithIdAsync:(NSString *)arg1 callback:(void (^)(_Bool))arg2;
- (_Bool)loadItemWithId:(NSString *)arg1;
- (void)loadItemAsync:(int)arg1 callback:(void (^)(_Bool))arg2;
- (_Bool)loadItem:(int)arg1;
- (TingPlayerContext *)playingContext;
- (TingItem *)playingTingItem;
- (NSData *)playingItem;
- (int)playingIndex;
- (void)refreshMembershipOpenStatusIfNeeded;
- (void)updateTaskConfig:(TingPlayTaskConfig *)arg1;
- (_Bool)getEnableAutoPlayRecommendList;
- (void)setEnableAutoPlayRecommendList:(_Bool)arg1 saveSettings:(_Bool)arg2;
- (void)setManualPreferredAudioQuality:(int)arg1;
- (NSArray *)getCurPlayingSupportAudioQualityList;
- (int)getCurPlayingAudioQuality;
- (void)setEnableSqQualityOnWwan:(_Bool)arg1;
- (int)getPreferredAudioQuality;
- (void)setPreferredAudioQuality:(int)arg1;
- (void)setEnableBackupItemFetching:(_Bool)arg1;
- (void)setAudioFocus:(id <TingAudioFocus>)arg1;
- (void)setAssociatedPlayerVolume:(float)arg1;
- (id <TingPlayer>)getPlayer;
- (void)setPlayer:(id <TingPlayer>)arg1;
- (NSString *)getId;
@end

