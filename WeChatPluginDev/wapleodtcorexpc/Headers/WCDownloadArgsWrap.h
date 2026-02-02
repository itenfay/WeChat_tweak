//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCDownloadArgsWrap : NSObject
{
    struct C2CDownloadRequest _request;
    _Bool _isHLSVideo;
    _Bool _isColdSNSData;
    _Bool _isHotSNSVideo;
    _Bool _isUseMultithread;
    int _hostResolvePriority;
    int _hostResolveFlag;
    unsigned int _cacheMediaType;
    int _fileType;
    int _appType;
    int _limitRate;
    int _requestVideoFormat;
    int _videoFlagPolicy;
    int _chatType;
    unsigned int _blockSize;
    unsigned int _maxHttpRedirectCount;
    unsigned int _concurrentCount;
    int _predownloadRatio;
    int _predownloadMinsize;
    int _bitrate;
    NSString *_fileKey;
    unsigned long long _downloadType;
    unsigned long long _scene;
    NSString *_formatPath;
    id _userInfo;
    NSString *_aggregateName;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completeBlock;
    NSString *_savePath;
    NSString *_fileMd5;
    unsigned long long _fileSize;
    NSString *_fileID;
    NSString *_aesKey;
    NSString *_decryptIV;
    NSString *_msgExtra;
    NSString *_cdnDebugIP;
    NSString *_requestVideoFlag;
    NSData *_finderCtrlInfo;
    NSString *_hlsVideoFlag;
    NSString *_SNSVideoColdRule;
    NSString *_url;
    NSString *_host;
    NSString *_referer;
    unsigned long long _snsDecryptKey;
    NSString *_customRequestHeader;
    unsigned long long _fileSizeMaxLimit;
    unsigned long long _statefileKeepHours;
    unsigned long long _pcdnAppid;
    unsigned long long _maxPcdnConnections;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) int bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) int predownloadMinsize; // @synthesize predownloadMinsize=_predownloadMinsize;
@property(nonatomic) int predownloadRatio; // @synthesize predownloadRatio=_predownloadRatio;
@property(nonatomic) unsigned long long maxPcdnConnections; // @synthesize maxPcdnConnections=_maxPcdnConnections;
@property(nonatomic) unsigned long long pcdnAppid; // @synthesize pcdnAppid=_pcdnAppid;
@property(nonatomic) unsigned long long statefileKeepHours; // @synthesize statefileKeepHours=_statefileKeepHours;
@property(nonatomic) unsigned long long fileSizeMaxLimit; // @synthesize fileSizeMaxLimit=_fileSizeMaxLimit;
@property(nonatomic) unsigned int concurrentCount; // @synthesize concurrentCount=_concurrentCount;
@property(nonatomic) _Bool isUseMultithread; // @synthesize isUseMultithread=_isUseMultithread;
@property(retain, nonatomic) NSString *customRequestHeader; // @synthesize customRequestHeader=_customRequestHeader;
@property(nonatomic) unsigned int maxHttpRedirectCount; // @synthesize maxHttpRedirectCount=_maxHttpRedirectCount;
@property(nonatomic) unsigned long long snsDecryptKey; // @synthesize snsDecryptKey=_snsDecryptKey;
@property(retain, nonatomic) NSString *referer; // @synthesize referer=_referer;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned int blockSize; // @synthesize blockSize=_blockSize;
@property(copy, nonatomic) NSString *SNSVideoColdRule; // @synthesize SNSVideoColdRule=_SNSVideoColdRule;
@property(nonatomic) _Bool isHotSNSVideo; // @synthesize isHotSNSVideo=_isHotSNSVideo;
@property(nonatomic) _Bool isColdSNSData; // @synthesize isColdSNSData=_isColdSNSData;
@property(nonatomic) int chatType; // @synthesize chatType=_chatType;
@property(retain, nonatomic) NSString *hlsVideoFlag; // @synthesize hlsVideoFlag=_hlsVideoFlag;
@property(nonatomic) _Bool isHLSVideo; // @synthesize isHLSVideo=_isHLSVideo;
@property(retain, nonatomic) NSData *finderCtrlInfo; // @synthesize finderCtrlInfo=_finderCtrlInfo;
@property(retain, nonatomic) NSString *requestVideoFlag; // @synthesize requestVideoFlag=_requestVideoFlag;
@property(nonatomic) int videoFlagPolicy; // @synthesize videoFlagPolicy=_videoFlagPolicy;
@property(nonatomic) int requestVideoFormat; // @synthesize requestVideoFormat=_requestVideoFormat;
@property(retain, nonatomic) NSString *cdnDebugIP; // @synthesize cdnDebugIP=_cdnDebugIP;
@property(retain, nonatomic) NSString *msgExtra; // @synthesize msgExtra=_msgExtra;
@property(nonatomic) int limitRate; // @synthesize limitRate=_limitRate;
@property(retain, nonatomic) NSString *decryptIV; // @synthesize decryptIV=_decryptIV;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *fileMd5; // @synthesize fileMd5=_fileMd5;
@property(retain, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(nonatomic) int appType; // @synthesize appType=_appType;
@property(nonatomic) int fileType; // @synthesize fileType=_fileType;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) unsigned int cacheMediaType; // @synthesize cacheMediaType=_cacheMediaType;
@property(retain, nonatomic) NSString *aggregateName; // @synthesize aggregateName=_aggregateName;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *formatPath; // @synthesize formatPath=_formatPath;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) int hostResolveFlag; // @synthesize hostResolveFlag=_hostResolveFlag;
@property(nonatomic) int hostResolvePriority; // @synthesize hostResolvePriority=_hostResolvePriority;
@property(nonatomic) unsigned long long downloadType; // @synthesize downloadType=_downloadType;
@property(retain, nonatomic) NSString *fileKey; // @synthesize fileKey=_fileKey;
- (int)getBitrate;
- (id)getFormatVideoPath;
- (id)getTempVideoPath;
- (id)getMediaWrapUrl;
- (id)getMediaWrapIdentifier;
- (struct C2CDownloadRequest)getMarsRequest;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

