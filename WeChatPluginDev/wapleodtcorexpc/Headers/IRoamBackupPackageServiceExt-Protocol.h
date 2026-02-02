//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AffRoamTransferStats, CMessageWrap, NSArray, NSMutableDictionary, NSString;

@protocol IRoamBackupPackageServiceExt <NSObject>

@optional
- (void)onRoamBackupPackageServiceLoadMediaResult:(CMessageWrap *)arg1 errorCode:(unsigned int)arg2 dataID:(NSString *)arg3;
- (void)onRoamBackupPackageServiceAutoTestTaskRes:(int)arg1 taskType:(int)arg2;
- (void)onRoamBackupPackageServiceChooseRangeImport:(NSArray *)arg1;
- (void)onRoamBackupPackageServiceChooseRangeIncludeUserComplete:(_Bool)arg1;
- (void)onRoamBackupPackageServiceChooseRangeDetailComplete;
- (void)onRoamBackupPackageServiceFinishedCulculateCurrentModel;
- (void)onRoamBackupPackageServiceStartGetBackedUpChatInfos;
- (void)onRoamBackupPackageServiceGetBackedUpChatInfos:(NSMutableDictionary *)arg1;
- (void)onRoamBackupPackageServiceGetChatLogSize:(unsigned long long)arg1;
- (void)onRoamBackupPackageServiceNotifyCode:(unsigned long long)arg1 notifyCode:(unsigned long long)arg2;
- (void)onRoamBackupPackageServiceDeleteBackupRet:(int)arg1;
- (void)onRoamBackupPackageServiceStopStart;
- (void)onRoamBackupPackageServiceStopFinishRet:(int)arg1 packageID:(unsigned long long)arg2;
- (void)onRoamBackupPackageServiceTaskProgressEvent:(unsigned long long)arg1 current:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onRoamBackupPackageServiceTaskTransferStatsChanged:(unsigned long long)arg1 stats:(AffRoamTransferStats *)arg2;
- (void)onRoamBackupPackageServiceFinishDeletePackages:(int)arg1 models:(NSArray *)arg2;
- (void)onRoamBackupPackageServiceFinishUpdatePackages:(int)arg1;
- (void)onRoamBackupPackageServiceFinishCreatePackages:(int)arg1;
- (void)onRoamBackupPackageServiceFinishGetAllPackageWithError:(int)arg1;
- (void)onRoamBackupPackageServiceStartUpdatePackages;
- (void)onRoamBackupPackageServiceStartGetAllPackage;
- (void)onRoamBackupPackageServiceStartTask:(unsigned long long)arg1;
- (void)onRoamBackupPackageServiceBackupRestoreConflict:(_Bool)arg1;
- (void)onRoamBackupPackageServiceDeviceAddComplete;
- (void)onRoamBackupPackageServiceCreateViewModelChange;
- (void)onRoamBackupPackageServiceDeleteProgress:(unsigned long long)arg1 progress:(float)arg2;
- (void)onRoamBackupPackageServicePushStrongNotify:(NSString *)arg1 title:(NSString *)arg2 packageId:(unsigned long long)arg3;
- (void)onRoamBackupPackageServiceBindTicketComplete:(_Bool)arg1;
@end

