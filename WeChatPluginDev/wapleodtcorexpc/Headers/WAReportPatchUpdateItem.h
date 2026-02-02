//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportPatchUpdateItem
{
    _Bool _canUsePatchUpdate;
    _Bool _isUpdateComplete;
    _Bool _isUpdateCompleteWithPatch;
    unsigned int _fullPkgSize;
    unsigned int _patchSize;
    unsigned int _patchError;
    unsigned int _gzipReadyTime;
    unsigned int _zstdReadyTime;
    unsigned int _pkgType;
    unsigned int _protocol;
    unsigned int _downloadSize;
    unsigned int _dnsType;
    unsigned int _requestSourceSyncType;
    unsigned int _requestSourceIsPreHot;
    unsigned int _requestSourceLaunchFlag;
    unsigned int _downloadComponentType;
    long long _oldVersion;
    long long _targetVersion;
    long long _beginTime;
    long long _endTime;
    NSString *_moduleName;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int downloadComponentType; // @synthesize downloadComponentType=_downloadComponentType;
@property(nonatomic) unsigned int requestSourceLaunchFlag; // @synthesize requestSourceLaunchFlag=_requestSourceLaunchFlag;
@property(nonatomic) unsigned int requestSourceIsPreHot; // @synthesize requestSourceIsPreHot=_requestSourceIsPreHot;
@property(nonatomic) unsigned int requestSourceSyncType; // @synthesize requestSourceSyncType=_requestSourceSyncType;
@property(nonatomic) unsigned int dnsType; // @synthesize dnsType=_dnsType;
@property(nonatomic) unsigned int downloadSize; // @synthesize downloadSize=_downloadSize;
@property(nonatomic) unsigned int protocol; // @synthesize protocol=_protocol;
@property(nonatomic) unsigned int pkgType; // @synthesize pkgType=_pkgType;
@property(nonatomic) unsigned int zstdReadyTime; // @synthesize zstdReadyTime=_zstdReadyTime;
@property(nonatomic) unsigned int gzipReadyTime; // @synthesize gzipReadyTime=_gzipReadyTime;
@property(retain, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(nonatomic) unsigned int patchError; // @synthesize patchError=_patchError;
@property(nonatomic) unsigned int patchSize; // @synthesize patchSize=_patchSize;
@property(nonatomic) unsigned int fullPkgSize; // @synthesize fullPkgSize=_fullPkgSize;
@property(nonatomic) _Bool isUpdateCompleteWithPatch; // @synthesize isUpdateCompleteWithPatch=_isUpdateCompleteWithPatch;
@property(nonatomic) _Bool isUpdateComplete; // @synthesize isUpdateComplete=_isUpdateComplete;
@property(nonatomic) _Bool canUsePatchUpdate; // @synthesize canUsePatchUpdate=_canUsePatchUpdate;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) long long targetVersion; // @synthesize targetVersion=_targetVersion;
@property(nonatomic) long long oldVersion; // @synthesize oldVersion=_oldVersion;
- (id)reportString;
- (int)reportID;

@end

