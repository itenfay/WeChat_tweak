//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSMutableSet, NSString;

@interface HeartBeatMgr
{
    _Bool m_isStop;
    NSMutableSet *m_setRequestEventID;
    MMTimer *m_timer;
    unsigned long long m_checkTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long m_checkTime; // @synthesize m_checkTime;
@property(retain, nonatomic) MMTimer *m_timer; // @synthesize m_timer;
@property(retain, nonatomic) NSMutableSet *m_setRequestEventID; // @synthesize m_setRequestEventID;
@property(nonatomic) _Bool m_isStop; // @synthesize m_isStop;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onCheckTime;
- (void)stopTimer;
- (void)resetTimer;
- (void)handleResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)removeRequestEventID:(unsigned int)arg1;
- (_Bool)isLatestRequestEventID:(unsigned int)arg1;
- (void)addRequestEventID:(unsigned int)arg1;
- (void)stopRequest;
- (void)startRequest;
- (void)internalStop;
- (void)internalStart;
- (void)StopHeartBeat;
- (void)StartHeartBeat;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

