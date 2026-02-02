//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportMemStatItem
{
    _Bool _isCache;
    _Bool _isGame;
    unsigned int _eventType;
    unsigned int _openSeq;
    unsigned int _openInterval;
    unsigned int _waThreadMemUsed;
    unsigned int _mainThreadMemUsed;
    unsigned int _lastKillReason;
    long long _processMemUsed;
    unsigned long long _coldLaunchInterAfterLastKillInMs;
}

@property(nonatomic) unsigned long long coldLaunchInterAfterLastKillInMs; // @synthesize coldLaunchInterAfterLastKillInMs=_coldLaunchInterAfterLastKillInMs;
@property(nonatomic) unsigned int lastKillReason; // @synthesize lastKillReason=_lastKillReason;
@property(nonatomic) _Bool isGame; // @synthesize isGame=_isGame;
@property(nonatomic) unsigned int mainThreadMemUsed; // @synthesize mainThreadMemUsed=_mainThreadMemUsed;
@property(nonatomic) unsigned int waThreadMemUsed; // @synthesize waThreadMemUsed=_waThreadMemUsed;
@property(nonatomic) long long processMemUsed; // @synthesize processMemUsed=_processMemUsed;
@property(nonatomic) unsigned int openInterval; // @synthesize openInterval=_openInterval;
@property(nonatomic) unsigned int openSeq; // @synthesize openSeq=_openSeq;
@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(nonatomic) unsigned int eventType; // @synthesize eventType=_eventType;
- (id)reportString;
- (int)reportID;

// Remaining properties
@property(copy, nonatomic) NSString *nickname;

@end

