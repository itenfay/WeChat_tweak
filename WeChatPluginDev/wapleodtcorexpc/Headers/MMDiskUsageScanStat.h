//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFolderWrapCacheData, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MMDiskUsageScanStat : NSObject
{
    _Bool _m_isStart;
    unsigned int m_curStartTime;
    unsigned int m_curEndTime;
    unsigned int m_curUsedTime;
    unsigned int m_curScannedFolderNum;
    unsigned int m_curAddFolderNum;
    unsigned int m_curScannedFileNum;
    unsigned int m_curDelFolderNum;
    unsigned int m_curDelFileNum;
    unsigned int m_hitCacheCount;
    unsigned int m_setCacheCount;
    unsigned int m_timeOutCacheCount;
    unsigned int m_fileModifyCacheCount;
    unsigned int m_refreshCacheTimeCount;
    unsigned int m_deleteCacheCount;
    unsigned int m_noBuildCacheCount;
    unsigned int m_justFolderFolderCount;
    unsigned int _m_totalStartTime;
    unsigned int _m_totalEndTime;
    unsigned int _m_totalUsedTime;
    unsigned int _m_totalScanCount;
    unsigned int _m_totalFolderNum;
    unsigned int _m_totalDelFolderNum;
    unsigned int _m_totalFileNum;
    unsigned int _m_totalDelFileNum;
    unsigned int _m_totalPuffyFileNum;
    unsigned long long m_curDelFileSize;
    unsigned long long _m_totalFileSize;
    unsigned long long _m_totalDelFileSize;
    NSMutableDictionary *_m_dicTotalBizStat;
    NSMutableDictionary *_m_dicTotalFileTypeInUseStat;
    NSMutableDictionary *_m_dicTotalSpecialFileStat;
    NSMutableDictionary *_m_dicTotalWechatFileClassStat;
    unsigned long long _m_totalLogicFileSize;
    unsigned long long _m_totalPuffyFileSize;
    unsigned long long _m_totalPuffyLogicFileSize;
    NSMutableDictionary *_m_hardlinkInodeDict;
    unsigned long long _hardlinkIgnoreSize;
    unsigned long long _hardlinkIgnoreCnt;
    unsigned long long _hardlinkTotalCnt;
    NSMutableDictionary *_m_cowFileDict;
    unsigned long long _cowIgnoreSize;
    unsigned long long _cowIgnoreCnt;
    unsigned long long _cowTotalCnt;
    NSMutableDictionary *_m_beScannedDeleteFilesDict;
    NSMutableArray *_filesScanResult;
    NSMutableArray *_folderScanResult;
    NSMutableArray *_filesDeleteInfo;
    NSMutableArray *_foldersDeleteInfo;
    NSMutableArray *_fileClassScanDetailInfo;
    MMFolderWrapCacheData *_wrapCacheData;
    NSRecursiveLock *_markLock;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_totalPuffyLogicFileSize;
+ (void)PBArrayAdd_m_totalPuffyFileSize;
+ (void)PBArrayAdd_m_totalPuffyFileNum;
+ (void)PBArrayAdd_m_totalLogicFileSize;
+ (void)PBArrayAdd_m_cowFileDict;
+ (void)PBArrayAdd_m_beScannedDeleteFilesDict;
+ (void)PBArrayAdd_m_hardlinkInodeDict;
+ (void)PBArrayAdd_m_dicTotalWechatFileClassStat;
+ (void)PBArrayAdd_m_dicTotalSpecialFileStat;
+ (void)PBArrayAdd_m_dicTotalFileTypeInUseStat;
+ (void)PBArrayAdd_m_totalDelFileSize;
+ (void)PBArrayAdd_m_totalDelFileNum;
+ (void)PBArrayAdd_m_totalDelFolderNum;
+ (void)PBArrayAdd_m_dicTotalBizStat;
+ (void)PBArrayAdd_m_totalFileSize;
+ (void)PBArrayAdd_m_totalFileNum;
+ (void)PBArrayAdd_m_totalFolderNum;
+ (void)PBArrayAdd_m_totalScanCount;
+ (void)PBArrayAdd_m_totalUsedTime;
+ (void)PBArrayAdd_m_totalEndTime;
+ (void)PBArrayAdd_m_totalStartTime;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *markLock; // @synthesize markLock=_markLock;
@property(nonatomic) _Bool m_isStart; // @synthesize m_isStart=_m_isStart;
@property(retain, nonatomic) MMFolderWrapCacheData *wrapCacheData; // @synthesize wrapCacheData=_wrapCacheData;
@property(retain, nonatomic) NSMutableArray *fileClassScanDetailInfo; // @synthesize fileClassScanDetailInfo=_fileClassScanDetailInfo;
@property(retain, nonatomic) NSMutableArray *foldersDeleteInfo; // @synthesize foldersDeleteInfo=_foldersDeleteInfo;
@property(retain, nonatomic) NSMutableArray *filesDeleteInfo; // @synthesize filesDeleteInfo=_filesDeleteInfo;
@property(retain, nonatomic) NSMutableArray *folderScanResult; // @synthesize folderScanResult=_folderScanResult;
@property(retain, nonatomic) NSMutableArray *filesScanResult; // @synthesize filesScanResult=_filesScanResult;
@property(retain, nonatomic) NSMutableDictionary *m_beScannedDeleteFilesDict; // @synthesize m_beScannedDeleteFilesDict=_m_beScannedDeleteFilesDict;
@property(nonatomic) unsigned long long cowTotalCnt; // @synthesize cowTotalCnt=_cowTotalCnt;
@property(nonatomic) unsigned long long cowIgnoreCnt; // @synthesize cowIgnoreCnt=_cowIgnoreCnt;
@property(nonatomic) unsigned long long cowIgnoreSize; // @synthesize cowIgnoreSize=_cowIgnoreSize;
@property(retain, nonatomic) NSMutableDictionary *m_cowFileDict; // @synthesize m_cowFileDict=_m_cowFileDict;
@property(nonatomic) unsigned long long hardlinkTotalCnt; // @synthesize hardlinkTotalCnt=_hardlinkTotalCnt;
@property(nonatomic) unsigned long long hardlinkIgnoreCnt; // @synthesize hardlinkIgnoreCnt=_hardlinkIgnoreCnt;
@property(nonatomic) unsigned long long hardlinkIgnoreSize; // @synthesize hardlinkIgnoreSize=_hardlinkIgnoreSize;
@property(retain, nonatomic) NSMutableDictionary *m_hardlinkInodeDict; // @synthesize m_hardlinkInodeDict=_m_hardlinkInodeDict;
@property(nonatomic) unsigned long long m_totalPuffyLogicFileSize; // @synthesize m_totalPuffyLogicFileSize=_m_totalPuffyLogicFileSize;
@property(nonatomic) unsigned long long m_totalPuffyFileSize; // @synthesize m_totalPuffyFileSize=_m_totalPuffyFileSize;
@property(nonatomic) unsigned int m_totalPuffyFileNum; // @synthesize m_totalPuffyFileNum=_m_totalPuffyFileNum;
@property(nonatomic) unsigned long long m_totalLogicFileSize; // @synthesize m_totalLogicFileSize=_m_totalLogicFileSize;
@property(retain, nonatomic) NSMutableDictionary *m_dicTotalWechatFileClassStat; // @synthesize m_dicTotalWechatFileClassStat=_m_dicTotalWechatFileClassStat;
@property(retain, nonatomic) NSMutableDictionary *m_dicTotalSpecialFileStat; // @synthesize m_dicTotalSpecialFileStat=_m_dicTotalSpecialFileStat;
@property(retain, nonatomic) NSMutableDictionary *m_dicTotalFileTypeInUseStat; // @synthesize m_dicTotalFileTypeInUseStat=_m_dicTotalFileTypeInUseStat;
@property(retain, nonatomic) NSMutableDictionary *m_dicTotalBizStat; // @synthesize m_dicTotalBizStat=_m_dicTotalBizStat;
@property(nonatomic) unsigned long long m_totalDelFileSize; // @synthesize m_totalDelFileSize=_m_totalDelFileSize;
@property(nonatomic) unsigned int m_totalDelFileNum; // @synthesize m_totalDelFileNum=_m_totalDelFileNum;
@property(nonatomic) unsigned long long m_totalFileSize; // @synthesize m_totalFileSize=_m_totalFileSize;
@property(nonatomic) unsigned int m_totalFileNum; // @synthesize m_totalFileNum=_m_totalFileNum;
@property(nonatomic) unsigned int m_totalDelFolderNum; // @synthesize m_totalDelFolderNum=_m_totalDelFolderNum;
@property(nonatomic) unsigned int m_totalFolderNum; // @synthesize m_totalFolderNum=_m_totalFolderNum;
@property(nonatomic) unsigned int m_totalScanCount; // @synthesize m_totalScanCount=_m_totalScanCount;
@property(nonatomic) unsigned int m_totalUsedTime; // @synthesize m_totalUsedTime=_m_totalUsedTime;
@property(nonatomic) unsigned int m_totalEndTime; // @synthesize m_totalEndTime=_m_totalEndTime;
@property(nonatomic) unsigned int m_totalStartTime; // @synthesize m_totalStartTime=_m_totalStartTime;
@property(nonatomic) unsigned int m_justFolderFolderCount; // @synthesize m_justFolderFolderCount;
@property(nonatomic) unsigned int m_noBuildCacheCount; // @synthesize m_noBuildCacheCount;
@property(nonatomic) unsigned int m_deleteCacheCount; // @synthesize m_deleteCacheCount;
@property(nonatomic) unsigned int m_refreshCacheTimeCount; // @synthesize m_refreshCacheTimeCount;
@property(nonatomic) unsigned int m_fileModifyCacheCount; // @synthesize m_fileModifyCacheCount;
@property(nonatomic) unsigned int m_timeOutCacheCount; // @synthesize m_timeOutCacheCount;
@property(nonatomic) unsigned int m_setCacheCount; // @synthesize m_setCacheCount;
@property(nonatomic) unsigned int m_hitCacheCount; // @synthesize m_hitCacheCount;
@property(nonatomic) unsigned long long m_curDelFileSize; // @synthesize m_curDelFileSize;
@property(nonatomic) unsigned int m_curDelFileNum; // @synthesize m_curDelFileNum;
@property(nonatomic) unsigned int m_curDelFolderNum; // @synthesize m_curDelFolderNum;
@property(nonatomic) unsigned int m_curScannedFileNum; // @synthesize m_curScannedFileNum;
@property(nonatomic) unsigned int m_curAddFolderNum; // @synthesize m_curAddFolderNum;
@property(nonatomic) unsigned int m_curScannedFolderNum; // @synthesize m_curScannedFolderNum;
@property(nonatomic) unsigned int m_curUsedTime; // @synthesize m_curUsedTime;
@property(nonatomic) unsigned int m_curEndTime; // @synthesize m_curEndTime;
@property(nonatomic) unsigned int m_curStartTime; // @synthesize m_curStartTime;
- (id)getFileClassDetailInfo;
@property(readonly, copy) NSString *description;
- (id)totalScanSummy;
- (id)currentScanSummary;
- (void)markStopTime:(_Bool)arg1;
- (void)markStartTime;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

