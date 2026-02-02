//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WePkgUpdateConfigExt
{
    _Bool _isReadyForOperation;
    _Bool _isClearAllPkgExceptCurrentEnabledVersion;
    _Bool _bigPackageDownloadSuccess;
    _Bool _isPatchDownloadSuccess;
    unsigned int _lastUnusedSeconds;
    unsigned int _checkIntervalSeconds;
    unsigned int _pkgSizeInBytes;
    unsigned int _bigPackagedownloadNetworkType;
    unsigned int _atomicSingleFileTotalCount;
    unsigned int _checkUpdateSuccessTime;
    unsigned int _controlCommand;
    unsigned int _patchDownloadNetworkType;
    unsigned int _patchSizeInBytes;
    NSString *_currentEnabledVersion;
    NSString *_currentPkgMd5;
    NSString *_downloadUrl;
    NSString *_checkResponseMd5;
    NSMutableArray *_atomicSingleFileListNeedDownload;
    NSMutableArray *_atomicSingleFileListDownloadSuccessed;
    NSString *_charSet;
    NSMutableDictionary *_file2DownloadFailCount;
    NSString *_patchMd5;
    NSString *_patchDownloadUrl;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_isPatchDownloadSuccess;
+ (void)PBArrayAdd_patchSizeInBytes;
+ (void)PBArrayAdd_patchDownloadNetworkType;
+ (void)PBArrayAdd_patchMd5;
+ (void)PBArrayAdd_patchDownloadUrl;
+ (void)PBArrayAdd_controlCommand;
+ (void)PBArrayAdd_bigPackageDownloadSuccess;
+ (void)PBArrayAdd_checkUpdateSuccessTime;
+ (void)PBArrayAdd_file2DownloadFailCount;
+ (void)PBArrayAdd_charSet;
+ (void)PBArrayAdd_atomicSingleFileListDownloadSuccessed;
+ (void)PBArrayAdd_atomicSingleFileListNeedDownload;
+ (void)PBArrayAdd_atomicSingleFileTotalCount;
+ (void)PBArrayAdd_bigPackagedownloadNetworkType;
+ (void)PBArrayAdd_checkResponseMd5;
+ (void)PBArrayAdd_isClearAllPkgExceptCurrentEnabledVersion;
+ (void)PBArrayAdd_isReadyForOperation;
+ (void)PBArrayAdd_pkgSizeInBytes;
+ (void)PBArrayAdd_downloadUrl;
+ (void)PBArrayAdd_checkIntervalSeconds;
+ (void)PBArrayAdd_lastUnusedSeconds;
+ (void)PBArrayAdd_currentPkgMd5;
+ (void)PBArrayAdd_currentEnabledVersion;
- (void).cxx_destruct;
@property(nonatomic) unsigned int patchSizeInBytes; // @synthesize patchSizeInBytes=_patchSizeInBytes;
@property(nonatomic) unsigned int patchDownloadNetworkType; // @synthesize patchDownloadNetworkType=_patchDownloadNetworkType;
@property(retain, nonatomic) NSString *patchDownloadUrl; // @synthesize patchDownloadUrl=_patchDownloadUrl;
@property(retain, nonatomic) NSString *patchMd5; // @synthesize patchMd5=_patchMd5;
@property(nonatomic) _Bool isPatchDownloadSuccess; // @synthesize isPatchDownloadSuccess=_isPatchDownloadSuccess;
@property(nonatomic) unsigned int controlCommand; // @synthesize controlCommand=_controlCommand;
@property(nonatomic) _Bool bigPackageDownloadSuccess; // @synthesize bigPackageDownloadSuccess=_bigPackageDownloadSuccess;
@property(nonatomic) unsigned int checkUpdateSuccessTime; // @synthesize checkUpdateSuccessTime=_checkUpdateSuccessTime;
@property(retain, nonatomic) NSMutableDictionary *file2DownloadFailCount; // @synthesize file2DownloadFailCount=_file2DownloadFailCount;
@property(retain, nonatomic) NSString *charSet; // @synthesize charSet=_charSet;
@property(retain, nonatomic) NSMutableArray *atomicSingleFileListDownloadSuccessed; // @synthesize atomicSingleFileListDownloadSuccessed=_atomicSingleFileListDownloadSuccessed;
@property(retain, nonatomic) NSMutableArray *atomicSingleFileListNeedDownload; // @synthesize atomicSingleFileListNeedDownload=_atomicSingleFileListNeedDownload;
@property(nonatomic) unsigned int atomicSingleFileTotalCount; // @synthesize atomicSingleFileTotalCount=_atomicSingleFileTotalCount;
@property(nonatomic) unsigned int bigPackagedownloadNetworkType; // @synthesize bigPackagedownloadNetworkType=_bigPackagedownloadNetworkType;
@property(retain, nonatomic) NSString *checkResponseMd5; // @synthesize checkResponseMd5=_checkResponseMd5;
@property(nonatomic) _Bool isClearAllPkgExceptCurrentEnabledVersion; // @synthesize isClearAllPkgExceptCurrentEnabledVersion=_isClearAllPkgExceptCurrentEnabledVersion;
@property(nonatomic) _Bool isReadyForOperation; // @synthesize isReadyForOperation=_isReadyForOperation;
@property(nonatomic) unsigned int pkgSizeInBytes; // @synthesize pkgSizeInBytes=_pkgSizeInBytes;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(nonatomic) unsigned int checkIntervalSeconds; // @synthesize checkIntervalSeconds=_checkIntervalSeconds;
@property(nonatomic) unsigned int lastUnusedSeconds; // @synthesize lastUnusedSeconds=_lastUnusedSeconds;
@property(retain, nonatomic) NSString *currentPkgMd5; // @synthesize currentPkgMd5=_currentPkgMd5;
@property(retain, nonatomic) NSString *currentEnabledVersion; // @synthesize currentEnabledVersion=_currentEnabledVersion;
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

