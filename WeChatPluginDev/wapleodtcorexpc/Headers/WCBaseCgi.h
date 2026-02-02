//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, ProtobufCGIProfile, WXPBGeneratedMessage;
@protocol WCBaseCgiDelegate;

@interface WCBaseCgi
{
    _Bool _isDataReportMonitor;
    _Bool _isNeedNotify;
    _Bool _isSpeedy;
    _Bool _isTreatBaseResponseRetAsNetworkingRet;
    _Bool _isAutoLifeCycle;
    _Bool _longPolling;
    _Bool _logResponseWithJsonFormat;
    _Bool _needCGIProfile;
    _Bool _canRetry;
    unsigned int _cgiNumber;
    unsigned int _retryCount;
    int _longPollingTimeout;
    unsigned int _channelType;
    unsigned int _eventID;
    NSString *_debugModuleName;
    WXPBGeneratedMessage *_request;
    double _serverProcessCost;
    double _totalTimeout;
    NSData *_respDecryptKey;
    unsigned long long _cgiStatus;
    id <WCBaseCgiDelegate> _baseDelegate;
    unsigned long long _cacheType;
    Class _cacheResponseClass;
    unsigned long long _cacheDuration;
    unsigned long long _cacheExpiredDate;
    NSString *_cacheExtraKey;
    ProtobufCGIProfile *_cgiProfile;
    NSData *_requestData;
    NSString *_cgiUrl;
    WXPBGeneratedMessage *_cacheResponse;
}

+ (id)genBaseRequestWithScene:(unsigned int)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_eventID;
+ (void)PBArrayAdd_cacheExpiredDate;
+ (void)PBArrayAdd_cacheDuration;
+ (void)PBArrayAdd_cacheType;
+ (void)PBArrayAdd_cgiStatus;
+ (void)PBArrayAdd_isAutoLifeCycle;
+ (void)PBArrayAdd_isNeedNotify;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_request;
+ (void)PBArrayAdd_cgiNumber;
+ (void)PBArrayAdd_debugModuleName;
- (void).cxx_destruct;
@property(retain, nonatomic) WXPBGeneratedMessage *cacheResponse; // @synthesize cacheResponse=_cacheResponse;
@property(nonatomic) unsigned int eventID; // @synthesize eventID=_eventID;
@property(nonatomic) _Bool canRetry; // @synthesize canRetry=_canRetry;
@property(nonatomic) unsigned int channelType; // @synthesize channelType=_channelType;
@property(copy, nonatomic) NSString *cgiUrl; // @synthesize cgiUrl=_cgiUrl;
@property(retain, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
@property(retain, nonatomic) ProtobufCGIProfile *cgiProfile; // @synthesize cgiProfile=_cgiProfile;
@property(nonatomic) _Bool needCGIProfile; // @synthesize needCGIProfile=_needCGIProfile;
@property(copy, nonatomic) NSString *cacheExtraKey; // @synthesize cacheExtraKey=_cacheExtraKey;
@property(nonatomic) unsigned long long cacheExpiredDate; // @synthesize cacheExpiredDate=_cacheExpiredDate;
@property(nonatomic) unsigned long long cacheDuration; // @synthesize cacheDuration=_cacheDuration;
@property(nonatomic) Class cacheResponseClass; // @synthesize cacheResponseClass=_cacheResponseClass;
@property(nonatomic) unsigned long long cacheType; // @synthesize cacheType=_cacheType;
@property(nonatomic) _Bool logResponseWithJsonFormat; // @synthesize logResponseWithJsonFormat=_logResponseWithJsonFormat;
@property(nonatomic) int longPollingTimeout; // @synthesize longPollingTimeout=_longPollingTimeout;
@property(nonatomic) _Bool longPolling; // @synthesize longPolling=_longPolling;
@property(nonatomic) __weak id <WCBaseCgiDelegate> baseDelegate; // @synthesize baseDelegate=_baseDelegate;
@property(nonatomic) unsigned long long cgiStatus; // @synthesize cgiStatus=_cgiStatus;
@property(copy, nonatomic) NSData *respDecryptKey; // @synthesize respDecryptKey=_respDecryptKey;
@property(nonatomic) double totalTimeout; // @synthesize totalTimeout=_totalTimeout;
@property(nonatomic) double serverProcessCost; // @synthesize serverProcessCost=_serverProcessCost;
@property(nonatomic) _Bool isAutoLifeCycle; // @synthesize isAutoLifeCycle=_isAutoLifeCycle;
@property(nonatomic) _Bool isTreatBaseResponseRetAsNetworkingRet; // @synthesize isTreatBaseResponseRetAsNetworkingRet=_isTreatBaseResponseRetAsNetworkingRet;
@property(nonatomic) _Bool isSpeedy; // @synthesize isSpeedy=_isSpeedy;
@property(nonatomic) _Bool isNeedNotify; // @synthesize isNeedNotify=_isNeedNotify;
@property(nonatomic) _Bool isDataReportMonitor; // @synthesize isDataReportMonitor=_isDataReportMonitor;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) WXPBGeneratedMessage *request; // @synthesize request=_request;
@property(nonatomic) unsigned int cgiNumber; // @synthesize cgiNumber=_cgiNumber;
@property(copy, nonatomic) NSString *debugModuleName; // @synthesize debugModuleName=_debugModuleName;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponseData:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)cacheResponse:(id)arg1;
- (id)cacheResponseKey;
- (id)expiredDateKey;
- (void)loadCacheImmediately;
- (_Bool)loadCache;
- (void)failWithNetworking:(int)arg1 m_uiMessage:(int)arg2 response:(id)arg3;
- (void)failWithNetworking:(int)arg1 response:(id)arg2;
- (void)startWithoutCache;
- (_Bool)prepareStart;
- (void)clearResponseCache;
- (void)removeEvent;
- (void)start;
- (void)dealloc;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

