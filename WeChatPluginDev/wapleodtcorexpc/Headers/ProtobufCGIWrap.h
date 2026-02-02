//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMKCgi, MMKNetworkMockManager, NSData, NSString, ProtobufCGIProfile, UrlInfo, WXPBGeneratedMessage;

@interface ProtobufCGIWrap : NSObject
{
    WXPBGeneratedMessage *m_pbRequest;
    Class m_pbRespClass;
    WXPBGeneratedMessage *m_pbResponse;
    unsigned int m_uiChannelType;
    unsigned int m_uiCgi;
    unsigned int m_uiScene;
    NSString *m_nsCgiName;
    NSString *m_nsUri;
    NSData *m_dtResponseDecryptKey;
    unsigned int m_uiMessage;
    Class m_eventHandlerClass;
    NSObject *m_oUserData;
    UrlInfo *m_oUrlInfo;
    _Bool m_bNotifyPartLen;
    unsigned int m_uiRetryCount;
    double m_douTimeout;
    double m_douReadTimeout;
    int m_netwrokStrategy;
    unsigned char m_routeInfo;
    unsigned long long m_newdnsBusinessType;
    _Bool _canRetry;
    _Bool _m_longpolling;
    _Bool _m_bIsKeepAlive;
    _Bool _m_needCGIProfile;
    _Bool _isDataReportMonitor;
    short _encryptAlgo;
    unsigned int _m_uiCandidateUin;
    int _m_longPollingTimeout;
    int _stn_errType;
    int _stn_errCode;
    NSData *_requestData;
    NSData *_responseData;
    NSData *_m_retServerId;
    double _totalTimeOut;
    NSData *_m_pbResponseData;
    MMKCgi *_kindaCgi;
    MMKNetworkMockManager *_kindaMockManager;
    ProtobufCGIProfile *_cgiProfile;
    NSString *_reqHost;
}

- (void).cxx_destruct;
@property(nonatomic) int stn_errCode; // @synthesize stn_errCode=_stn_errCode;
@property(nonatomic) int stn_errType; // @synthesize stn_errType=_stn_errType;
@property(nonatomic) short encryptAlgo; // @synthesize encryptAlgo=_encryptAlgo;
@property(retain, nonatomic) NSString *reqHost; // @synthesize reqHost=_reqHost;
@property(retain, nonatomic) ProtobufCGIProfile *cgiProfile; // @synthesize cgiProfile=_cgiProfile;
@property(retain, nonatomic) MMKNetworkMockManager *kindaMockManager; // @synthesize kindaMockManager=_kindaMockManager;
@property(retain, nonatomic) MMKCgi *kindaCgi; // @synthesize kindaCgi=_kindaCgi;
@property(nonatomic) _Bool isDataReportMonitor; // @synthesize isDataReportMonitor=_isDataReportMonitor;
@property(nonatomic) _Bool m_needCGIProfile; // @synthesize m_needCGIProfile=_m_needCGIProfile;
@property(nonatomic) _Bool m_bIsKeepAlive; // @synthesize m_bIsKeepAlive=_m_bIsKeepAlive;
@property(retain, nonatomic) NSData *m_pbResponseData; // @synthesize m_pbResponseData=_m_pbResponseData;
@property(nonatomic) int m_longPollingTimeout; // @synthesize m_longPollingTimeout=_m_longPollingTimeout;
@property(nonatomic) _Bool m_longpolling; // @synthesize m_longpolling=_m_longpolling;
@property(nonatomic) double totalTimeOut; // @synthesize totalTimeOut=_totalTimeOut;
@property(nonatomic) _Bool canRetry; // @synthesize canRetry=_canRetry;
@property(nonatomic) unsigned int m_uiCandidateUin; // @synthesize m_uiCandidateUin=_m_uiCandidateUin;
@property(retain, nonatomic) NSData *m_retServerId; // @synthesize m_retServerId=_m_retServerId;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
@property(nonatomic) unsigned long long m_newdnsBusinessType; // @synthesize m_newdnsBusinessType;
@property(nonatomic) unsigned char m_routeInfo; // @synthesize m_routeInfo;
@property(nonatomic) int m_netwrokStrategy; // @synthesize m_netwrokStrategy;
@property(nonatomic) double m_douReadTimeout; // @synthesize m_douReadTimeout;
@property(nonatomic) double m_douTimeout; // @synthesize m_douTimeout;
@property(nonatomic) unsigned int m_uiRetryCount; // @synthesize m_uiRetryCount;
@property(nonatomic) _Bool m_bNotifyPartLen; // @synthesize m_bNotifyPartLen;
@property(retain, nonatomic) UrlInfo *m_oUrlInfo; // @synthesize m_oUrlInfo;
@property(retain, nonatomic) id m_oUserData; // @synthesize m_oUserData;
@property(nonatomic) Class m_eventHandlerClass; // @synthesize m_eventHandlerClass;
@property(nonatomic) unsigned int m_uiMessage; // @synthesize m_uiMessage;
@property(retain, nonatomic) NSData *m_dtResponseDecryptKey; // @synthesize m_dtResponseDecryptKey;
@property(nonatomic) unsigned int m_uiChannelType; // @synthesize m_uiChannelType;
@property(retain, nonatomic) NSString *m_nsUri; // @synthesize m_nsUri;
@property(retain, nonatomic) NSString *m_nsCgiName; // @synthesize m_nsCgiName;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
@property(nonatomic) unsigned int m_uiCgi; // @synthesize m_uiCgi;
@property(retain, nonatomic) WXPBGeneratedMessage *m_pbResponse; // @synthesize m_pbResponse;
@property(nonatomic) Class m_pbRespClass; // @synthesize m_pbRespClass;
@property(retain, nonatomic) WXPBGeneratedMessage *m_pbRequest; // @synthesize m_pbRequest;
- (id)init;
- (_Bool)isRespSuccess;

@end

