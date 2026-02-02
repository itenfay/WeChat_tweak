//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WADataPipePerformance : NSObject
{
    _Bool _isConcurrent;
    _Bool _needConfirm;
    unsigned int _concurrentTimeout;
    unsigned int _dataLengthInBytes;
    unsigned int _currentQueueNum;
    unsigned long long _datapipeType;
    unsigned long long _concurrentPriority;
    unsigned long long _enqueueTimeInMs;
    unsigned long long _dequeueTimeInMs;
    unsigned long long _beginCgiTimeInMs;
    unsigned long long _cgiCallbackTimeInMs;
    unsigned long long _beginCgiAfterConfirmTimeInMs;
    unsigned long long _cgiCallbackAfterConfirmTimeInMs;
    unsigned long long _confirmTimeInMs;
    unsigned long long _confirmResponseTimeInMs;
    unsigned long long _dataResponseTimeInMs;
    unsigned long long _taskStartTime;
    unsigned long long _startConnectTime;
    unsigned long long _connectSuccessfulTime;
    unsigned long long _startHandshakeTime;
    unsigned long long _handshakeSuccessfulTime;
    unsigned long long _startSendPacketTime;
    unsigned long long _startReadPacketTime;
    unsigned long long _readPacketFinishedTime;
    unsigned long long _rtt;
    unsigned long long _channelType;
    unsigned long long _protocolType;
    NSString *_netType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *netType; // @synthesize netType=_netType;
@property(nonatomic) unsigned long long protocolType; // @synthesize protocolType=_protocolType;
@property(nonatomic) unsigned long long channelType; // @synthesize channelType=_channelType;
@property(nonatomic) unsigned long long rtt; // @synthesize rtt=_rtt;
@property(nonatomic) unsigned long long readPacketFinishedTime; // @synthesize readPacketFinishedTime=_readPacketFinishedTime;
@property(nonatomic) unsigned long long startReadPacketTime; // @synthesize startReadPacketTime=_startReadPacketTime;
@property(nonatomic) unsigned long long startSendPacketTime; // @synthesize startSendPacketTime=_startSendPacketTime;
@property(nonatomic) unsigned long long handshakeSuccessfulTime; // @synthesize handshakeSuccessfulTime=_handshakeSuccessfulTime;
@property(nonatomic) unsigned long long startHandshakeTime; // @synthesize startHandshakeTime=_startHandshakeTime;
@property(nonatomic) unsigned long long connectSuccessfulTime; // @synthesize connectSuccessfulTime=_connectSuccessfulTime;
@property(nonatomic) unsigned long long startConnectTime; // @synthesize startConnectTime=_startConnectTime;
@property(nonatomic) unsigned long long taskStartTime; // @synthesize taskStartTime=_taskStartTime;
@property(nonatomic) unsigned long long dataResponseTimeInMs; // @synthesize dataResponseTimeInMs=_dataResponseTimeInMs;
@property(nonatomic) unsigned long long confirmResponseTimeInMs; // @synthesize confirmResponseTimeInMs=_confirmResponseTimeInMs;
@property(nonatomic) unsigned long long confirmTimeInMs; // @synthesize confirmTimeInMs=_confirmTimeInMs;
@property(nonatomic) _Bool needConfirm; // @synthesize needConfirm=_needConfirm;
@property(nonatomic) unsigned long long cgiCallbackAfterConfirmTimeInMs; // @synthesize cgiCallbackAfterConfirmTimeInMs=_cgiCallbackAfterConfirmTimeInMs;
@property(nonatomic) unsigned long long beginCgiAfterConfirmTimeInMs; // @synthesize beginCgiAfterConfirmTimeInMs=_beginCgiAfterConfirmTimeInMs;
@property(nonatomic) unsigned long long cgiCallbackTimeInMs; // @synthesize cgiCallbackTimeInMs=_cgiCallbackTimeInMs;
@property(nonatomic) unsigned long long beginCgiTimeInMs; // @synthesize beginCgiTimeInMs=_beginCgiTimeInMs;
@property(nonatomic) unsigned long long dequeueTimeInMs; // @synthesize dequeueTimeInMs=_dequeueTimeInMs;
@property(nonatomic) unsigned long long enqueueTimeInMs; // @synthesize enqueueTimeInMs=_enqueueTimeInMs;
@property(nonatomic) unsigned int currentQueueNum; // @synthesize currentQueueNum=_currentQueueNum;
@property(nonatomic) unsigned int dataLengthInBytes; // @synthesize dataLengthInBytes=_dataLengthInBytes;
@property(nonatomic) unsigned int concurrentTimeout; // @synthesize concurrentTimeout=_concurrentTimeout;
@property(nonatomic) unsigned long long concurrentPriority; // @synthesize concurrentPriority=_concurrentPriority;
@property(nonatomic) _Bool isConcurrent; // @synthesize isConcurrent=_isConcurrent;
@property(nonatomic) unsigned long long datapipeType; // @synthesize datapipeType=_datapipeType;

@end

