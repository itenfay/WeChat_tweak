//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAsset, EditVideoBGMPlayer, NSMutableArray, NSString, RecommendedMusicInfo;

@interface EditVideoMusicController
{
    _Bool _isBGMPlaying;
    NSString *_audioModuleIdentifier;
    AVAsset *_avAsset;
    unsigned long long _previousRequestId;
    NSMutableArray *_musicList;
    unsigned long long _entranceType;
    unsigned long long _preferDuration;
    RecommendedMusicInfo *_patMusicInfo;
    NSMutableArray *_previewImages;
    NSMutableArray *_images;
    EditVideoBGMPlayer *_bgmPlayer;
    NSMutableArray *_musicUpdateBlocks;
    CDUnknownBlockType _playerReadyToPlayBlock;
    CDUnknownBlockType _playerPlayToEndBlock;
    CDUnknownBlockType _playerTimeControlStatusChangeBlock;
}

+ (unsigned long long)musicBussidWithEntranceType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType playerTimeControlStatusChangeBlock; // @synthesize playerTimeControlStatusChangeBlock=_playerTimeControlStatusChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType playerPlayToEndBlock; // @synthesize playerPlayToEndBlock=_playerPlayToEndBlock;
@property(copy, nonatomic) CDUnknownBlockType playerReadyToPlayBlock; // @synthesize playerReadyToPlayBlock=_playerReadyToPlayBlock;
@property(retain, nonatomic) NSMutableArray *musicUpdateBlocks; // @synthesize musicUpdateBlocks=_musicUpdateBlocks;
@property(retain, nonatomic) EditVideoBGMPlayer *bgmPlayer; // @synthesize bgmPlayer=_bgmPlayer;
@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
@property(retain, nonatomic) NSMutableArray *previewImages; // @synthesize previewImages=_previewImages;
@property(retain, nonatomic) RecommendedMusicInfo *patMusicInfo; // @synthesize patMusicInfo=_patMusicInfo;
@property(nonatomic) unsigned long long preferDuration; // @synthesize preferDuration=_preferDuration;
@property(nonatomic) unsigned long long entranceType; // @synthesize entranceType=_entranceType;
@property(retain, nonatomic) NSMutableArray *musicList; // @synthesize musicList=_musicList;
@property(nonatomic) unsigned long long previousRequestId; // @synthesize previousRequestId=_previousRequestId;
@property(retain, nonatomic) AVAsset *avAsset; // @synthesize avAsset=_avAsset;
- (id)_getAudioModuleIdentifier;
- (void)_deactiveAudioModule;
- (void)_activeAudioModule;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)kvReportBgmDataWithMusicIndex:(unsigned long long)arg1 isMusicOn:(_Bool)arg2;
- (unsigned int)getNetWorkType;
- (void)onEditVideoBGMPlayerTimeControlStatusChange:(long long)arg1;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (void)onEditVideoBGMPlayerReadyToPlay;
- (void)addMusic:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replayMusic;
- (void)seekToTime:(double)arg1;
- (long long)currentPlayerTimeControlStatus;
- (double)currentPlayerItemDuration;
- (CDStruct_1b6d18a9)currentPlayerTime;
- (void)resumeIfNeed;
- (void)resume;
- (void)clearPlayer;
- (void)pause;
- (void)downloadMusic:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)playMusic:(id)arg1;
- (void)playMusicAtIndex:(unsigned long long)arg1;
- (void)processGetMusicsResp:(unsigned long long)arg1 andMusics:(id)arg2 play:(_Bool)arg3;
- (int)getMusicBusinessId;
- (void)playLocalMusic:(_Bool)arg1;
- (void)fetchMusicAutoPlay:(_Bool)arg1;
- (void)addMusicUpdateBlock:(CDUnknownBlockType)arg1;
- (id)initWithImages:(id)arg1;
- (id)initWithImageDataArray:(id)arg1;
- (id)initWithAvAsset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

