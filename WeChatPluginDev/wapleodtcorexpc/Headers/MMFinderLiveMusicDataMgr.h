//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface MMFinderLiveMusicDataMgr
{
    _Bool _hasMusicInfo;
    _Bool _recentSynchronizeResult;
    unsigned long long _allMusicDataCount;
    NSMutableArray *_musicSourceDataArray;
    NSMutableArray *_briefMusicInfos;
}

+ (_Bool)isEqualBetween:(id)arg1 with:(id)arg2;
+ (_Bool)isArray:(id)arg1 equalArray:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool recentSynchronizeResult; // @synthesize recentSynchronizeResult=_recentSynchronizeResult;
@property(nonatomic) _Bool hasMusicInfo; // @synthesize hasMusicInfo=_hasMusicInfo;
@property(retain, nonatomic) NSMutableArray *briefMusicInfos; // @synthesize briefMusicInfos=_briefMusicInfos;
@property(retain, nonatomic) NSMutableArray *musicSourceDataArray; // @synthesize musicSourceDataArray=_musicSourceDataArray;
@property(nonatomic) unsigned long long allMusicDataCount; // @synthesize allMusicDataCount=_allMusicDataCount;
- (void)innerSynchronizeSongIdArrayWithTaskIdDelay:(id)arg1;
- (void)notifyAllDataCountChanged;
- (void)synchronizeSongIdArrayWithTaskId:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *currentSongIdCopyArr;
@property(readonly, nonatomic) long long currentMusicDataState;
- (_Bool)isMusicDataItemContain:(id)arg1;
- (void)synchronizeBriefMusicInfos:(id)arg1 withTaskId:(id)arg2;
- (void)deleteBriefMusicInfo:(id)arg1 atIndex:(unsigned long long)arg2 withTaskId:(id)arg3;
- (void)insertBriefMusicInfo:(id)arg1 atIndex:(unsigned long long)arg2 withTaskId:(id)arg3;
- (_Bool)containsBriefMusicInfo:(id)arg1;
- (void)getMusicDataListWithSongIdArray:(id)arg1 briefMusicInfo:(id)arg2 taskId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)getMusicDataListFromIndex:(unsigned long long)arg1 limitCount:(unsigned long long)arg2 taskId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateFinderLiveBaseMusicInfo:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

