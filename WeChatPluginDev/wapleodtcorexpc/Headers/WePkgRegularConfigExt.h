//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WePkgRegularConfigExt
{
    unsigned int _lastUnusedSeconds;
    unsigned int _checkIntervalSeconds;
    unsigned int _lastUsedTimestamp;
    unsigned int _downloadNetworkType;
    unsigned int _pkgSizeInBytes;
    unsigned int _checkUpdateSuccessTime;
    NSString *_currentEnabledVersion;
    NSString *_currentPkgMd5;
    NSString *_checkResponseMd5;
    NSString *_downloadUrl;
    NSString *_charSet;
    NSMutableArray *_atomicSingleFileList;
    NSMutableArray *_nonAtomicSingleFileList;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_checkUpdateSuccessTime;
+ (void)PBArrayAdd_nonAtomicSingleFileList;
+ (void)PBArrayAdd_atomicSingleFileList;
+ (void)PBArrayAdd_charSet;
+ (void)PBArrayAdd_pkgSizeInBytes;
+ (void)PBArrayAdd_downloadNetworkType;
+ (void)PBArrayAdd_downloadUrl;
+ (void)PBArrayAdd_checkResponseMd5;
+ (void)PBArrayAdd_lastUsedTimestamp;
+ (void)PBArrayAdd_checkIntervalSeconds;
+ (void)PBArrayAdd_lastUnusedSeconds;
+ (void)PBArrayAdd_currentPkgMd5;
+ (void)PBArrayAdd_currentEnabledVersion;
- (void).cxx_destruct;
@property(nonatomic) unsigned int checkUpdateSuccessTime; // @synthesize checkUpdateSuccessTime=_checkUpdateSuccessTime;
@property(retain, nonatomic) NSMutableArray *nonAtomicSingleFileList; // @synthesize nonAtomicSingleFileList=_nonAtomicSingleFileList;
@property(retain, nonatomic) NSMutableArray *atomicSingleFileList; // @synthesize atomicSingleFileList=_atomicSingleFileList;
@property(retain, nonatomic) NSString *charSet; // @synthesize charSet=_charSet;
@property(nonatomic) unsigned int pkgSizeInBytes; // @synthesize pkgSizeInBytes=_pkgSizeInBytes;
@property(nonatomic) unsigned int downloadNetworkType; // @synthesize downloadNetworkType=_downloadNetworkType;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(retain, nonatomic) NSString *checkResponseMd5; // @synthesize checkResponseMd5=_checkResponseMd5;
@property(nonatomic) unsigned int lastUsedTimestamp; // @synthesize lastUsedTimestamp=_lastUsedTimestamp;
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

