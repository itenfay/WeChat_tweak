//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WePkgUpdateConfig
{
    _Bool _bClearAllPkgExceptCurrentEnabledVersion;
    _Bool _bIsReadyForOperation;
    _Bool _bBigPackageDownloadSuccess;
    _Bool _isPatchDownloadSuccess;
    unsigned int _uiPkgType;
    unsigned int _uiLastUnusedSeconds;
    unsigned int _uiCheckIntervalSeconds;
    unsigned int _uiCheckUpdateSuccessTime;
    unsigned int _controlCommand;
    unsigned int _uiBigPackageDownloadNetworkType;
    unsigned int _uiBigPackageSizeInBytes;
    unsigned int _patchDownloadNetworkType;
    unsigned int _patchSizeInBytes;
    unsigned int _uiAtomicSingleFileTotalCount;
    NSString *_nsPkgId;
    NSString *_nsAppId;
    NSString *_nsEnteranceDomain;
    NSString *_nsCurrentEnabledVersion;
    NSString *_nsCheckResonseMd5;
    NSString *_nsCharSet;
    NSString *_nsBigPackageMd5;
    NSString *_nsBigPackageDownloadUrl;
    NSString *_patchMd5;
    NSString *_patchDownloadUrl;
    NSMutableArray *_atomicSingleFileListNeedDownload;
    NSMutableArray *_atomicSingleFileListDownloadSuccessed;
    NSMutableDictionary *_file2DownloadFailCount;
}

+ (id)updateConfigFromTableItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *file2DownloadFailCount; // @synthesize file2DownloadFailCount=_file2DownloadFailCount;
@property(retain, nonatomic) NSMutableArray *atomicSingleFileListDownloadSuccessed; // @synthesize atomicSingleFileListDownloadSuccessed=_atomicSingleFileListDownloadSuccessed;
@property(retain, nonatomic) NSMutableArray *atomicSingleFileListNeedDownload; // @synthesize atomicSingleFileListNeedDownload=_atomicSingleFileListNeedDownload;
@property(nonatomic) unsigned int uiAtomicSingleFileTotalCount; // @synthesize uiAtomicSingleFileTotalCount=_uiAtomicSingleFileTotalCount;
@property(nonatomic) unsigned int patchSizeInBytes; // @synthesize patchSizeInBytes=_patchSizeInBytes;
@property(nonatomic) unsigned int patchDownloadNetworkType; // @synthesize patchDownloadNetworkType=_patchDownloadNetworkType;
@property(retain, nonatomic) NSString *patchDownloadUrl; // @synthesize patchDownloadUrl=_patchDownloadUrl;
@property(retain, nonatomic) NSString *patchMd5; // @synthesize patchMd5=_patchMd5;
@property(nonatomic) _Bool isPatchDownloadSuccess; // @synthesize isPatchDownloadSuccess=_isPatchDownloadSuccess;
@property(nonatomic) _Bool bBigPackageDownloadSuccess; // @synthesize bBigPackageDownloadSuccess=_bBigPackageDownloadSuccess;
@property(nonatomic) unsigned int uiBigPackageSizeInBytes; // @synthesize uiBigPackageSizeInBytes=_uiBigPackageSizeInBytes;
@property(nonatomic) unsigned int uiBigPackageDownloadNetworkType; // @synthesize uiBigPackageDownloadNetworkType=_uiBigPackageDownloadNetworkType;
@property(retain, nonatomic) NSString *nsBigPackageDownloadUrl; // @synthesize nsBigPackageDownloadUrl=_nsBigPackageDownloadUrl;
@property(retain, nonatomic) NSString *nsBigPackageMd5; // @synthesize nsBigPackageMd5=_nsBigPackageMd5;
@property(nonatomic) unsigned int controlCommand; // @synthesize controlCommand=_controlCommand;
@property(nonatomic) unsigned int uiCheckUpdateSuccessTime; // @synthesize uiCheckUpdateSuccessTime=_uiCheckUpdateSuccessTime;
@property(retain, nonatomic) NSString *nsCharSet; // @synthesize nsCharSet=_nsCharSet;
@property(retain, nonatomic) NSString *nsCheckResonseMd5; // @synthesize nsCheckResonseMd5=_nsCheckResonseMd5;
@property(nonatomic) _Bool bIsReadyForOperation; // @synthesize bIsReadyForOperation=_bIsReadyForOperation;
@property(nonatomic) _Bool bClearAllPkgExceptCurrentEnabledVersion; // @synthesize bClearAllPkgExceptCurrentEnabledVersion=_bClearAllPkgExceptCurrentEnabledVersion;
@property(nonatomic) unsigned int uiCheckIntervalSeconds; // @synthesize uiCheckIntervalSeconds=_uiCheckIntervalSeconds;
@property(nonatomic) unsigned int uiLastUnusedSeconds; // @synthesize uiLastUnusedSeconds=_uiLastUnusedSeconds;
@property(retain, nonatomic) NSString *nsCurrentEnabledVersion; // @synthesize nsCurrentEnabledVersion=_nsCurrentEnabledVersion;
@property(retain, nonatomic) NSString *nsEnteranceDomain; // @synthesize nsEnteranceDomain=_nsEnteranceDomain;
@property(nonatomic) unsigned int uiPkgType; // @synthesize uiPkgType=_uiPkgType;
@property(retain, nonatomic) NSString *nsAppId; // @synthesize nsAppId=_nsAppId;
@property(retain, nonatomic) NSString *nsPkgId; // @synthesize nsPkgId=_nsPkgId;
- (id)debugDescription;
- (_Bool)shouldReadyForUpdate;
- (id)generateTableItem;

@end

