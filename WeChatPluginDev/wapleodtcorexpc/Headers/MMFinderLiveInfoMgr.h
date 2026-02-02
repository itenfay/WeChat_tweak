//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, OrderedDictionary;

@interface MMFinderLiveInfoMgr
{
    _Bool _isInBackground;
    OrderedDictionary *_liveInfoWrapDict;
    NSMutableDictionary *_fetchLiveActivityFinderDataItemDict;
    double _nextFetchLiveActivityInterval;
    NSMutableDictionary *_fetchNavLiveHomePageDataItemDict;
    double _nextFetchNavLiveHomePageStatusInterval;
    OrderedDictionary *_cachedAudioRoomBackgroundImageInfoDict;
    NSMutableDictionary *_waitResultAudioRoomBackgroundImageInfoDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *waitResultAudioRoomBackgroundImageInfoDict; // @synthesize waitResultAudioRoomBackgroundImageInfoDict=_waitResultAudioRoomBackgroundImageInfoDict;
@property(retain, nonatomic) OrderedDictionary *cachedAudioRoomBackgroundImageInfoDict; // @synthesize cachedAudioRoomBackgroundImageInfoDict=_cachedAudioRoomBackgroundImageInfoDict;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(nonatomic) double nextFetchNavLiveHomePageStatusInterval; // @synthesize nextFetchNavLiveHomePageStatusInterval=_nextFetchNavLiveHomePageStatusInterval;
@property(retain, nonatomic) NSMutableDictionary *fetchNavLiveHomePageDataItemDict; // @synthesize fetchNavLiveHomePageDataItemDict=_fetchNavLiveHomePageDataItemDict;
@property(nonatomic) double nextFetchLiveActivityInterval; // @synthesize nextFetchLiveActivityInterval=_nextFetchLiveActivityInterval;
@property(retain, nonatomic) NSMutableDictionary *fetchLiveActivityFinderDataItemDict; // @synthesize fetchLiveActivityFinderDataItemDict=_fetchLiveActivityFinderDataItemDict;
@property(retain, nonatomic) OrderedDictionary *liveInfoWrapDict; // @synthesize liveInfoWrapDict=_liveInfoWrapDict;
- (id)getAudioRoomBackgroundImageInfoWithOriginalUrlString:(id)arg1;
- (void)updateAudioRoomBackgroundImage:(id)arg1 audioWaveColor:(id)arg2 originalUrlString:(id)arg3;
- (void)markStartCalcAudioRoomBackgroundImageWithOriginalUrlString:(id)arg1;
- (void)updateFinderLiveStreamTypeInfoWithMicSEIMsg:(id)arg1 isAudioMode:(_Bool)arg2 andTid:(id)arg3;
- (void)updateFinderLiveStreamTypeInfo:(id)arg1 withTid:(id)arg2;
- (id)getFinderLiveStreamTypeInfoByTid:(id)arg1 withLiveInfo:(id)arg2;
- (id)generateFinderLiveStreamTypeInfoWithLiveInfo:(id)arg1;
- (void)updateFinderNavLiveHomePageStatus:(id)arg1 withTid:(id)arg2;
- (void)batchGetNavLiveStatus;
- (void)unregisterFetchAllNavLiveHomePageStatus;
- (id)allRegisteredFetchNavLiveHomePageStatusDataItems;
- (void)delayBatchGetNavLiveStatus;
- (void)unregisterFetchNavLiveHomePageStatusWithFinderDataItem:(id)arg1;
- (void)registerFetchNavLiveHomePageStatusWithFinderDataItem:(id)arg1;
- (void)batchGetLiveActivity;
- (id)allRegisteredFetchLiveActivityDataItems;
- (void)delayBatchGetLiveActivity;
- (void)unregisterFetchLiveActivityWithFinderDataItem:(id)arg1;
- (void)registerFetchLiveActivityWithFinderDataItem:(id)arg1;
- (unsigned long long)getFinderLiveActivityTypeByTid:(id)arg1;
- (void)markFinderLiveEndWithTid:(id)arg1;
- (void)markFinderLiveEndWithObjectId:(unsigned long long)arg1;
- (void)updateFinderLiveActivityType:(id)arg1 withTid:(id)arg2;
- (void)updateFinderLiveActivityType:(id)arg1 withObjectId:(unsigned long long)arg2;
- (unsigned long long)getFinderLiveActivityTypeFromList:(id)arg1;
- (void)updateFinderLiveInfo:(id)arg1 withTid:(id)arg2 updateActivityType:(_Bool)arg3;
- (void)updateFinderLiveInfo:(id)arg1 withTid:(id)arg2;
- (void)updateFinderLiveInfo:(id)arg1 withObjectId:(unsigned long long)arg2;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

