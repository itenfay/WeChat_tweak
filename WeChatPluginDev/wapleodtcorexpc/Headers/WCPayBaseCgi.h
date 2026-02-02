//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayIdKeyRegularReporter, WXPBGeneratedMessage;
@protocol WCPayBaseCgiDelegate;

@interface WCPayBaseCgi
{
    unsigned char _routeInfo;
    _Bool _isAutoLifeCycle;
    _Bool _enableCache;
    _Bool _isNeedNotify;
    _Bool _loadCacheAndRequestModeOpen;
    _Bool _needCacheResponseOnly;
    _Bool _responseFromServer;
    unsigned int _cgiNumber;
    unsigned int _retryCount;
    unsigned int _idKeyId;
    unsigned int _idKeyKey;
    unsigned int _eventID;
    NSString *_debugModuleName;
    WXPBGeneratedMessage *_request;
    double _firstPackTimeout;
    double _expectFinishTimeout;
    unsigned long long _cacheDuration;
    unsigned long long _cacheExpiredDate;
    Class _cacheResponseClass;
    id <WCPayBaseCgiDelegate> _delegate;
    WCPayIdKeyRegularReporter *_idKeyReporter;
    WXPBGeneratedMessage *_cacheResponse;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WXPBGeneratedMessage *cacheResponse; // @synthesize cacheResponse=_cacheResponse;
@property(retain, nonatomic) WCPayIdKeyRegularReporter *idKeyReporter; // @synthesize idKeyReporter=_idKeyReporter;
@property(nonatomic) unsigned int eventID; // @synthesize eventID=_eventID;
@property(nonatomic) __weak id <WCPayBaseCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool responseFromServer; // @synthesize responseFromServer=_responseFromServer;
@property(nonatomic) _Bool needCacheResponseOnly; // @synthesize needCacheResponseOnly=_needCacheResponseOnly;
@property(nonatomic) Class cacheResponseClass; // @synthesize cacheResponseClass=_cacheResponseClass;
@property(nonatomic) _Bool loadCacheAndRequestModeOpen; // @synthesize loadCacheAndRequestModeOpen=_loadCacheAndRequestModeOpen;
@property(nonatomic) _Bool isNeedNotify; // @synthesize isNeedNotify=_isNeedNotify;
@property(nonatomic) _Bool enableCache; // @synthesize enableCache=_enableCache;
@property(nonatomic) unsigned long long cacheExpiredDate; // @synthesize cacheExpiredDate=_cacheExpiredDate;
@property(nonatomic) unsigned long long cacheDuration; // @synthesize cacheDuration=_cacheDuration;
@property(nonatomic) unsigned int idKeyKey; // @synthesize idKeyKey=_idKeyKey;
@property(nonatomic) unsigned int idKeyId; // @synthesize idKeyId=_idKeyId;
@property(nonatomic) _Bool isAutoLifeCycle; // @synthesize isAutoLifeCycle=_isAutoLifeCycle;
@property(nonatomic) unsigned char routeInfo; // @synthesize routeInfo=_routeInfo;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) double expectFinishTimeout; // @synthesize expectFinishTimeout=_expectFinishTimeout;
@property(nonatomic) double firstPackTimeout; // @synthesize firstPackTimeout=_firstPackTimeout;
@property(retain, nonatomic) WXPBGeneratedMessage *request; // @synthesize request=_request;
@property(nonatomic) unsigned int cgiNumber; // @synthesize cgiNumber=_cgiNumber;
@property(copy, nonatomic) NSString *debugModuleName; // @synthesize debugModuleName=_debugModuleName;
- (unsigned long long)getCgiNewDNSBusinessType;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)processCacheDataBeforeSetAsResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)cacheResponse:(id)arg1;
- (id)expiredDateKey;
- (id)cachePath;
- (void)loadCacheImmediately;
- (_Bool)loadCache;
- (void)failWithNetworking:(id)arg1;
- (void)setupIdKeyReporter;
- (void)startWithoutCache;
- (id)getCacheResponse;
- (void)clearResponseCache;
- (void)start;
- (void)dealloc;
- (id)init;

@end

