//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TingPlayTaskListenerParentCpp
{
}

- (void)onPlayListRefresh:(id)arg1;
- (void)onLoadingStatusChanged:(int)arg1 loading:(_Bool)arg2;
- (void)onRecommendListSourceChanged:(id)arg1;
- (void)onPlayListTingItemUpdated:(id)arg1 newItem:(id)arg2;
- (void)onPlayListRecommendListSourceDisabled:(id)arg1;
- (void)onPlayListRecommendListSourceAvailable:(id)arg1 recommendListSource:(id)arg2;
- (void)onPlayListLoadMoreItems:(id)arg1 direction:(int)arg2;
- (void)onPlayListReloadItems:(id)arg1;
- (void)onPlayListTapeItemUpdated:(id)arg1;
- (void)onPlayListLoadMore:(id)arg1;
- (void)onPlayListLoad:(id)arg1;
- (void)onPlaylistChanged;
- (void)onMembershipInfoUpdated:(id)arg1;
- (void)onMembershipStatusChanged:(int)arg1 toStatus:(int)arg2;
- (void)onInactivated:(id)arg1 update:(_Bool)arg2;
- (void)onActivated:(id)arg1 taskId:(id)arg2 update:(_Bool)arg3;
- (void)onProgressChanged:(long long)arg1 displayTimeMs:(long long)arg2 duration:(long long)arg3;
- (void)onPlayInfoEvent:(id)arg1 event:(int)arg2 msg:(id)arg3;
- (void)onPlayEvent:(id)arg1 event:(int)arg2 msg:(id)arg3;
- (void)removePlayerStateClient:(id)arg1;
- (void)addPlayerStateClient:(id)arg1;
- (float)getPlayRate;
- (long long)getPlayerDownloadPercent;
- (long long)getPlayerDuration;
- (long long)getPlayerDisplayTimeMs;
- (long long)getPlayerPosition;
- (int)getPlayerState;
- (void)refreshPlayList;
- (_Bool)playBackgroundStatus;
- (void)setPlayBackgroundStatus:(_Bool)arg1;
- (void)checkUpdatePlayingItem;
- (void)stopWithContext:(id)arg1;
- (void)playWithList:(id)arg1 index:(int)arg2;
- (void)switchToMVContext:(id)arg1;
- (void)playWithContext:(id)arg1;
- (id)generateReportContext;
- (void)loadTaskServiceAsync:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)loadList:(id)arg1 index:(int)arg2;
- (void)loadTaskService:(id)arg1;
- (void)clear;
- (void)clearPlayTaskStateListener;
- (void)removePlayTaskStateListener:(id)arg1;
- (void)addWeakPlayTaskStateListener:(id)arg1;
- (void)addPlayTaskStateListener:(id)arg1;
- (void)restorePlayListInfo;
- (id)getTaskSnapshot;
- (id)getTapeInfo;
- (id)getPlayList;
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
- (id)getTimbre;
- (void)setTimbre:(id)arg1;
- (void)updateTingItem:(id)arg1;
- (void)setPlayRateGlobal:(float)arg1 inGlobal:(_Bool)arg2;
- (void)setPlayRate:(float)arg1;
- (void)seek:(long long)arg1;
- (void)passivePause;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)playWithId:(id)arg1;
- (void)play:(int)arg1;
- (void)loadItemWithIdAsync:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)loadItemWithId:(id)arg1;
- (void)loadItemAsync:(int)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)loadItem:(int)arg1;
- (id)playingContext;
- (id)playingTingItem;
- (id)playingItem;
- (int)playingIndex;
- (void)refreshMembershipOpenStatusIfNeeded;
- (void)updateTaskConfig:(id)arg1;
- (_Bool)getEnableAutoPlayRecommendList;
- (void)setEnableAutoPlayRecommendList:(_Bool)arg1 saveSettings:(_Bool)arg2;
- (void)setManualPreferredAudioQuality:(int)arg1;
- (id)getCurPlayingSupportAudioQualityList;
- (int)getCurPlayingAudioQuality;
- (void)setEnableSqQualityOnWwan:(_Bool)arg1;
- (int)getPreferredAudioQuality;
- (void)setPreferredAudioQuality:(int)arg1;
- (void)setEnableBackupItemFetching:(_Bool)arg1;
- (void)setAudioFocus:(id)arg1;
- (void)setAssociatedPlayerVolume:(float)arg1;
- (id)getPlayer;
- (void)setPlayer:(id)arg1;
- (id)getId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

