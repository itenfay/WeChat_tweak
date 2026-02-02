//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderMVInfo, FinderPostOriginInfo, NSArray, NSString, WCFinderPostSessionModel;

@interface WCFinderUploadTask : NSObject
{
    _Bool _preUploadTask;
    _Bool _isRetrying;
    _Bool _startCdnUpload;
    _Bool _bCgiPosting;
    _Bool _shouldFileDumpItem;
    _Bool _isMusicMVClip;
    _Bool _doubleCheckPostAction;
    unsigned int _createTime;
    unsigned int _retryCount;
    unsigned int _enterQueueTime;
    unsigned int _firstFailTime;
    unsigned int _lastFailTime;
    int _retCode;
    int _cgiRetCode;
    WCFinderPostSessionModel *_postSession;
    unsigned long long _mediaType;
    long long _videoMediaHash;
    unsigned long long _cdnHeaderParamType;
    NSString *_clientId;
    long long _totalsize;
    unsigned long long _startUploadTimeMs;
    unsigned long long _finishUploadTimeMs;
    unsigned long long _preUploadTaskStartTimeMs;
    unsigned long long _preUploadTaskFinishTimeMs;
    long long _errorType;
    NSArray *_mediaArray;
    unsigned long long _currentUploadingCDNIndex;
    NSString *_remoteUrl;
    CDUnknownBlockType _uploadSuccessBlock;
    CDUnknownBlockType _uploadFailBlock;
    CDUnknownBlockType _uploadCoverSucBlock;
    CDUnknownBlockType _uploadCoverFailBlock;
    FinderMVInfo *_musicMVInfo;
    FinderPostOriginInfo *_originInfo;
    struct CGSize _thumbSize;
    struct CGSize _coverSize;
}

