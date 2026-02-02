//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WePkgNonAtomicSingleFileConfig
{
    _Bool _bClearAllPkgExceptCurrentEnabledVersion;
    _Bool _bIsReadyForOperationAfterCheckUpdate;
    unsigned int _uiPkgType;
    unsigned int _uiLastUnusedSeconds;
    unsigned int _uiCheckIntervalSeconds;
    unsigned int _controlCommand;
    unsigned int _uiNonAtomicSingleFileCount;
    unsigned int _uiCheckUpdateSuccessTime;
    NSString *_nsPkgId;
    NSString *_nsAppId;
    NSString *_nsEnteranceDomain;
    NSString *_nsCurrentEnabledVersion;
    NSString *_nsCheckResonseMd5;
    NSString *_nsCharSet;
    NSMutableArray *_nonAtomicSingleFileListNeedDownload;
    NSMutableArray *_nonAtomicSingleFileListDownloadSuccessed;
    NSMutableDictionary *_file2DownloadFailCount;
}

+ (id)nonAtomicSingleFileConfigFromTableItem:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int uiCheckUpdateSuccessTime; // @synthesize uiCheckUpdateSuccessTime=_uiCheckUpdateSuccessTime;
@property(retain, nonatomic) NSMutableDictionary *file2DownloadFailCount; // @synthesize file2DownloadFailCount=_file2DownloadFailCount;
@property(retain, nonatomic) NSMutableArray *nonAtomicSingleFileListDownloadSuccessed; // @synthesize nonAtomicSingleFileListDownloadSuccessed=_nonAtomicSingleFileListDownloadSuccessed;
@property(retain, nonatomic) NSMutableArray *nonAtomicSingleFileListNeedDownload; // @synthesize nonAtomicSingleFileListNeedDownload=_nonAtomicSingleFileListNeedDownload;
@property(nonatomic) unsigned int uiNonAtomicSingleFileCount; // @synthesize uiNonAtomicSingleFileCount=_uiNonAtomicSingleFileCount;
@property(nonatomic) _Bool bIsReadyForOperationAfterCheckUpdate; // @synthesize bIsReadyForOperationAfterCheckUpdate=_bIsReadyForOperationAfterCheckUpdate;
@property(nonatomic) unsigned int controlCommand; // @synthesize controlCommand=_controlCommand;
@property(retain, nonatomic) NSString *nsCharSet; // @synthesize nsCharSet=_nsCharSet;
@property(retain, nonatomic) NSString *nsCheckResonseMd5; // @synthesize nsCheckResonseMd5=_nsCheckResonseMd5;
@property(nonatomic) _Bool bClearAllPkgExceptCurrentEnabledVersion; // @synthesize bClearAllPkgExceptCurrentEnabledVersion=_bClearAllPkgExceptCurrentEnabledVersion;
@property(nonatomic) unsigned int uiCheckIntervalSeconds; // @synthesize uiCheckIntervalSeconds=_uiCheckIntervalSeconds;
@property(nonatomic) unsigned int uiLastUnusedSeconds; // @synthesize uiLastUnusedSeconds=_uiLastUnusedSeconds;
@property(retain, nonatomic) NSString *nsCurrentEnabledVersion; // @synthesize nsCurrentEnabledVersion=_nsCurrentEnabledVersion;
@property(retain, nonatomic) NSString *nsEnteranceDomain; // @synthesize nsEnteranceDomain=_nsEnteranceDomain;
@property(nonatomic) unsigned int uiPkgType; // @synthesize uiPkgType=_uiPkgType;
@property(retain, nonatomic) NSString *nsAppId; // @synthesize nsAppId=_nsAppId;
@property(retain, nonatomic) NSString *nsPkgId; // @synthesize nsPkgId=_nsPkgId;
- (id)debugDescription;
- (id)generateTableItem;

@end

