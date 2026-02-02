//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WAPackageDownloadProtocolInfo : NSObject
{
    _Bool _useHttp2;
    _Bool _useQuic;
    _Bool _socketReused;
    _Bool _useDownloadResumption;
    int _rtt;
    int _statusCode;
    int _networkEstimateType;
    int _httpRttEstimate;
    int _transportRttEstimate;
    int _downstreamThroughputKbpsEstimate;
    int _throughputKbps;
    int _peerPort;
    unsigned int _dnsType;
    unsigned long long _protocol;
    unsigned long long _downloadType;
    unsigned long long _taskStartTime;
    unsigned long long _redirectStartTime;
    unsigned long long _redirectEndTime;
    unsigned long long _fetchStartTime;
    unsigned long long _domainLookUpStartTime;
    unsigned long long _domainLookUpEndTime;
    unsigned long long _connectStartTime;
    unsigned long long _connectEndTime;
    unsigned long long _secureConnectionStartTime;
    unsigned long long _secureConnectionEndTime;
    unsigned long long _requestStartTime;
    unsigned long long _requestEndTime;
    unsigned long long _responseStartTime;
    unsigned long long _responseEndTime;
    NSString *_protocolStr;
    NSString *_peerIp;
    long long _sentBytesCount;
    long long _receivedBytesCount;
    NSDictionary *_headerDic;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useDownloadResumption; // @synthesize useDownloadResumption=_useDownloadResumption;
@property(retain, nonatomic) NSDictionary *headerDic; // @synthesize headerDic=_headerDic;
@property(nonatomic) unsigned int dnsType; // @synthesize dnsType=_dnsType;
@property(nonatomic) long long receivedBytesCount; // @synthesize receivedBytesCount=_receivedBytesCount;
@property(nonatomic) long long sentBytesCount; // @synthesize sentBytesCount=_sentBytesCount;
@property(nonatomic) _Bool socketReused; // @synthesize socketReused=_socketReused;
@property(nonatomic) int peerPort; // @synthesize peerPort=_peerPort;
@property(copy, nonatomic) NSString *peerIp; // @synthesize peerIp=_peerIp;
@property(nonatomic) int throughputKbps; // @synthesize throughputKbps=_throughputKbps;
@property(nonatomic) int downstreamThroughputKbpsEstimate; // @synthesize downstreamThroughputKbpsEstimate=_downstreamThroughputKbpsEstimate;
@property(nonatomic) int transportRttEstimate; // @synthesize transportRttEstimate=_transportRttEstimate;
@property(nonatomic) int httpRttEstimate; // @synthesize httpRttEstimate=_httpRttEstimate;
@property(nonatomic) int networkEstimateType; // @synthesize networkEstimateType=_networkEstimateType;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) int rtt; // @synthesize rtt=_rtt;
@property(copy, nonatomic) NSString *protocolStr; // @synthesize protocolStr=_protocolStr;
@property(nonatomic) unsigned long long responseEndTime; // @synthesize responseEndTime=_responseEndTime;
@property(nonatomic) unsigned long long responseStartTime; // @synthesize responseStartTime=_responseStartTime;
@property(nonatomic) unsigned long long requestEndTime; // @synthesize requestEndTime=_requestEndTime;
@property(nonatomic) unsigned long long requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(nonatomic) unsigned long long secureConnectionEndTime; // @synthesize secureConnectionEndTime=_secureConnectionEndTime;
@property(nonatomic) unsigned long long secureConnectionStartTime; // @synthesize secureConnectionStartTime=_secureConnectionStartTime;
@property(nonatomic) unsigned long long connectEndTime; // @synthesize connectEndTime=_connectEndTime;
@property(nonatomic) unsigned long long connectStartTime; // @synthesize connectStartTime=_connectStartTime;
@property(nonatomic) unsigned long long domainLookUpEndTime; // @synthesize domainLookUpEndTime=_domainLookUpEndTime;
@property(nonatomic) unsigned long long domainLookUpStartTime; // @synthesize domainLookUpStartTime=_domainLookUpStartTime;
@property(nonatomic) unsigned long long fetchStartTime; // @synthesize fetchStartTime=_fetchStartTime;
@property(nonatomic) unsigned long long redirectEndTime; // @synthesize redirectEndTime=_redirectEndTime;
@property(nonatomic) unsigned long long redirectStartTime; // @synthesize redirectStartTime=_redirectStartTime;
@property(nonatomic) unsigned long long taskStartTime; // @synthesize taskStartTime=_taskStartTime;
@property(nonatomic) _Bool useQuic; // @synthesize useQuic=_useQuic;
@property(nonatomic) _Bool useHttp2; // @synthesize useHttp2=_useHttp2;
@property(nonatomic) unsigned long long downloadType; // @synthesize downloadType=_downloadType;
@property(nonatomic) unsigned long long protocol; // @synthesize protocol=_protocol;
- (id)initWithProtocol:(unsigned long long)arg1;

@end

