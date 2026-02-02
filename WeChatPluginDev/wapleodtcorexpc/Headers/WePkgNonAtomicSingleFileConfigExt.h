//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WePkgNonAtomicSingleFileConfigExt
{
    _Bool _isReadyForOperationAfterCheckUpdate;
    _Bool _isClearAllPkgExceptCurrentEnabledVersion;
    unsigned int _lastUnusedSeconds;
    unsigned int _checkIntervalSeconds;
    unsigned int _nonAtomicSingleFileCount;
    unsigned int _checkUpdateSuccessTime;
    unsigned int _controlCommand;
    NSString *_checkResponseMd5;
    NSMutableArray *_nonAtomicSingleFileListNeedDownload;
    NSMutableArray *_nonAtomicSingleFileListDownloadSuccessed;
    NSMutableDictionary *_file2DownloadFailCount;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_controlCommand;
+ (void)PBArrayAdd_checkUpdateSuccessTime;
+ (void)PBArrayAdd_file2DownloadFailCount;
+ (void)PBArrayAdd_nonAtomicSingleFileListDownloadSuccessed;
+ (void)PBArrayAdd_nonAtomicSingleFileListNeedDownload;
+ (void)PBArrayAdd_nonAtomicSingleFileCount;
+ (void)PBArrayAdd_checkResponseMd5;
+ (void)PBArrayAdd_checkIntervalSeconds;
+ (void)PBArrayAdd_lastUnusedSeconds;
+ (void)PBArrayAdd_isClearAllPkgExceptCurrentEnabledVersion;
+ (void)PBArrayAdd_isReadyForOperationAfterCheckUpdate;
- (void).cxx_destruct;
@property(nonatomic) unsigned int controlCommand; // @synthesize controlCommand=_controlCommand;
@property(nonatomic) unsigned int checkUpdateSuccessTime; // @synthesize checkUpdateSuccessTime=_checkUpdateSuccessTime;
@property(retain, nonatomic) NSMutableDictionary *file2DownloadFailCount; // @synthesize file2DownloadFailCount=_file2DownloadFailCount;
@property(retain, nonatomic) NSMutableArray *nonAtomicSingleFileListDownloadSuccessed; // @synthesize nonAtomicSingleFileListDownloadSuccessed=_nonAtomicSingleFileListDownloadSuccessed;
@property(retain, nonatomic) NSMutableArray *nonAtomicSingleFileListNeedDownload; // @synthesize nonAtomicSingleFileListNeedDownload=_nonAtomicSingleFileListNeedDownload;
@property(nonatomic) unsigned int nonAtomicSingleFileCount; // @synthesize nonAtomicSingleFileCount=_nonAtomicSingleFileCount;
@property(retain, nonatomic) NSString *checkResponseMd5; // @synthesize checkResponseMd5=_checkResponseMd5;
@property(nonatomic) unsigned int checkIntervalSeconds; // @synthesize checkIntervalSeconds=_checkIntervalSeconds;
@property(nonatomic) unsigned int lastUnusedSeconds; // @synthesize lastUnusedSeconds=_lastUnusedSeconds;
@property(nonatomic) _Bool isClearAllPkgExceptCurrentEnabledVersion; // @synthesize isClearAllPkgExceptCurrentEnabledVersion=_isClearAllPkgExceptCurrentEnabledVersion;
@property(nonatomic) _Bool isReadyForOperationAfterCheckUpdate; // @synthesize isReadyForOperationAfterCheckUpdate=_isReadyForOperationAfterCheckUpdate;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

