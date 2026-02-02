//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderTipsShowClientStatsInfo : NSObject
{
    _Bool _hadSyncColdTime;
    unsigned int _exposeCount;
    NSString *_tipsUuid;
    NSString *_oob;
    unsigned long long _firstExposeTime;
    unsigned long long _receTime;
    unsigned long long _lastExposeTimeStamp;
    unsigned long long _lastEndExposeTimeStamp;
    unsigned long long _lastReportTimeStamp;
    unsigned long long _exposeInterval;
    unsigned long long _lastReportExposeInterval;
}

+ (id)clientStatsInfo:(id)arg1 bindTipsUuid:(id)arg2;
+ (void)initialize;
+ (void)PBArrayAdd_lastReportExposeInterval;
+ (void)PBArrayAdd_tipsUuid;
+ (void)PBArrayAdd_lastEndExposeTimeStamp;
+ (void)PBArrayAdd_exposeInterval;
+ (void)PBArrayAdd_lastReportTimeStamp;
+ (void)PBArrayAdd_lastExposeTimeStamp;
+ (void)PBArrayAdd_hadSyncColdTime;
+ (void)PBArrayAdd_receTime;
+ (void)PBArrayAdd_firstExposeTime;
+ (void)PBArrayAdd_oob;
+ (void)PBArrayAdd_exposeCount;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastReportExposeInterval; // @synthesize lastReportExposeInterval=_lastReportExposeInterval;
@property(nonatomic) unsigned long long exposeInterval; // @synthesize exposeInterval=_exposeInterval;
@property(nonatomic) unsigned long long lastReportTimeStamp; // @synthesize lastReportTimeStamp=_lastReportTimeStamp;
@property(nonatomic) unsigned long long lastEndExposeTimeStamp; // @synthesize lastEndExposeTimeStamp=_lastEndExposeTimeStamp;
@property(nonatomic) unsigned long long lastExposeTimeStamp; // @synthesize lastExposeTimeStamp=_lastExposeTimeStamp;
@property(nonatomic) _Bool hadSyncColdTime; // @synthesize hadSyncColdTime=_hadSyncColdTime;
@property(nonatomic) unsigned long long receTime; // @synthesize receTime=_receTime;
@property(nonatomic) unsigned long long firstExposeTime; // @synthesize firstExposeTime=_firstExposeTime;
@property(copy, nonatomic) NSString *oob; // @synthesize oob=_oob;
@property(nonatomic) unsigned int exposeCount; // @synthesize exposeCount=_exposeCount;
@property(copy, nonatomic) NSString *tipsUuid; // @synthesize tipsUuid=_tipsUuid;
@property(readonly, copy) NSString *description;
- (long long)getReportExposeInterval;
- (long long)timeIntervalByLastEndExposeTs;
- (id)generateFinderClientStatsInfo;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

