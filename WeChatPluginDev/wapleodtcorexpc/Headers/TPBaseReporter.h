//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSPointerArray, NSString, TPCommonParams, TPDiskReadWrite, TPPlayerLogContext, TPReporterInitParams;
@protocol ITPPlayerInfoGetter, ITPReportInfoGetter, ITPReportWrapper;

@interface TPBaseReporter : NSObject
{
    int _reporterInstanceBaseID;
    TPReporterInitParams *_reporterInitParams;
    id <ITPReportInfoGetter> _reportInfoGetter;
    id <ITPPlayerInfoGetter> _playerInfoGetter;
    NSPointerArray *_reportChannelDelegates;
    TPCommonParams *_commonParams;
    NSMutableDictionary *_extInitParams;
    NSMutableDictionary *_rsvExtInitParams;
    long long _reportEventSeq;
    NSMutableDictionary *_playerConfigKeyValueDic;
    id <ITPReportWrapper> _beaconReporter;
    TPPlayerLogContext *_log;
    TPDiskReadWrite *_diskReadWrite;
}

+ (long long)calcDrmCapability:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) TPDiskReadWrite *diskReadWrite; // @synthesize diskReadWrite=_diskReadWrite;
@property(retain, nonatomic) TPPlayerLogContext *log; // @synthesize log=_log;
@property(retain, nonatomic) id <ITPReportWrapper> beaconReporter; // @synthesize beaconReporter=_beaconReporter;
@property(retain, nonatomic) NSMutableDictionary *playerConfigKeyValueDic; // @synthesize playerConfigKeyValueDic=_playerConfigKeyValueDic;
@property(nonatomic) long long reportEventSeq; // @synthesize reportEventSeq=_reportEventSeq;
@property(retain, nonatomic) NSMutableDictionary *rsvExtInitParams; // @synthesize rsvExtInitParams=_rsvExtInitParams;
@property(retain, nonatomic) NSMutableDictionary *extInitParams; // @synthesize extInitParams=_extInitParams;
@property(retain, nonatomic) TPCommonParams *commonParams; // @synthesize commonParams=_commonParams;
@property(retain, nonatomic) NSPointerArray *reportChannelDelegates; // @synthesize reportChannelDelegates=_reportChannelDelegates;
@property(nonatomic) __weak id <ITPPlayerInfoGetter> playerInfoGetter; // @synthesize playerInfoGetter=_playerInfoGetter;
@property(nonatomic) __weak id <ITPReportInfoGetter> reportInfoGetter; // @synthesize reportInfoGetter=_reportInfoGetter;
@property(readonly, nonatomic) int reporterInstanceBaseID; // @synthesize reporterInstanceBaseID=_reporterInstanceBaseID;
@property(retain, nonatomic) TPReporterInitParams *reporterInitParams; // @synthesize reporterInitParams=_reporterInitParams;
- (id)reportSafeString:(id)arg1;
- (void)initDeviceParams;
- (void)getInitExtParams;
- (void)getCoreCommonParams;
- (void)onDTProtocolUpdate:(id)arg1;
- (void)onDTCdnUrlUpdate:(id)arg1;
- (void)onDTProcessUpdate:(id)arg1;
- (void)classifyDicIntoRsvExtMapAndExtMap:(id)arg1 withRsvExtDic:(id)arg2 withExtDic:(id)arg3;
- (void)reportAndClearCache;
- (void)reportEvent:(id)arg1 withParams:(id)arg2;
- (void)removeCachedReports;
- (void)removeCachedReport:(id)arg1;
- (void)cacheReport:(id)arg1 withParams:(id)arg2;
- (id)getLivePeriodExtendReportInfo;
- (id)getDynamicStatisticParamsFromCore:(_Bool)arg1;
- (id)getGeneralPlayFlowParamsFromCore;
- (void)reportToExternalReportChannelIfNeed:(id)arg1 withDictionary:(id)arg2;
- (void)dumpInfo:(id)arg1 withDictionary:(id)arg2;
- (void)reset;
- (void)onEvent:(unsigned long long)arg1 withEvent:(id)arg2;
- (void)addReportChannelListener:(id)arg1;
- (void)setup:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

