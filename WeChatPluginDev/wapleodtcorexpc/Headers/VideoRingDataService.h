//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString, RingToneDetail, VideoRingDataBase, VideoRingNetProvider;

@interface VideoRingDataService
{
    _Bool _shouldOpenRingBackSwitch;
    _Bool _needReportCallKitRing;
    _Bool _needReportVoipPushRing;
    _Bool _listenedNewRingBackFlag;
    VideoRingDataBase *_db;
    NSString *_sessionID;
    unsigned long long _sessionChannel;
    RingToneDetail *_currentSetRing;
    unsigned long long _scene;
    unsigned long long _feedType;
    VideoRingDataBase *_dataBase;
    NSMutableSet *_requestedVibrateFileIDSet;
    VideoRingNetProvider *_provider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VideoRingNetProvider *provider; // @synthesize provider=_provider;
@property(retain, nonatomic) NSMutableSet *requestedVibrateFileIDSet; // @synthesize requestedVibrateFileIDSet=_requestedVibrateFileIDSet;
@property(retain, nonatomic) VideoRingDataBase *dataBase; // @synthesize dataBase=_dataBase;
@property(nonatomic) unsigned long long feedType; // @synthesize feedType=_feedType;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) RingToneDetail *currentSetRing; // @synthesize currentSetRing=_currentSetRing;
@property(nonatomic) unsigned long long sessionChannel; // @synthesize sessionChannel=_sessionChannel;
@property(nonatomic) _Bool listenedNewRingBackFlag; // @synthesize listenedNewRingBackFlag=_listenedNewRingBackFlag;
@property(nonatomic) _Bool needReportVoipPushRing; // @synthesize needReportVoipPushRing=_needReportVoipPushRing;
@property(nonatomic) _Bool needReportCallKitRing; // @synthesize needReportCallKitRing=_needReportCallKitRing;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) _Bool shouldOpenRingBackSwitch; // @synthesize shouldOpenRingBackSwitch=_shouldOpenRingBackSwitch;
@property(retain, nonatomic) VideoRingDataBase *db; // @synthesize db=_db;
- (unsigned long long)curRoomKeyFor:(unsigned long long)arg1;
- (unsigned long long)curRoomIDFor:(unsigned long long)arg1;
- (_Bool)hasAnyLocalRing;
- (id)getGlobalRing;
- (_Bool)fetchVibrateFileIfNeededFor:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

