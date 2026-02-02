//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAPackageDownloadProtocolInfo;

@interface WAReportPackageDownloadDetailInfoItem
{
    _Bool _isPatch;
    unsigned int _downloadPkgSize;
    unsigned int _decompressTime;
    unsigned int _decompressPkgSize;
    unsigned int _errCode;
    unsigned int _dnsType;
    unsigned int _requestSourceSyncType;
    unsigned int _requestSourceIsPreHot;
    unsigned int _requestSourceLaunchFlag;
    WAPackageDownloadProtocolInfo *_detail;
    unsigned long long _costTime;
    unsigned long long _startTime;
    unsigned long long _endTime;
    NSString *_moduleName;
    unsigned long long _packageType;
    unsigned long long _localAppVersion;
    unsigned long long _downloadAppVersion;
    unsigned long long _compressType;
    unsigned long long _encryptVersion;
    NSString *_downloadUrl;
    NSString *_md5;
    NSString *_finalPkgMd5;
    unsigned long long _applyPatchBeginTimeInMs;
    unsigned long long _applyPatchEndTimeInMs;
    unsigned long long _checkSumVerifyBeginTimeInMs;
    unsigned long long _checkSumVerifyEndTimeInMs;
    unsigned long long _downloadComponentType;
    NSString *_xCacheLoopUp;
    unsigned long long _DNSCost;
    unsigned long long _connectCost;
    unsigned long long _SSLconnectionCost;
    unsigned long long _requestCost;
    unsigned long long _responseCost;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long responseCost; // @synthesize responseCost=_responseCost;
@property(nonatomic) unsigned long long requestCost; // @synthesize requestCost=_requestCost;
@property(nonatomic) unsigned long long SSLconnectionCost; // @synthesize SSLconnectionCost=_SSLconnectionCost;
@property(nonatomic) unsigned long long connectCost; // @synthesize connectCost=_connectCost;
@property(nonatomic) unsigned long long DNSCost; // @synthesize DNSCost=_DNSCost;
@property(copy, nonatomic) NSString *xCacheLoopUp; // @synthesize xCacheLoopUp=_xCacheLoopUp;
@property(nonatomic) unsigned long long downloadComponentType; // @synthesize downloadComponentType=_downloadComponentType;
@property(nonatomic) unsigned long long checkSumVerifyEndTimeInMs; // @synthesize checkSumVerifyEndTimeInMs=_checkSumVerifyEndTimeInMs;
@property(nonatomic) unsigned long long checkSumVerifyBeginTimeInMs; // @synthesize checkSumVerifyBeginTimeInMs=_checkSumVerifyBeginTimeInMs;
@property(nonatomic) unsigned long long applyPatchEndTimeInMs; // @synthesize applyPatchEndTimeInMs=_applyPatchEndTimeInMs;
@property(nonatomic) unsigned long long applyPatchBeginTimeInMs; // @synthesize applyPatchBeginTimeInMs=_applyPatchBeginTimeInMs;
@property(nonatomic) unsigned int requestSourceLaunchFlag; // @synthesize requestSourceLaunchFlag=_requestSourceLaunchFlag;
@property(nonatomic) unsigned int requestSourceIsPreHot; // @synthesize requestSourceIsPreHot=_requestSourceIsPreHot;
@property(nonatomic) unsigned int requestSourceSyncType; // @synthesize requestSourceSyncType=_requestSourceSyncType;
@property(nonatomic) unsigned int dnsType; // @synthesize dnsType=_dnsType;
@property(copy, nonatomic) NSString *finalPkgMd5; // @synthesize finalPkgMd5=_finalPkgMd5;
@property(nonatomic) unsigned int errCode; // @synthesize errCode=_errCode;
@property(nonatomic) unsigned int decompressPkgSize; // @synthesize decompressPkgSize=_decompressPkgSize;
@property(nonatomic) unsigned int decompressTime; // @synthesize decompressTime=_decompressTime;
@property(nonatomic) unsigned int downloadPkgSize; // @synthesize downloadPkgSize=_downloadPkgSize;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(nonatomic) unsigned long long encryptVersion; // @synthesize encryptVersion=_encryptVersion;
@property(nonatomic) unsigned long long compressType; // @synthesize compressType=_compressType;
@property(nonatomic) _Bool isPatch; // @synthesize isPatch=_isPatch;
@property(nonatomic) unsigned long long downloadAppVersion; // @synthesize downloadAppVersion=_downloadAppVersion;
@property(nonatomic) unsigned long long localAppVersion; // @synthesize localAppVersion=_localAppVersion;
@property(nonatomic) unsigned long long packageType; // @synthesize packageType=_packageType;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned long long costTime; // @synthesize costTime=_costTime;
@property(retain, nonatomic) WAPackageDownloadProtocolInfo *detail; // @synthesize detail=_detail;
- (id)reportString;
- (int)reportID;

@end

