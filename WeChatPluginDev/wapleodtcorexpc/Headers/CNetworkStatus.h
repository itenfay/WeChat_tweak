//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWifiInfo, NSObject, NSRecursiveLock, NSString;
@protocol NetworkStatusDelegate, OS_dispatch_queue, OS_nw_path_monitor;

@interface CNetworkStatus
{
    unsigned int m_uiLastStatus;
    id <NetworkStatusDelegate> m_delNetworkStatus;
    _Bool m_isGettingWifiInfo;
    _Bool _isCellularValid;
    NSRecursiveLock *_accessWifiSSIDLock;
    unsigned long long _lastChangeReachTime;
    MMWifiInfo *_wifiInfo;
    NSObject<OS_nw_path_monitor> *_cellularMonitor;
    NSObject<OS_dispatch_queue> *_cellularQueue;
}

+ (id)testGetWifiInfo;
+ (void)AsyncUpdateCachedWifiInfo;
+ (void)AsyncGetWifiInfo:(CDUnknownBlockType)arg1;
+ (void)asyncCheckCellularIsRestrictedWithCallbackBlock:(CDUnknownBlockType)arg1;
+ (_Bool)isTypeEqualToSimCard5G:(id)arg1;
+ (_Bool)isSimCard5G;
+ (_Bool)isSimCard4G;
+ (_Bool)isSimCardSupport3GPlus;
+ (void)updateUpdateRadioAccessTechFromNetworkInfo:(id)arg1;
+ (id)getSimCardType;
+ (unsigned long long)getSimCardCount;
+ (id)getCurrentRadioAccessTechnology:(id)arg1;
+ (id)GetTelephonyNetWorkCountryCode;
+ (id)getCarrierName;
+ (id)GetCarrier;
+ (void)GetCTNetworkInfo;
+ (id)NetworkTypeDescription;
+ (id)descriptionForNewNetType:(int)arg1;
+ (id)descriptionForNetType:(int)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isCellularValid; // @synthesize isCellularValid=_isCellularValid;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cellularQueue; // @synthesize cellularQueue=_cellularQueue;
@property(retain, nonatomic) NSObject<OS_nw_path_monitor> *cellularMonitor; // @synthesize cellularMonitor=_cellularMonitor;
@property(retain) MMWifiInfo *wifiInfo; // @synthesize wifiInfo=_wifiInfo;
@property(nonatomic) unsigned long long lastChangeReachTime; // @synthesize lastChangeReachTime=_lastChangeReachTime;
@property(retain, nonatomic) NSRecursiveLock *accessWifiSSIDLock; // @synthesize accessWifiSSIDLock=_accessWifiSSIDLock;
@property(readonly, nonatomic) _Bool isGettingWifiInfo; // @synthesize isGettingWifiInfo=m_isGettingWifiInfo;
- (void)GetWifiInfo:(id *)arg1 BSSID:(id *)arg2 forceRefresh:(_Bool)arg3 logUsage:(_Bool)arg4;
- (void)GetWifiInfo:(id *)arg1 BSSID:(id *)arg2;
- (id)GetCachedWifiInfo;
- (void)GetCachedWifiInfo:(id *)arg1 BSSID:(id *)arg2;
- (_Bool)isOnWifiOrOver2G;
- (_Bool)isReachable;
- (unsigned int)getConnectFlagValue;
- (unsigned int)getNewNetTypeWithNeedDistinguish5G:(_Bool)arg1;
- (unsigned int)getNewNetType;
- (int)getNetworkType;
- (_Bool)isOnWifi;
- (_Bool)isOnWWan;
- (void)ChangeReach;
- (void)Stop;
- (void)Start:(id)arg1;
- (void)PingReach;
- (void)initCellularMonitor;
- (void)dealloc;
- (id)init;
- (int)currentNetType;
- (int)voIPCellularRadioType;
- (int)voIPNetState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

