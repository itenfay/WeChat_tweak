//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSMutableSet, NSString;

@interface WAProfileService
{
    unsigned int _lastStayDuration;
    _Bool _localDataLoaded;
    NSMutableDictionary *_dicUserName2LastForegroundTime;
    NSMutableSet *_setAppID2PlayedAudio;
    NSMutableDictionary *_userName2ProfileResponse;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool localDataLoaded; // @synthesize localDataLoaded=_localDataLoaded;
@property(retain, nonatomic) NSMutableDictionary *userName2ProfileResponse; // @synthesize userName2ProfileResponse=_userName2ProfileResponse;
@property(retain, nonatomic) NSMutableSet *setAppID2PlayedAudio; // @synthesize setAppID2PlayedAudio=_setAppID2PlayedAudio;
@property(retain, nonatomic) NSMutableDictionary *dicUserName2LastForegroundTime; // @synthesize dicUserName2LastForegroundTime=_dicUserName2LastForegroundTime;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)onUpdateProfileEvaluate:(id)arg1;
- (_Bool)updateProfileEvaluateForUserName:(id)arg1 OperType:(int)arg2 RatingValue:(double)arg3;
- (_Bool)updateProfileLikeStatusForUserName:(id)arg1 myselfLike:(_Bool)arg2;
- (_Bool)skipProfileEvaluateForUserName:(id)arg1;
- (_Bool)updateProfileEvaluateForUserName:(id)arg1 RatingValue:(double)arg2;
- (void)onGameEvaluateResponse:(id)arg1;
- (_Bool)submitGameEvaluateResult:(_Bool)arg1 QuestionId:(id)arg2 ChoseOption:(unsigned int)arg3 AppId:(id)arg4 Config:(id)arg5;
- (void)onFetchProfileBaseInfo:(id)arg1;
- (_Bool)updateProfileInfoForUserName:(id)arg1 parameter:(id)arg2;
- (_Bool)canPopEvaluateDueToMinStayTime:(unsigned int)arg1 UserName:(id)arg2;
- (void)updateForegroundTimeForUserName:(id)arg1;
- (void)updateGameUsedAudio:(id)arg1;
- (id)getLocalProfileInfoForUserName:(id)arg1;
- (id)getLocalProfileInfoDictionaryForUserName:(id)arg1;
- (_Bool)saveDataToCacheFile:(id)arg1 Path:(id)arg2;
- (_Bool)loadDataFromFile:(id)arg1 ToClass:(Class)arg2 ToData:(id *)arg3;
- (void)onWeAppItemDeleted:(id)arg1;
- (void)saveResponse:(id)arg1 Response:(id)arg2;
- (void)loadCacheData;
- (id)getEvaluteWordingForScore:(int)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