+ (id)genCoverTaskWithPostSession:(id)arg1;
+ (id)createCoverMeidaUploadTask:(id)arg1 bindToMediaTask:(id)arg2 task:(id)arg3 clientId:(id)arg4;
+ (id)createShareCoverMeidaUploadTask:(id)arg1 bindToMediaTask:(id)arg2 task:(id)arg3 clientId:(id)arg4;
+ (id)_genUploadTaskWithPostSession:(id)arg1;
+ (unsigned long long)getNanoSecondTimestamp;
+ (id)generateFinderCommonClientId;
+ (id)generateClientIdWithDataItem:(id)arg1;
+ (id)finderTaskWithPostSession:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_videoMediaHash;
+ (void)PBArrayAdd_cdnHeaderParamType;
+ (void)PBArrayAdd_coverSize;
+ (void)PBArrayAdd_thumbSize;
+ (void)PBArrayAdd_preUploadTaskFinishTimeMs;
+ (void)PBArrayAdd_preUploadTaskStartTimeMs;
+ (void)PBArrayAdd_postSession;
+ (void)PBArrayAdd_isMusicMVClip;
+ (void)PBArrayAdd_musicMVInfo;
+ (void)PBArrayAdd_currentUploadingCDNIndex;
+ (void)PBArrayAdd_mediaArray;
+ (void)PBArrayAdd_errorType;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_cgiRetCode;
+ (void)PBArrayAdd_retCode;
+ (void)PBArrayAdd_lastFailTime;
+ (void)PBArrayAdd_firstFailTime;
+ (void)PBArrayAdd_finishUploadTimeMs;
+ (void)PBArrayAdd_startUploadTimeMs;
+ (void)PBArrayAdd_enterQueueTime;
+ (void)PBArrayAdd_bCgiPosting;
+ (void)PBArrayAdd_startCdnUpload;
+ (void)PBArrayAdd_isRetrying;
+ (void)PBArrayAdd_totalsize;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_clientId;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderPostOriginInfo *originInfo; // @synthesize originInfo=_originInfo;
@property(nonatomic) _Bool doubleCheckPostAction; // @synthesize doubleCheckPostAction=_doubleCheckPostAction;
@property(nonatomic) _Bool isMusicMVClip; // @synthesize isMusicMVClip=_isMusicMVClip;
@property(retain, nonatomic) FinderMVInfo *musicMVInfo; // @synthesize musicMVInfo=_musicMVInfo;
@property(copy, nonatomic) CDUnknownBlockType uploadCoverFailBlock; // @synthesize uploadCoverFailBlock=_uploadCoverFailBlock;
@property(copy, nonatomic) CDUnknownBlockType uploadCoverSucBlock; // @synthesize uploadCoverSucBlock=_uploadCoverSucBlock;
@property(copy, nonatomic) CDUnknownBlockType uploadFailBlock; // @synthesize uploadFailBlock=_uploadFailBlock;
@property(copy, nonatomic) CDUnknownBlockType uploadSuccessBlock; // @synthesize uploadSuccessBlock=_uploadSuccessBlock;
@property(copy, nonatomic) NSString *remoteUrl; // @synthesize remoteUrl=_remoteUrl;
@property(nonatomic) _Bool shouldFileDumpItem; // @synthesize shouldFileDumpItem=_shouldFileDumpItem;
@property(nonatomic) unsigned long long currentUploadingCDNIndex; // @synthesize currentUploadingCDNIndex=_currentUploadingCDNIndex;
@property(copy, nonatomic) NSArray *mediaArray; // @synthesize mediaArray=_mediaArray;
@property(nonatomic) long long errorType; // @synthesize errorType=_errorType;
@property(nonatomic) int cgiRetCode; // @synthesize cgiRetCode=_cgiRetCode;
@property(nonatomic) int retCode; // @synthesize retCode=_retCode;
@property(nonatomic) unsigned long long preUploadTaskFinishTimeMs; // @synthesize preUploadTaskFinishTimeMs=_preUploadTaskFinishTimeMs;
@property(nonatomic) unsigned long long preUploadTaskStartTimeMs; // @synthesize preUploadTaskStartTimeMs=_preUploadTaskStartTimeMs;
@property(nonatomic) unsigned int lastFailTime; // @synthesize lastFailTime=_lastFailTime;
@property(nonatomic) unsigned int firstFailTime; // @synthesize firstFailTime=_firstFailTime;
@property(nonatomic) unsigned long long finishUploadTimeMs; // @synthesize finishUploadTimeMs=_finishUploadTimeMs;
@property(nonatomic) unsigned long long startUploadTimeMs; // @synthesize startUploadTimeMs=_startUploadTimeMs;
@property(nonatomic) unsigned int enterQueueTime; // @synthesize enterQueueTime=_enterQueueTime;
@property(nonatomic) _Bool bCgiPosting; // @synthesize bCgiPosting=_bCgiPosting;
@property(nonatomic) _Bool startCdnUpload; // @synthesize startCdnUpload=_startCdnUpload;
@property(nonatomic) _Bool isRetrying; // @synthesize isRetrying=_isRetrying;
@property(nonatomic) struct CGSize coverSize; // @synthesize coverSize=_coverSize;
@property(nonatomic) struct CGSize thumbSize; // @synthesize thumbSize=_thumbSize;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) long long totalsize; // @synthesize totalsize=_totalsize;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(nonatomic) unsigned long long cdnHeaderParamType; // @synthesize cdnHeaderParamType=_cdnHeaderParamType;
@property(nonatomic) long long videoMediaHash; // @synthesize videoMediaHash=_videoMediaHash;
@property(nonatomic) _Bool preUploadTask; // @synthesize preUploadTask=_preUploadTask;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) WCFinderPostSessionModel *postSession; // @synthesize postSession=_postSession;
- (_Bool)isMemberShipQAUploadTask;
- (_Bool)isLiveUploadTask;
- (id)dataItem;
- (id)megaVideoNonceId;
- (id)megaVideoId;
- (_Bool)directCGIPost;
- (_Bool)isValidMusicMVInfo;
- (id)currentMediaTask;
- (void)fillCoverUrlToDataItem;
- (id)genPostTraceInfo;
- (id)genAttahcmentFromDataItem:(id)arg1;
- (id)genAttachmentList;
- (id)genMegaVideoDesc;
- (id)genObjectDesc;
- (int)getVideoDynamicRangeTypeWithResultPath:(id)arg1;
- (int)getVideoTypeWithResultPath:(id)arg1;
- (unsigned long long)currentUploadSuccessSize;
- (_Bool)shouldStopRetry;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

