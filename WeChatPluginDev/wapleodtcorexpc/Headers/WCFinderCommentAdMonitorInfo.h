//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderCommentAdMonitorInfo : NSObject
{
    _Bool _hitPreload;
    _Bool _isFirstExpose;
    NSString *_tid;
    unsigned long long _aid;
    unsigned long long _netType;
    unsigned long long _contentType;
    NSString *_mediaUrl;
    unsigned long long _fileSize;
    unsigned long long _cgiCostTime;
    NSString *_traceId;
    unsigned long long _userPerceivedTime;
    unsigned long long _downloadTime;
    long long _errorCode;
    unsigned long long _imageShowTime;
    unsigned long long _firstFrameTime;
    unsigned long long _waittingCount;
    unsigned long long _totalWaittingTime;
    NSString *_waitingDetails;
    NSString *_svrIp;
    unsigned long long _svrPort;
    long long _cdnErrCode;
    long long _playerErrCode;
    unsigned long long _preloadPercent;
    unsigned long long _connectTime;
    unsigned long long _rtt;
    unsigned long long _decodeTime;
    unsigned long long _renderTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long renderTime; // @synthesize renderTime=_renderTime;
@property(nonatomic) unsigned long long decodeTime; // @synthesize decodeTime=_decodeTime;
@property(nonatomic) unsigned long long rtt; // @synthesize rtt=_rtt;
@property(nonatomic) unsigned long long connectTime; // @synthesize connectTime=_connectTime;
@property(nonatomic) unsigned long long preloadPercent; // @synthesize preloadPercent=_preloadPercent;
@property(nonatomic) long long playerErrCode; // @synthesize playerErrCode=_playerErrCode;
@property(nonatomic) long long cdnErrCode; // @synthesize cdnErrCode=_cdnErrCode;
@property(nonatomic) unsigned long long svrPort; // @synthesize svrPort=_svrPort;
@property(copy, nonatomic) NSString *svrIp; // @synthesize svrIp=_svrIp;
@property(copy, nonatomic) NSString *waitingDetails; // @synthesize waitingDetails=_waitingDetails;
@property(nonatomic) unsigned long long totalWaittingTime; // @synthesize totalWaittingTime=_totalWaittingTime;
@property(nonatomic) unsigned long long waittingCount; // @synthesize waittingCount=_waittingCount;
@property(nonatomic) unsigned long long firstFrameTime; // @synthesize firstFrameTime=_firstFrameTime;
@property(nonatomic) unsigned long long imageShowTime; // @synthesize imageShowTime=_imageShowTime;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned long long downloadTime; // @synthesize downloadTime=_downloadTime;
@property(nonatomic) unsigned long long userPerceivedTime; // @synthesize userPerceivedTime=_userPerceivedTime;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(nonatomic) unsigned long long cgiCostTime; // @synthesize cgiCostTime=_cgiCostTime;
@property(nonatomic) _Bool isFirstExpose; // @synthesize isFirstExpose=_isFirstExpose;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) _Bool hitPreload; // @synthesize hitPreload=_hitPreload;
@property(copy, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) unsigned long long netType; // @synthesize netType=_netType;
@property(nonatomic) unsigned long long aid; // @synthesize aid=_aid;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;

@end

