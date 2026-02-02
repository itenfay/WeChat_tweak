//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportJSEvaluateDetailItem
{
    _Bool _hasPreload;
    _Bool _isDownloadCode;
    _Bool _isPatch;
    _Bool _isHeadlessLaunch;
    unsigned int _launchCostTimeInMs;
    unsigned int _codeCacheVersion;
    unsigned int _preloadTop1FileSize;
    unsigned int _preloadTop1FileCostTimeInMs;
    unsigned int _preloadTop1FileUseCodeCache;
    unsigned int _preloadTop1FileCodeCacheSize;
    unsigned int _preloadTop2FileSize;
    unsigned int _preloadTop2FileCostTimeInMs;
    unsigned int _preloadTop2FileUseCodeCache;
    unsigned int _preloadTop2FileCodeCacheSize;
    unsigned int _preloadTop3FileSize;
    unsigned int _preloadTop3FileCostTimeInMs;
    unsigned int _preloadTop3FileUseCodeCache;
    unsigned int _preloadTop3FileCodeCacheSize;
    unsigned int _launchTop1FileSize;
    unsigned int _launchTop1FileCostTimeInMs;
    unsigned int _launchTop1FileUseCodeCache;
    unsigned int _launchTop1FileCodeCacheSize;
    unsigned int _launchTop2FileSize;
    unsigned int _launchTop2FileCostTimeInMs;
    unsigned int _launchTop2FileUseCodeCache;
    unsigned int _launchTop2FileCodeCacheSize;
    unsigned int _launchTop3FileSize;
    unsigned int _launchTop3FileCostTimeInMs;
    unsigned int _launchTop3FileUseCodeCache;
    unsigned int _launchTop3FileCodeCacheSize;
    unsigned int _preloadFileCount;
    unsigned int _preloadFileHitCodeCacheCount;
    unsigned int _preloadFileHitCodeCacheRatio;
    unsigned int _coldLaunchFileCount;
    unsigned int _coldLaunchFileHitCodeCacheCount;
    unsigned int _coldLaunchFileHitCodeCacheRatio;
    unsigned int _webViewType;
    unsigned int _coldLaunchFileEvaluateTotalTime;
    unsigned int _coldLaunchFileEvaluateTotalRatio;
    unsigned int _coldLaunchFileSizeReachCodeCacheSizeDemandCount;
    unsigned int _coldLaunchFileSizeReachCodeCacheSizeDemaindRatio;
    unsigned int _gcTimes;
    unsigned int _gcDuration;
    NSString *_preloadTop1File;
    NSString *_preloadTop2File;
    NSString *_preloadTop3File;
    NSString *_launchTop1File;
    NSString *_launchTop2File;
    NSString *_launchTop3File;
    NSString *_preloadAllFileEvaluateDetailBase64;
    NSString *_launchAllFileEvaluateDetailBase64;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int gcDuration; // @synthesize gcDuration=_gcDuration;
@property(nonatomic) unsigned int gcTimes; // @synthesize gcTimes=_gcTimes;
@property(nonatomic) unsigned int coldLaunchFileSizeReachCodeCacheSizeDemaindRatio; // @synthesize coldLaunchFileSizeReachCodeCacheSizeDemaindRatio=_coldLaunchFileSizeReachCodeCacheSizeDemaindRatio;
@property(nonatomic) unsigned int coldLaunchFileSizeReachCodeCacheSizeDemandCount; // @synthesize coldLaunchFileSizeReachCodeCacheSizeDemandCount=_coldLaunchFileSizeReachCodeCacheSizeDemandCount;
@property(nonatomic) unsigned int coldLaunchFileEvaluateTotalRatio; // @synthesize coldLaunchFileEvaluateTotalRatio=_coldLaunchFileEvaluateTotalRatio;
@property(nonatomic) unsigned int coldLaunchFileEvaluateTotalTime; // @synthesize coldLaunchFileEvaluateTotalTime=_coldLaunchFileEvaluateTotalTime;
@property(nonatomic) unsigned int webViewType; // @synthesize webViewType=_webViewType;
@property(nonatomic) unsigned int coldLaunchFileHitCodeCacheRatio; // @synthesize coldLaunchFileHitCodeCacheRatio=_coldLaunchFileHitCodeCacheRatio;
@property(nonatomic) unsigned int coldLaunchFileHitCodeCacheCount; // @synthesize coldLaunchFileHitCodeCacheCount=_coldLaunchFileHitCodeCacheCount;
@property(nonatomic) unsigned int coldLaunchFileCount; // @synthesize coldLaunchFileCount=_coldLaunchFileCount;
@property(nonatomic) unsigned int preloadFileHitCodeCacheRatio; // @synthesize preloadFileHitCodeCacheRatio=_preloadFileHitCodeCacheRatio;
@property(nonatomic) unsigned int preloadFileHitCodeCacheCount; // @synthesize preloadFileHitCodeCacheCount=_preloadFileHitCodeCacheCount;
@property(nonatomic) unsigned int preloadFileCount; // @synthesize preloadFileCount=_preloadFileCount;
@property(nonatomic) _Bool isHeadlessLaunch; // @synthesize isHeadlessLaunch=_isHeadlessLaunch;
@property(nonatomic) _Bool isPatch; // @synthesize isPatch=_isPatch;
@property(nonatomic) _Bool isDownloadCode; // @synthesize isDownloadCode=_isDownloadCode;
@property(copy, nonatomic) NSString *launchAllFileEvaluateDetailBase64; // @synthesize launchAllFileEvaluateDetailBase64=_launchAllFileEvaluateDetailBase64;
@property(copy, nonatomic) NSString *preloadAllFileEvaluateDetailBase64; // @synthesize preloadAllFileEvaluateDetailBase64=_preloadAllFileEvaluateDetailBase64;
@property(nonatomic) unsigned int launchTop3FileCodeCacheSize; // @synthesize launchTop3FileCodeCacheSize=_launchTop3FileCodeCacheSize;
@property(nonatomic) unsigned int launchTop3FileUseCodeCache; // @synthesize launchTop3FileUseCodeCache=_launchTop3FileUseCodeCache;
@property(nonatomic) unsigned int launchTop3FileCostTimeInMs; // @synthesize launchTop3FileCostTimeInMs=_launchTop3FileCostTimeInMs;
@property(nonatomic) unsigned int launchTop3FileSize; // @synthesize launchTop3FileSize=_launchTop3FileSize;
@property(copy, nonatomic) NSString *launchTop3File; // @synthesize launchTop3File=_launchTop3File;
@property(nonatomic) unsigned int launchTop2FileCodeCacheSize; // @synthesize launchTop2FileCodeCacheSize=_launchTop2FileCodeCacheSize;
@property(nonatomic) unsigned int launchTop2FileUseCodeCache; // @synthesize launchTop2FileUseCodeCache=_launchTop2FileUseCodeCache;
@property(nonatomic) unsigned int launchTop2FileCostTimeInMs; // @synthesize launchTop2FileCostTimeInMs=_launchTop2FileCostTimeInMs;
@property(nonatomic) unsigned int launchTop2FileSize; // @synthesize launchTop2FileSize=_launchTop2FileSize;
@property(copy, nonatomic) NSString *launchTop2File; // @synthesize launchTop2File=_launchTop2File;
@property(nonatomic) unsigned int launchTop1FileCodeCacheSize; // @synthesize launchTop1FileCodeCacheSize=_launchTop1FileCodeCacheSize;
@property(nonatomic) unsigned int launchTop1FileUseCodeCache; // @synthesize launchTop1FileUseCodeCache=_launchTop1FileUseCodeCache;
@property(nonatomic) unsigned int launchTop1FileCostTimeInMs; // @synthesize launchTop1FileCostTimeInMs=_launchTop1FileCostTimeInMs;
@property(nonatomic) unsigned int launchTop1FileSize; // @synthesize launchTop1FileSize=_launchTop1FileSize;
@property(copy, nonatomic) NSString *launchTop1File; // @synthesize launchTop1File=_launchTop1File;
@property(nonatomic) unsigned int preloadTop3FileCodeCacheSize; // @synthesize preloadTop3FileCodeCacheSize=_preloadTop3FileCodeCacheSize;
@property(nonatomic) unsigned int preloadTop3FileUseCodeCache; // @synthesize preloadTop3FileUseCodeCache=_preloadTop3FileUseCodeCache;
@property(nonatomic) unsigned int preloadTop3FileCostTimeInMs; // @synthesize preloadTop3FileCostTimeInMs=_preloadTop3FileCostTimeInMs;
@property(nonatomic) unsigned int preloadTop3FileSize; // @synthesize preloadTop3FileSize=_preloadTop3FileSize;
@property(copy, nonatomic) NSString *preloadTop3File; // @synthesize preloadTop3File=_preloadTop3File;
@property(nonatomic) unsigned int preloadTop2FileCodeCacheSize; // @synthesize preloadTop2FileCodeCacheSize=_preloadTop2FileCodeCacheSize;
@property(nonatomic) unsigned int preloadTop2FileUseCodeCache; // @synthesize preloadTop2FileUseCodeCache=_preloadTop2FileUseCodeCache;
@property(nonatomic) unsigned int preloadTop2FileCostTimeInMs; // @synthesize preloadTop2FileCostTimeInMs=_preloadTop2FileCostTimeInMs;
@property(nonatomic) unsigned int preloadTop2FileSize; // @synthesize preloadTop2FileSize=_preloadTop2FileSize;
@property(copy, nonatomic) NSString *preloadTop2File; // @synthesize preloadTop2File=_preloadTop2File;
@property(nonatomic) unsigned int preloadTop1FileCodeCacheSize; // @synthesize preloadTop1FileCodeCacheSize=_preloadTop1FileCodeCacheSize;
@property(nonatomic) unsigned int preloadTop1FileUseCodeCache; // @synthesize preloadTop1FileUseCodeCache=_preloadTop1FileUseCodeCache;
@property(nonatomic) unsigned int preloadTop1FileCostTimeInMs; // @synthesize preloadTop1FileCostTimeInMs=_preloadTop1FileCostTimeInMs;
@property(nonatomic) unsigned int preloadTop1FileSize; // @synthesize preloadTop1FileSize=_preloadTop1FileSize;
@property(copy, nonatomic) NSString *preloadTop1File; // @synthesize preloadTop1File=_preloadTop1File;
@property(nonatomic) unsigned int codeCacheVersion; // @synthesize codeCacheVersion=_codeCacheVersion;
@property(nonatomic) unsigned int launchCostTimeInMs; // @synthesize launchCostTimeInMs=_launchCostTimeInMs;
@property(nonatomic) _Bool hasPreload; // @synthesize hasPreload=_hasPreload;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

@end

