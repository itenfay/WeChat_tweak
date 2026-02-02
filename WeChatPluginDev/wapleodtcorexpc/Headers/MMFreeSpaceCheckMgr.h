//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMDiskUsageScaner, MMFreeSpaceCheckConfig, MMTimer, NSString, NSURL;

@interface MMFreeSpaceCheckMgr
{
    MMFreeSpaceCheckConfig *m_config;
    MMTimer *m_checkFreeSpaceTimer;
    unsigned long long _freeSizeLevelLow;
    unsigned long long _freeSizeLevelLower;
    unsigned long long _freeSizeLevelLowest;
    unsigned long long _eLevel;
    unsigned long long _deviceStorage;
    unsigned long long _deviceFreeStorage;
    unsigned int _eDeviceStorageLevel;
    _Bool _bTipsing;
    unsigned int _lastScanAppSizeTimeStamp;
    basic_string_5909a4e2 _statfsPath;
    NSURL *_volumnURL;
    MMDiskUsageScaner *_usageScanner;
}

+ (id)testFilePath;
+ (id)configPath;
+ (id)workDir;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) MMDiskUsageScaner *usageScanner; // @synthesize usageScanner=_usageScanner;
- (void)reportTipsType:(unsigned int)arg1 andTipsOpt:(unsigned int)arg2 important:(_Bool)arg3;
- (void)goCleanView;
- (void)saveConfig;
- (void)loadConfig;
- (void)createWorkDir;
- (void)handleScanStat:(id)arg1;
- (void)onDiskUsageScanFinishedWithScanStat:(id)arg1;
- (void)onDiskUsageScanStart;
- (void)onDiskUsageScanCancel;
- (void)onDiskUsageMgrFinishOneScan:(id)arg1;
- (void)startCheckDiskSize;
- (_Bool)shouldTips;
- (void)onFreeSpaceLowest;
- (void)onFreeSpaceLower;
- (void)onFreeSpaceLow;
- (void)calFreeSpace;
- (void)setup;
- (void)checkFreeSpaceEx;
- (void)checkOtherUserUsedSpace;
- (unsigned long long)getUrgentFreeSize;
- (_Bool)isUrgentFreeSpace;
- (_Bool)getDiskSize:(unsigned long long *)arg1;
- (_Bool)getFreeSize:(unsigned long long *)arg1;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

