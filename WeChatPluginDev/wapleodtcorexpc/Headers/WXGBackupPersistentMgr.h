//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WXGBackupPersistentMgr : NSObject
{
}

+ (id)getOneRandomRoamPackagePath;
+ (id)getRoamDestinationPath;
+ (id)getRoamRecoverInfoPath;
+ (id)getRoamAutoTestPath;
+ (id)getRoamCachePath;
+ (void)removeRoamAutoBackupPauseStartTimeWithPackageId:(unsigned long long)arg1;
+ (unsigned int)getRoamAutoBackupPauseStartTimeWithPackageId:(unsigned long long)arg1;
+ (void)saveRoamAutoBackupPauseStartTime:(unsigned int)arg1 withPackageId:(unsigned long long)arg2;
+ (void)removeOutBoxURLBookMarkWithDeviceId:(id)arg1;
+ (void)clearOutBoxURLBookMark;
+ (id)getAllOutBoxDeviceIds;
+ (id)getOutBoxURLBookMarkWithDeviceId:(id)arg1;
+ (void)saveOutBoxURLBookMark:(id)arg1 withDeviceId:(id)arg2;
+ (_Bool)canSucccesInOneTransfer;
+ (void)failOnFirstTransfer;
+ (void)writeBeginFirstTransfer;
+ (_Bool)getMigrationBuildIndex;
+ (void)saveMigrationBuildIndex:(_Bool)arg1;
+ (_Bool)getStateOfMigrationTimeSelection;
+ (void)resetStateOfMigraitonTimeSelection;
+ (void)setStateOfMigrationTimeSelection;
+ (_Bool)getMigrationSelectTextOnlySetting;
+ (void)saveMigrationSelectTextOnly:(_Bool)arg1;
+ (unsigned long long)getSelectMigrationType;
+ (void)setSelectMigrationType:(unsigned long long)arg1;
+ (_Bool)hasMigrationSelection;
+ (id)loadMigrationSelection;
+ (void)deleteMigrationSelection;
+ (_Bool)saveMigrationSelection:(id)arg1;
+ (id)getChatUnPackZipPath;
+ (id)getChatUnPackDestinationPath;
+ (id)getChatUnPackPath;
+ (id)getInboxChatPackPath;
+ (id)getChatPackFilePath;
+ (id)getChatPackTmpPath;
+ (id)getChatPackDemoPath;
+ (id)getChatPackPath;
+ (void)clearChatSyncData;
+ (void)syncClearChatSyncData;
+ (id)getChatSyncFilePath;
+ (id)getChatSyncTmpPathWithDataID:(id)arg1;
+ (id)getChatSyncTmpPath;
+ (id)getChatSyncPath;
+ (void)setLastBackupComputerName:(id)arg1;
+ (id)getLastBackupComputerName;
+ (_Bool)getStateOfMigrated;
+ (void)resetStateOfMigrated;
+ (void)setStateOfMigrated;
+ (void)syncDeleteBufferMsgListArray:(id)arg1;
+ (void)syncDeleteMigrationMsgListArray:(id)arg1;
+ (void)p_clearMigrationBufferPath;
+ (void)p_syncClearMigrationBufferPath;
+ (void)p_clearMigrationPath;
+ (void)p_syncClearMigrationPath;
+ (void)clearMigrationTmpData;
+ (void)syncClearMigrationTmpData;
+ (float)getMigrationCircleProgress;
+ (void)writeMigrationCircleProgress:(float)arg1;
+ (id)getMigrationProgress;
+ (void)writeMigrationProgressCurrent:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
+ (id)getMigrationSessionProgress;
+ (void)writeMigrationSessionCurrent:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
+ (float)getBackupMigrationSizeProgress;
+ (void)writeBackupMigrationSizeProgress:(float)arg1;
+ (unsigned long long)getBackupMigrationFilterSize;
+ (void)writeBackupMigrationFilterSize:(unsigned long long)arg1;
+ (unsigned long long)getBackupMigrationSize;
+ (void)writeBackupMigrationSize:(unsigned long long)arg1;
+ (id)getProgress;
+ (void)writeProgressCurrent:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
+ (_Bool)isMigrationOldRecover;
+ (void)writeMigrationNewRecover;
+ (void)writeMigrationOldRecover;
+ (unsigned long long)checkMigrationRecoverState;
+ (void)resetMigrationRecoverInfo;
+ (void)writeMigrationRecoverDataPartWaitInfo;
+ (void)writeMigrationRecoverDataWaitInfo;
+ (void)writeMigrationRecoverDataBeignInfo;
+ (void)writeMigrationRecoverTransferBeginInfo;
+ (id)getLastDeviceID;
+ (void)saveCurrentDeviceID:(id)arg1;
+ (id)getMigrationSelectionPath;
+ (id)getMigrationFilePathWithDataId:(id)arg1;
+ (id)getMigrationFileBufferPathWithDataId:(id)arg1;
+ (id)getMigrationInfoDBPath;
+ (id)getMigrationMsgItemDBPath;
+ (id)getMigrationBufferPath;
+ (id)getMigrationPath;
+ (id)getSessionID;
+ (void)setSessionID:(id)arg1;
+ (unsigned long long)getBackupState;
+ (void)setBackupState:(unsigned long long)arg1;
+ (id)backupStateDescription:(unsigned long long)arg1;
+ (_Bool)checkBackupRecoverOnlyText;
+ (void)writeBackupRecoverOnlyText:(_Bool)arg1;
+ (_Bool)isSelectTime;
+ (void)setStateOfSelectTime:(_Bool)arg1;
+ (_Bool)isBackupSelectTextOny;
+ (void)setBackupSelectTextOnly:(_Bool)arg1;
+ (id)loadBackupSelection;
+ (void)deleteBackupSelection;
+ (_Bool)saveBackupSelection:(id)arg1;
+ (unsigned long long)getFreeDiskSpace;
+ (unsigned long long)getFileSizeOfMigrationPath;
+ (id)getRoamMemoryKV;
+ (id)getOutBoxMemoryKV;
+ (id)getRelatedMemoryKV;
+ (id)getBackupHEIFConvertPathWithFileName:(id)arg1;
+ (id)getBackupSelectionPath;
+ (id)getBackupIndexDBPath;
+ (id)getBackupBufferPath;
+ (id)getBackupPath;
+ (id)getAnalyseInfoDBPath;

@end

