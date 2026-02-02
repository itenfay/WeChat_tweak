//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCThreadQOSManagerConfig;

@interface WCThreadQOSManager
{
    NSString *m_configPath;
    WCThreadQOSManagerConfig *m_config;
}

- (void).cxx_destruct;
- (_Bool)isDeviceHighPerformance;
- (void)setupStrategyFromXLab;
- (void)onExptItemListChange;
- (void)onAuthOK;
- (_Bool)isWhiteListThread:(const char *)arg1;
- (_Bool)isBlackListThread:(const char *)arg1;
- (_Bool)isAppleThread:(const char *)arg1;
- (void)handleWhiteListStrategy;
- (void)handleBlackListStrategy;
- (void)checkThreadQOS;
- (void)saveMonitorConfigBackground;
- (void)loadMonitorConfig;
- (void)initPaths;
- (void)prepareInMain;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

