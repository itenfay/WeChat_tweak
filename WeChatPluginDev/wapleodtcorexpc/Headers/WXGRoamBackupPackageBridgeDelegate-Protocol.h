//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AffRoamDeviceInfo, AffRoamTaskErrorList, AffRoamTransferStats, CMessageWrap, NSArray, NSString;

@protocol WXGRoamBackupPackageBridgeDelegate <NSObject>

@optional
- (void)onRoamBackupPackageBridgeLoadMediaResult:(CMessageWrap *)arg1 errorCode:(unsigned int)arg2 dataID:(NSString *)arg3;
- (void)onRoamBackupPackageBridgeDeviceInfoGet:(AffRoamDeviceInfo *)arg1 error:(int)arg2 deviceId:(NSString *)arg3;
- (void)onRoamBackupPackageBridgeDeviceConnectivityChanged:(_Bool)arg1 deviceId:(NSString *)arg2;
- (void)onRoamBackupPackageBridgeImportFinish:(unsigned long long)arg1;
- (void)onRoamBackupPackageBridgeTaskCompleteEvent:(unsigned long long)arg1 type:(int)arg2 error:(int)arg3 msg:(NSString *)arg4;
- (void)onRoamBackupPackageBridgeTaskStateChangeEvent:(unsigned long long)arg1 state:(int)arg2 type:(int)arg3 errorList:(AffRoamTaskErrorList *)arg4;
- (void)onRoamBackupPackageBridgeTaskProgressEvent:(unsigned long long)arg1 current:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onRoamBackupPackageBridgeTaskTransferStatsChanged:(unsigned long long)arg1 stats:(AffRoamTransferStats *)arg2;
- (void)onRoamBackupPackageBridgeDeleteBackupRet:(int)arg1 packageId:(unsigned long long)arg2 duration:(unsigned int)arg3 deleteCount:(unsigned long long)arg4 deleteAll:(_Bool)arg5;
- (void)onRoamBackupPackageBridgeTimeToResumeQuitTask:(unsigned long long)arg1;
- (void)onRoamBackupPackageBridgeTimeToAutoBackup:(unsigned long long)arg1;
- (void)onRoamBackupPackageBridgeFinishDeletePackages:(int)arg1 packageIds:(NSArray *)arg2 duration:(unsigned int)arg3;
- (void)onRoamBackupPackageBridgeFinishUpdatePackages:(int)arg1 packages:(NSArray *)arg2;
- (void)onRoamBackupPackageBridgeFinishCreatePackages:(int)arg1 packageIds:(NSArray *)arg2;
- (void)onRoamBackupPackageBridgeFinishGetAllModels:(NSArray *)arg1 error:(int)arg2 duration:(unsigned int)arg3 fromServer:(_Bool)arg4;
- (void)onRoamBackupPackageBridgeDeleteProgress:(unsigned long long)arg1 progress:(float)arg2;
- (void)onRoamBackupPackageBridgeNotifyStartConnect:(NSString *)arg1;
- (void)onRoamBackupPackageBridgeDowngradeEventChange:(_Bool)arg1 stop:(_Bool)arg2 packageId:(unsigned long long)arg3;
@end

