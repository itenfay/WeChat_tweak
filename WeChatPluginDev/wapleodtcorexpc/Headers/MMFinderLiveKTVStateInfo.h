//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveKSKitMusicSong, MMFinderLiveKTVSongItem, MMLiveTask, NSString;
@protocol MMLiveUniqueTaskId;

@interface MMFinderLiveKTVStateInfo : NSObject
{
    _Bool _useVideo;
    _Bool _isPause;
    _Bool _disableScoreAdjust;
    _Bool _isSingerVoicing;
    _Bool _logWhenFree;
    _Bool _isCurrSingBySelf;
    _Bool _singerSelfVoicing;
    _Bool _isDirty;
    int _totalScore;
    int _realTimeScore;
    int _realTimeScoreSentenceIndex;
    int _ktvScoreEngineFlag;
    int _singerSelfVoicingCount;
    int _userStatusFlag;
    NSString *_currSongId;
    NSString *_currUniqueId;
    NSString *_currSingerUserId;
    NSString *_currSongName;
    long long _singState;
    NSString *_scoreLevelStr;
    NSString *_nextSongName;
    NSString *_nextSongId;
    MMFinderLiveKTVSongItem *_songItem;
    MMFinderLiveKSKitMusicSong *_songData;
    id <MMLiveUniqueTaskId> _taskId;
    unsigned long long _currSingerSelfVolumn;
}

+ (long long)transferPbSingStateToSingState:(int)arg1;
+ (int)transferSingStateToPbSingState:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isDirty; // @synthesize isDirty=_isDirty;
@property(nonatomic) unsigned long long currSingerSelfVolumn; // @synthesize currSingerSelfVolumn=_currSingerSelfVolumn;
@property(nonatomic) int userStatusFlag; // @synthesize userStatusFlag=_userStatusFlag;
@property(nonatomic) _Bool singerSelfVoicing; // @synthesize singerSelfVoicing=_singerSelfVoicing;
@property(nonatomic) int singerSelfVoicingCount; // @synthesize singerSelfVoicingCount=_singerSelfVoicingCount;
@property(retain, nonatomic) id <MMLiveUniqueTaskId> taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMFinderLiveKSKitMusicSong *songData; // @synthesize songData=_songData;
@property(retain, nonatomic) MMFinderLiveKTVSongItem *songItem; // @synthesize songItem=_songItem;
@property(nonatomic) _Bool isCurrSingBySelf; // @synthesize isCurrSingBySelf=_isCurrSingBySelf;
@property(nonatomic) _Bool logWhenFree; // @synthesize logWhenFree=_logWhenFree;
@property(nonatomic) int ktvScoreEngineFlag; // @synthesize ktvScoreEngineFlag=_ktvScoreEngineFlag;
@property(nonatomic) _Bool isSingerVoicing; // @synthesize isSingerVoicing=_isSingerVoicing;
@property(retain, nonatomic) NSString *nextSongId; // @synthesize nextSongId=_nextSongId;
@property(retain, nonatomic) NSString *nextSongName; // @synthesize nextSongName=_nextSongName;
@property(nonatomic) _Bool disableScoreAdjust; // @synthesize disableScoreAdjust=_disableScoreAdjust;
@property(nonatomic) _Bool isPause; // @synthesize isPause=_isPause;
@property(retain, nonatomic) NSString *scoreLevelStr; // @synthesize scoreLevelStr=_scoreLevelStr;
@property(nonatomic) int realTimeScoreSentenceIndex; // @synthesize realTimeScoreSentenceIndex=_realTimeScoreSentenceIndex;
@property(nonatomic) int realTimeScore; // @synthesize realTimeScore=_realTimeScore;
@property(nonatomic) int totalScore; // @synthesize totalScore=_totalScore;
@property(nonatomic) long long singState; // @synthesize singState=_singState;
@property(nonatomic) _Bool useVideo; // @synthesize useVideo=_useVideo;
@property(retain, nonatomic) NSString *currSongName; // @synthesize currSongName=_currSongName;
@property(retain, nonatomic) NSString *currSingerUserId; // @synthesize currSingerUserId=_currSingerUserId;
@property(retain, nonatomic) NSString *currUniqueId; // @synthesize currUniqueId=_currUniqueId;
@property(retain, nonatomic) NSString *currSongId; // @synthesize currSongId=_currSongId;
- (void)transferSEIUserStatus:(int)arg1 toKTVState:(id)arg2;
- (void)updateSEIKTVState:(id)arg1 ktvSeiData:(id)arg2;
- (void)onLiveSEIKTVStateSyncRecv:(id)arg1 ktvSeiData:(id)arg2 taskId:(id)arg3;
- (void)updateUserStatusFlagToSEIKTVState:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)volumeThreshold;
- (int)voicingCountThreshold;
@property(readonly, nonatomic) _Bool isCurrEndOrCancel;
@property(readonly, nonatomic) MMLiveTask *liveTask;
- (id)getKTVManageLogic;
- (_Bool)updateSongItem;
- (_Bool)updateNextSongName:(id)arg1;
- (_Bool)updateScoreLevelStr:(id)arg1;
- (_Bool)updateRealTimeScore:(int)arg1 sentenceIndex:(int)arg2;
- (_Bool)updateTotalScore:(int)arg1;
- (_Bool)isSingStateNeedCheck:(long long)arg1;
- (_Bool)updateScoreEngineFlag:(int)arg1;
- (_Bool)updateSingState:(long long)arg1 force:(_Bool)arg2;
- (_Bool)updateCurrSongName:(id)arg1;
- (_Bool)updateCurrSingerUserId:(id)arg1;
- (_Bool)updateDisableScoreAdjust:(_Bool)arg1;
- (_Bool)updateIsSingerVoicing:(_Bool)arg1;
- (_Bool)updateIsPause:(_Bool)arg1;
- (_Bool)updateUseVideo:(_Bool)arg1;
- (_Bool)updateCurrUniqueId:(id)arg1;
- (_Bool)updateCurrSongId:(id)arg1;
- (void)clearCaches;
- (void)clearDatas;
- (void)clearLastRecords;
- (void)tagDirty;
- (unsigned long long)getCurrSingerSelfVolumn;
- (_Bool)isSingingStart;
- (id)tranferToSEIKTVState;
- (void)checkSingerSelfIsVoicing:(id)arg1;
- (id)getSongItemWithUniqueId:(id)arg1;
- (void)updateCurrSongPauseActionState:(_Bool)arg1;
- (void)updateCurrSongSingerContact:(id)arg1;
- (void)updateCurrSongBasicInfo:(id)arg1;
- (void)recoverToUnSingState;
- (void)manualNotifyUpdateAfterSongBegin;
- (void)startSing:(id)arg1;
- (void)beginSong:(id)arg1;
- (id)genSnapShot;
- (void)updateNewState:(id)arg1 force:(_Bool)arg2;
- (void)updateNewState:(id)arg1;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

