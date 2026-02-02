//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface MMFinderLiveSongDataMgr
{
    _Bool _hasMusicInfo;
    int _lastHeartRandomValue;
    unsigned long long _allMusicDataCount;
    long long _currentMusicDataState;
    unsigned long long _currSyncronizeSeq;
    NSMutableDictionary *_blockSongMap;
}

+ (void)setupOrderSongCommentDataItem:(id)arg1 taskId:(id)arg2 clipSongNameToAdpated:(_Bool)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *blockSongMap; // @synthesize blockSongMap=_blockSongMap;
@property(nonatomic) unsigned long long currSyncronizeSeq; // @synthesize currSyncronizeSeq=_currSyncronizeSeq;
@property(nonatomic) _Bool hasMusicInfo; // @synthesize hasMusicInfo=_hasMusicInfo;
@property(nonatomic) int lastHeartRandomValue; // @synthesize lastHeartRandomValue=_lastHeartRandomValue;
@property(readonly, nonatomic) long long currentMusicDataState; // @synthesize currentMusicDataState=_currentMusicDataState;
@property(readonly, nonatomic) unsigned long long allMusicDataCount; // @synthesize allMusicDataCount=_allMusicDataCount;
- (unsigned long long)genCurrentTimestampSeq;
- (void)updateLiveSongSingingStateWithFinderTaskId:(id)arg1 songName:(id)arg2 state:(_Bool)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;
- (void)synchronizeMusicDataList:(id)arg1 taskId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getMusicDataListWithTaskId:(id)arg1 audience:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)uniqueKeyForTask:(id)arg1;
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

