//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class SafeMutableDictionary;

@interface ExptAppLogic : NSObject
{
    _Bool _needNoteHitInfo;
    unsigned int _lastUpdateTime;
    unsigned int _interval;
    unsigned int _lastReportTime;
    unsigned int _reportIntervalSec;
    SafeMutableDictionary *_hitList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needNoteHitInfo; // @synthesize needNoteHitInfo=_needNoteHitInfo;
@property(nonatomic) unsigned int reportIntervalSec; // @synthesize reportIntervalSec=_reportIntervalSec;
@property(nonatomic) unsigned int lastReportTime; // @synthesize lastReportTime=_lastReportTime;
@property(retain, nonatomic) SafeMutableDictionary *hitList; // @synthesize hitList=_hitList;
@property(nonatomic) unsigned int interval; // @synthesize interval=_interval;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
- (void)noteLogStatIgnoreFreqLimitLogId;
- (_Bool)getNextGetExptAppIsIncrement;
- (void)setNextGetExptAppIsIncrement:(_Bool)arg1;
- (_Bool)OnReceNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (id)getCgiReportList;
- (id)getLocalExptList;
- (_Bool)needLocalList;
- (id)getGlobalSequence;
- (unsigned int)getLastGetTimeSec;
- (unsigned int)getIntervalSec;
- (id)getExptAppDeviceType;
- (id)createReportList;
- (void)saveReportOpTimeMs;
- (unsigned long long)getReportOpTimeMs;
- (void)deleteOldMMkvReportList;
- (id)getReportListForMMkv;
- (void)saveReportList;
- (unsigned int)getFromMmkv:(id)arg1 defInt:(unsigned int)arg2;
- (void)saveToMMkv:(id)arg1 valInt:(unsigned int)arg2;
- (id)getFromMMkv:(id)arg1 def:(id)arg2;
- (void)saveToMMkv:(id)arg1 val:(id)arg2;
- (id)respToLocalItem:(id)arg1;
- (void)handleReportExptApp:(id)arg1;
- (void)handleExptAppConfig:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)reportExptConfig;
- (void)resetGetAppTime:(unsigned int)arg1 and:(unsigned int)arg2;
- (void)resetLastGetTimeSec:(unsigned int)arg1;
- (void)checkToReportConfig;
- (void)checkToGetSvrExpt;
- (void)getSvrExpt:(unsigned int)arg1;
- (void)hit:(id)arg1;
- (void)dealloc;
- (id)init;

@end

