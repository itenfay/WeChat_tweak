//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSMutableDictionary, NSString, WCHardlinkFileCache, WCHardlinkFileInfoDB, WCUserFileScanOperation;

@interface WCUserFileScanService
{
    _Bool _bUseCache;
    WCUserFileScanOperation *_fileScanOperation;
    WCHardlinkFileInfoDB *_infoDB;
    unsigned long long _totalScanFileCount;
    unsigned long long _totalScanFileSize;
    unsigned long long _totalHitCacheCount;
    unsigned long long _currentHardlinkFileCount;
    unsigned long long _currentHardlinkFileSaveSize;
    NSMutableDictionary *_currentHardlinkCountInfo;
    NSMutableDictionary *_currentHardlinkSizeInfo;
    unsigned long long _nHardlinkFileCount;
    unsigned long long _nHardlinkFileSaveSize;
    NSMutableDictionary *_nHardlinkCountInfo;
    NSMutableDictionary *_nHardlinkSizeInfo;
    double _scanFileStartTime;
    double _scanFileEndTime;
    double _hardlinkStartTime;
    double _hardlinkEndTime;
    unsigned long long _totalNotConfirmCount;
    unsigned long long _totalNotGetMp4Md5Count;
    WCHardlinkFileCache *_fileInfoCache;
    unsigned long long _totalInsertDBCount;
    MMTimer *_fileScanTimer;
}

+ (long long)getTimeIntervalForOneAllHardlink;
+ (_Bool)isSupportTakeHardLink;
+ (unsigned int)lastFinishTime;
+ (void)saveLastFinishTime:(unsigned int)arg1;
+ (id)getLinkToInfo;
+ (id)getBeLinkedInfo;
+ (void)removeLinkInfo;
+ (void)setCurrentLink:(id)arg1 with:(id)arg2;
+ (void)setStateOfHardLinkDone:(_Bool)arg1;
+ (_Bool)getStateOfHardLinkDone;
+ (id)getRelatedMemoryKV;
+ (id)getDetailInfoFromInfoDict:(id)arg1 prefix:(id)arg2 suffix:(id)arg3 isSize:(_Bool)arg4;
+ (_Bool)canLetFileInfoHardLink:(id)arg1 with:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *fileScanTimer; // @synthesize fileScanTimer=_fileScanTimer;
@property(nonatomic) unsigned long long totalInsertDBCount; // @synthesize totalInsertDBCount=_totalInsertDBCount;
@property(nonatomic) _Bool bUseCache; // @synthesize bUseCache=_bUseCache;
@property(retain, nonatomic) WCHardlinkFileCache *fileInfoCache; // @synthesize fileInfoCache=_fileInfoCache;
@property(nonatomic) unsigned long long totalNotGetMp4Md5Count; // @synthesize totalNotGetMp4Md5Count=_totalNotGetMp4Md5Count;
@property(nonatomic) unsigned long long totalNotConfirmCount; // @synthesize totalNotConfirmCount=_totalNotConfirmCount;
@property(nonatomic) double hardlinkEndTime; // @synthesize hardlinkEndTime=_hardlinkEndTime;
@property(nonatomic) double hardlinkStartTime; // @synthesize hardlinkStartTime=_hardlinkStartTime;
@property(nonatomic) double scanFileEndTime; // @synthesize scanFileEndTime=_scanFileEndTime;
@property(nonatomic) double scanFileStartTime; // @synthesize scanFileStartTime=_scanFileStartTime;
@property(retain, nonatomic) NSMutableDictionary *nHardlinkSizeInfo; // @synthesize nHardlinkSizeInfo=_nHardlinkSizeInfo;
@property(retain, nonatomic) NSMutableDictionary *nHardlinkCountInfo; // @synthesize nHardlinkCountInfo=_nHardlinkCountInfo;
@property(nonatomic) unsigned long long nHardlinkFileSaveSize; // @synthesize nHardlinkFileSaveSize=_nHardlinkFileSaveSize;
@property(nonatomic) unsigned long long nHardlinkFileCount; // @synthesize nHardlinkFileCount=_nHardlinkFileCount;
@property(retain, nonatomic) NSMutableDictionary *currentHardlinkSizeInfo; // @synthesize currentHardlinkSizeInfo=_currentHardlinkSizeInfo;
@property(retain, nonatomic) NSMutableDictionary *currentHardlinkCountInfo; // @synthesize currentHardlinkCountInfo=_currentHardlinkCountInfo;
@property(nonatomic) unsigned long long currentHardlinkFileSaveSize; // @synthesize currentHardlinkFileSaveSize=_currentHardlinkFileSaveSize;
@property(nonatomic) unsigned long long currentHardlinkFileCount; // @synthesize currentHardlinkFileCount=_currentHardlinkFileCount;
@property(nonatomic) unsigned long long totalHitCacheCount; // @synthesize totalHitCacheCount=_totalHitCacheCount;
@property(nonatomic) unsigned long long totalScanFileSize; // @synthesize totalScanFileSize=_totalScanFileSize;
@property(nonatomic) unsigned long long totalScanFileCount; // @synthesize totalScanFileCount=_totalScanFileCount;
@property(retain) WCHardlinkFileInfoDB *infoDB; // @synthesize infoDB=_infoDB;
@property(retain, nonatomic) WCUserFileScanOperation *fileScanOperation; // @synthesize fileScanOperation=_fileScanOperation;
- (void)onServiceTerminate;
- (void)onServiceInit;
- (void)setupScan;
- (void)hardlinkScanPhase;
- (_Bool)rejectScan;
- (void)onImportMessageSuccess;
- (id)getFinishScanInfo;
- (_Bool)syncAtomicHardlink:(id)arg1;
- (_Bool)confirmFileInfo:(id)arg1;
- (id)getFileMD5:(id)arg1 withType:(unsigned long long)arg2 withSize:(unsigned long long)arg3;
- (void)finishHardlink;
- (void)hardlinkFile;
- (void)scanChatLogFile;
- (void)scanServiceBeginUseCache:(_Bool)arg1;
- (void)scanServiceBegin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

