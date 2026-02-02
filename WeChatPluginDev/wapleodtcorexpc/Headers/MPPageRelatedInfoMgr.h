//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, MemoryMappedKV, NSMutableArray, NSMutableSet, NSString, WCEliminatedSlotMMKV;

@interface MPPageRelatedInfoMgr
{
    unsigned int _refreshIntervalSec;
    unsigned int _maxRequestUrlCount;
    WCEliminatedSlotMMKV *_relatedInfoSlotMMKV;
    WCEliminatedSlotMMKV *_url2LastUpdateTimeSlotMMKV;
    MemoryMappedKV *_mappedKV;
    NSMutableArray *_currentTaskArr;
    NSMutableArray *_waitingUrlInfoQueue;
    NSMutableSet *_waitingPageIdentifierSet;
    MMTimer *_timer;
}

- (void).cxx_destruct;
@property(retain) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableSet *waitingPageIdentifierSet; // @synthesize waitingPageIdentifierSet=_waitingPageIdentifierSet;
@property(retain, nonatomic) NSMutableArray *waitingUrlInfoQueue; // @synthesize waitingUrlInfoQueue=_waitingUrlInfoQueue;
@property(retain, nonatomic) NSMutableArray *currentTaskArr; // @synthesize currentTaskArr=_currentTaskArr;
@property(nonatomic) unsigned int maxRequestUrlCount; // @synthesize maxRequestUrlCount=_maxRequestUrlCount;
@property(nonatomic) unsigned int refreshIntervalSec; // @synthesize refreshIntervalSec=_refreshIntervalSec;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
@property(retain, nonatomic) WCEliminatedSlotMMKV *url2LastUpdateTimeSlotMMKV; // @synthesize url2LastUpdateTimeSlotMMKV=_url2LastUpdateTimeSlotMMKV;
@property(retain, nonatomic) WCEliminatedSlotMMKV *relatedInfoSlotMMKV; // @synthesize relatedInfoSlotMMKV=_relatedInfoSlotMMKV;
- (void)handleRelatedInfoArrSuccess:(id)arg1;
- (void)saveRequestConfigToMMKV:(unsigned int)arg1 maxRequestUrlCount:(unsigned int)arg2;
- (void)sendRequestToSvr:(id)arg1;
- (void)removeUrlInfoFromWaitingQueue:(id)arg1 urlInfoIdentifier:(id)arg2;
- (void)addUrlInfoToWaitingQueue:(id)arg1 urlInfoIdentifier:(id)arg2;
- (_Bool)isExistInWaitingQueueOrRequestingQueue:(id)arg1;
- (void)checkWaitingQueue;
- (void)stopTimer;
- (void)fireTimerIfNeed;
- (_Bool)tryAddUrlInfoToWaitingQueue:(id)arg1 relatedInfo:(id)arg2;
- (_Bool)isUrlRequestExpired:(id)arg1;
- (_Bool)isRelatedInfoExpired:(id)arg1;
- (id)tryloadLocalRelatedInfo:(id)arg1;
- (_Bool)checkUrlValid:(id)arg1;
- (void)clearAllData;
- (void)initData;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)clearAllRelatedInfo;
- (id)getAndCheckUpdateMPPageRelatedInfoWithUrlInfoArr:(id)arg1;
- (id)getLocalMPPageRelatedInfoWithUrlInfo:(id)arg1;
- (id)MPPageIdentityWithUrlAndReturnNilIfNotHave:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

