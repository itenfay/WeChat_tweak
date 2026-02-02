//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface TPDownloadParamData : NSObject
{
    _Bool _isCharge;
    _Bool _needEncryptCache;
    _Bool _isOffline;
    _Bool _disableExpandDownloadUrl;
    _Bool _isCacheCopyFirst;
    _Bool _isNeedFlowControl;
    NSString *_url;
    NSArray *_backUrl;
    long long _dlType;
    long long _taskType;
    NSString *_downloadFileID;
    NSString *_vid;
    NSArray *_urlCdnIDList;
    NSArray *_urlCdnIDHttpHeaderList;
    long long _urlExpireTime;
    long long _fileSize;
    long long _fileDuration;
    NSString *_playDefinition;
    NSString *_currentFormat;
    long long _currentFormatID;
    NSDictionary *_formatInfo;
    long long _starTimeMS;
    long long _endTimeMS;
    long long _clipCount;
    long long _clipNo;
    NSString *_fileMD5;
    NSString *_base;
    NSString *_linkVid;
    NSString *_m3u8;
    long long _tm;
    long long _fp2p;
    NSString *_testId;
    NSString *_flowId;
    long long _preloadSize;
    long long _preloadDuration;
    NSString *_savePath;
    long long _exceptDelayMs;
    NSString *_nonce;
    NSString *_deckey;
    NSString *_random;
    NSArray *_defInfoList;
    NSArray *_secondaryM3u8List;
    long long _bandwidthLevel;
    NSDictionary *_extInfoMap;
    NSString *_sceneId;
    NSString *_pcdnChargeId;
    long long _preloadHttpStartTimeMs;
}

- (void).cxx_destruct;
@property(nonatomic) long long preloadHttpStartTimeMs; // @synthesize preloadHttpStartTimeMs=_preloadHttpStartTimeMs;
@property(nonatomic) _Bool isNeedFlowControl; // @synthesize isNeedFlowControl=_isNeedFlowControl;
@property(nonatomic) _Bool isCacheCopyFirst; // @synthesize isCacheCopyFirst=_isCacheCopyFirst;
@property(copy, nonatomic) NSString *pcdnChargeId; // @synthesize pcdnChargeId=_pcdnChargeId;
@property(copy, nonatomic) NSString *sceneId; // @synthesize sceneId=_sceneId;
@property(copy, nonatomic) NSDictionary *extInfoMap; // @synthesize extInfoMap=_extInfoMap;
@property(nonatomic) _Bool disableExpandDownloadUrl; // @synthesize disableExpandDownloadUrl=_disableExpandDownloadUrl;
@property(nonatomic) long long bandwidthLevel; // @synthesize bandwidthLevel=_bandwidthLevel;
@property(copy, nonatomic) NSArray *secondaryM3u8List; // @synthesize secondaryM3u8List=_secondaryM3u8List;
@property(copy, nonatomic) NSArray *defInfoList; // @synthesize defInfoList=_defInfoList;
@property(copy, nonatomic) NSString *random; // @synthesize random=_random;
@property(copy, nonatomic) NSString *deckey; // @synthesize deckey=_deckey;
@property(copy, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(nonatomic) long long exceptDelayMs; // @synthesize exceptDelayMs=_exceptDelayMs;
@property(nonatomic) _Bool isOffline; // @synthesize isOffline=_isOffline;
@property(copy, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(nonatomic) long long preloadDuration; // @synthesize preloadDuration=_preloadDuration;
@property(nonatomic) long long preloadSize; // @synthesize preloadSize=_preloadSize;
@property(copy, nonatomic) NSString *flowId; // @synthesize flowId=_flowId;
@property(copy, nonatomic) NSString *testId; // @synthesize testId=_testId;
@property(nonatomic) long long fp2p; // @synthesize fp2p=_fp2p;
@property(nonatomic) long long tm; // @synthesize tm=_tm;
@property(copy, nonatomic) NSString *m3u8; // @synthesize m3u8=_m3u8;
@property(copy, nonatomic) NSString *linkVid; // @synthesize linkVid=_linkVid;
@property(copy, nonatomic) NSString *base; // @synthesize base=_base;
@property(copy, nonatomic) NSString *fileMD5; // @synthesize fileMD5=_fileMD5;
@property(nonatomic) long long clipNo; // @synthesize clipNo=_clipNo;
@property(nonatomic) long long clipCount; // @synthesize clipCount=_clipCount;
@property(nonatomic) long long endTimeMS; // @synthesize endTimeMS=_endTimeMS;
@property(nonatomic) long long starTimeMS; // @synthesize starTimeMS=_starTimeMS;
@property(nonatomic) _Bool needEncryptCache; // @synthesize needEncryptCache=_needEncryptCache;
@property(nonatomic) _Bool isCharge; // @synthesize isCharge=_isCharge;
@property(copy, nonatomic) NSDictionary *formatInfo; // @synthesize formatInfo=_formatInfo;
@property(nonatomic) long long currentFormatID; // @synthesize currentFormatID=_currentFormatID;
@property(copy, nonatomic) NSString *currentFormat; // @synthesize currentFormat=_currentFormat;
@property(copy, nonatomic) NSString *playDefinition; // @synthesize playDefinition=_playDefinition;
@property(nonatomic) long long fileDuration; // @synthesize fileDuration=_fileDuration;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) long long urlExpireTime; // @synthesize urlExpireTime=_urlExpireTime;
@property(copy, nonatomic) NSArray *urlCdnIDHttpHeaderList; // @synthesize urlCdnIDHttpHeaderList=_urlCdnIDHttpHeaderList;
@property(copy, nonatomic) NSArray *urlCdnIDList; // @synthesize urlCdnIDList=_urlCdnIDList;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *downloadFileID; // @synthesize downloadFileID=_downloadFileID;
@property(nonatomic) long long taskType; // @synthesize taskType=_taskType;
@property(nonatomic) long long dlType; // @synthesize dlType=_dlType;
@property(copy, nonatomic) NSArray *backUrl; // @synthesize backUrl=_backUrl;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (id)initWithDownloadFileID:(id)arg1 downloadType:(long long)arg2;
- (id)initWithDownloadFileID:(id)arg1;

@end

