//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSArray, NSMutableDictionary, NSString;

@interface MMFinderLiveDNSMgr
{
    _Bool _resolveBeforeUsage;
    _Bool _isInBackground;
    unsigned int _lastRefreshNetType;
    unsigned int _lastNetworkChangeTimestamp;
    long long _strategy;
    double _dnsRefreshIntervalInSeconds;
    NSMutableDictionary *_hostIpMap;
    NSMutableDictionary *_invalidHostIpMap;
    NSArray *_hostsToResolve;
    double _lastRefreshTimestamp;
    MMTimer *_refreshTimer;
}

+ (void)initMMDNSIfNeeded;
+ (void)mmdnsResolve:(id)arg1 fallbackLocal:(_Bool)arg2 hostIpMap:(id)arg3;
+ (id)localDNSResolve:(id)arg1;
+ (void)initDNSMgrServiceIfNeeded;
- (void).cxx_destruct;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(retain, nonatomic) MMTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(nonatomic) unsigned int lastNetworkChangeTimestamp; // @synthesize lastNetworkChangeTimestamp=_lastNetworkChangeTimestamp;
@property(nonatomic) double lastRefreshTimestamp; // @synthesize lastRefreshTimestamp=_lastRefreshTimestamp;
@property(nonatomic) unsigned int lastRefreshNetType; // @synthesize lastRefreshNetType=_lastRefreshNetType;
@property(retain, nonatomic) NSArray *hostsToResolve; // @synthesize hostsToResolve=_hostsToResolve;
@property(retain, nonatomic) NSMutableDictionary *invalidHostIpMap; // @synthesize invalidHostIpMap=_invalidHostIpMap;
@property(retain, nonatomic) NSMutableDictionary *hostIpMap; // @synthesize hostIpMap=_hostIpMap;
@property(nonatomic) double dnsRefreshIntervalInSeconds; // @synthesize dnsRefreshIntervalInSeconds=_dnsRefreshIntervalInSeconds;
@property(nonatomic) _Bool resolveBeforeUsage; // @synthesize resolveBeforeUsage=_resolveBeforeUsage;
@property(nonatomic) long long strategy; // @synthesize strategy=_strategy;
- (id)resolvedUrlWithUrl:(id)arg1;
- (void)markHostDNSInvalidWithUrl:(id)arg1;
- (id)getIPForHost:(id)arg1;
- (void)stopRefreshTimer;
- (void)scheduleNextRefreshWithDelay:(double)arg1;
- (void)refreshDNSWithMMDNS;
- (void)refreshDNSWithLocalDNSFirst;
- (void)refreshDNSMap;
- (void)forceRefreshDNSMap;
- (void)onSimCardNetTypeChange;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

