//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TingItem, TingPlayModel, TingPlayTaskStopContext, TingPlayerContext, TingPlayerDisplayElement, TingPlayingInfo, TingReportContext, TingTapeItem;

@protocol TingFlowPlayerProtocol <NSObject>
@property(nonatomic) _Bool enableAutoPlayRecommendList;
@property(readonly, nonatomic) TingPlayerDisplayElement *currentDisplayElement;
@property(readonly, nonatomic) long long playListCount;
@property(readonly, nonatomic) long long currentIndex;
@property(readonly, nonatomic) TingPlayerContext *playingContext;
@property(readonly, nonatomic) TingItem *currentItem;
@property(nonatomic) float playRate;
@property(readonly, nonatomic) int status;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double displayTime;
@property(readonly, nonatomic) double currentTime;
@property(nonatomic) _Bool isDissociative;
@property(nonatomic) _Bool isIsolateModule;
@property(readonly, nonatomic) _Bool isPlayModeInteractionEnabled;
@property(readonly, nonatomic) _Bool shuffled;
@property(readonly, nonatomic) int playMode;
@property(readonly, nonatomic) unsigned int playerId;
- (void)setPlayRate:(double)arg1 needSave:(_Bool)arg2;
- (void)setShuffled:(_Bool)arg1 saveSettings:(_Bool)arg2;
- (void)setPlayMode:(int)arg1 saveSettings:(_Bool)arg2;
- (void)setDisableSyncPlayRecord:(_Bool)arg1;
- (void)setEnableBackupItemFetching:(_Bool)arg1;
- (void)refreshMembershipOpenStatusIfNeeded;
- (void)setEnableSqQualityOnWwan:(_Bool)arg1;
- (int)getPreferredAudioQuality;
- (void)setPreferredAudioQuality:(int)arg1;
- (TingReportContext *)reportContext;
- (TingPlayingInfo *)currentPlayingInfo;
- (void)switchToMVContext:(TingPlayerContext *)arg1;
- (void)playWithContext:(TingPlayerContext *)arg1;
- (TingTapeItem *)tapeItem;
- (_Bool)isPlayRateSupported;
- (void)playNextItemOrTape;
- (_Bool)playNext;
- (_Bool)canPlayNext;
- (void)playPreviousOrSeekToStartPos;
- (_Bool)playPrevious;
- (_Bool)canPlayPrevious;
- (void)clear;
- (void)seek:(double)arg1;
- (_Bool)canSeek;
- (void)resume;
- (void)passivePause;
- (void)pause;
- (void)stopWithContext:(TingPlayTaskStopContext *)arg1;
- (void)stop;
- (void)play;
- (void)playWithIndex:(long long)arg1;
- (void)playWithModel:(TingPlayModel *)arg1;
- (void)loadWithModel:(TingPlayModel *)arg1;
- (_Bool)hasTapeLoaded;

@optional
- (void)refreshPlayList;
- (void)updatePlayingItem:(TingItem *)arg1;
@end

