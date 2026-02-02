//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WAInfoData;

@interface WADownloadInfo : NSObject
{
    _Bool _isUpdateCompleteWithPatch;
    _Bool _enableDownloadResumption;
    unsigned int _oldVersion;
    unsigned int _targetVersion;
    unsigned int _fullPkgSize;
    unsigned int _patchSize;
    unsigned int _downloadPkgSize;
    unsigned int _decompressPkgSize;
    unsigned int _decompressTime;
    unsigned long long _downloadType;
    NSString *_fullPkgUrl;
    NSString *_fullPkgZstdUrl;
    NSString *_patchPkgUrl;
    unsigned long long _beginTimeForWholePkg;
    unsigned long long _beginTimeForGzipPkg;
    unsigned long long _endTimeForGzipPkg;
    unsigned long long _beginTimeForZstdPkg;
    unsigned long long _endTimeForZstdPkg;
    unsigned long long _beginTimeForPatch;
    unsigned long long _endTimeForPatch;
    unsigned long long _beginTimeForCheckSumVerify;
    unsigned long long _endTimeForCheckSumVerify;
    WAInfoData *_appInfoData;
    unsigned long long _downloadScene;
    NSMutableArray *_downloadProgressInfos;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableDownloadResumption; // @synthesize enableDownloadResumption=_enableDownloadResumption;
@property(retain, nonatomic) NSMutableArray *downloadProgressInfos; // @synthesize downloadProgressInfos=_downloadProgressInfos;
@property(nonatomic) unsigned long long downloadScene; // @synthesize downloadScene=_downloadScene;
@property(nonatomic) unsigned int decompressTime; // @synthesize decompressTime=_decompressTime;
@property(nonatomic) unsigned int decompressPkgSize; // @synthesize decompressPkgSize=_decompressPkgSize;
@property(nonatomic) unsigned int downloadPkgSize; // @synthesize downloadPkgSize=_downloadPkgSize;
@property(retain, nonatomic) WAInfoData *appInfoData; // @synthesize appInfoData=_appInfoData;
@property(nonatomic) unsigned int patchSize; // @synthesize patchSize=_patchSize;
@property(nonatomic) unsigned int fullPkgSize; // @synthesize fullPkgSize=_fullPkgSize;
@property(nonatomic) _Bool isUpdateCompleteWithPatch; // @synthesize isUpdateCompleteWithPatch=_isUpdateCompleteWithPatch;
@property(nonatomic) unsigned long long endTimeForCheckSumVerify; // @synthesize endTimeForCheckSumVerify=_endTimeForCheckSumVerify;
@property(nonatomic) unsigned long long beginTimeForCheckSumVerify; // @synthesize beginTimeForCheckSumVerify=_beginTimeForCheckSumVerify;
@property(nonatomic) unsigned long long endTimeForPatch; // @synthesize endTimeForPatch=_endTimeForPatch;
@property(nonatomic) unsigned long long beginTimeForPatch; // @synthesize beginTimeForPatch=_beginTimeForPatch;
@property(nonatomic) unsigned long long endTimeForZstdPkg; // @synthesize endTimeForZstdPkg=_endTimeForZstdPkg;
@property(nonatomic) unsigned long long beginTimeForZstdPkg; // @synthesize beginTimeForZstdPkg=_beginTimeForZstdPkg;
@property(nonatomic) unsigned long long endTimeForGzipPkg; // @synthesize endTimeForGzipPkg=_endTimeForGzipPkg;
@property(nonatomic) unsigned long long beginTimeForGzipPkg; // @synthesize beginTimeForGzipPkg=_beginTimeForGzipPkg;
@property(nonatomic) unsigned long long beginTimeForWholePkg; // @synthesize beginTimeForWholePkg=_beginTimeForWholePkg;
@property(nonatomic) unsigned int targetVersion; // @synthesize targetVersion=_targetVersion;
@property(nonatomic) unsigned int oldVersion; // @synthesize oldVersion=_oldVersion;
@property(copy, nonatomic) NSString *patchPkgUrl; // @synthesize patchPkgUrl=_patchPkgUrl;
@property(copy, nonatomic) NSString *fullPkgZstdUrl; // @synthesize fullPkgZstdUrl=_fullPkgZstdUrl;
@property(copy, nonatomic) NSString *fullPkgUrl; // @synthesize fullPkgUrl=_fullPkgUrl;
@property(nonatomic) unsigned long long downloadType; // @synthesize downloadType=_downloadType;
- (float)getDownloadSpeed;
- (void)updateDownloadProgress:(long long)arg1;
- (id)downloadUrl;
- (unsigned long long)compressType;
- (_Bool)isZstd;
- (_Bool)isPatch;
- (_Bool)isUrlEqualFullPkgUrl:(id)arg1;
- (_Bool)isUrlEqualFullPkgZstdUrl:(id)arg1;
- (_Bool)isUrlEqualPatchUrl:(id)arg1;
- (_Bool)isUrlEqualToCurrentType:(id)arg1;

@end

