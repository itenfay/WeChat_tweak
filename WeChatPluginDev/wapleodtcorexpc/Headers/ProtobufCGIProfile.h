//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ProtobufCGIProfile : NSObject
{
    unsigned long long _startTime;
    unsigned long long _startConnectTime;
    unsigned long long _connectSuccessfulTime;
    unsigned long long _startTlsHandshakeTime;
    unsigned long long _tlsHandshakeSuccessfulTime;
    unsigned long long _startSendPacketTime;
    unsigned long long _sendPacketFinishedTime;
    unsigned long long _startReadPacketTime;
    unsigned long long _readPacketFinishedTime;
    unsigned long long _startEncodePacketTime;
    unsigned long long _encodePacketFinishedTime;
    unsigned long long _startDecodePacketTime;
    unsigned long long _decodePacketFinishedTime;
    unsigned long long _rtt;
    unsigned long long _channelType;
    unsigned long long _protocolType;
    NSString *_netLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *netLabel; // @synthesize netLabel=_netLabel;
@property(nonatomic) unsigned long long protocolType; // @synthesize protocolType=_protocolType;
@property(nonatomic) unsigned long long channelType; // @synthesize channelType=_channelType;
@property(nonatomic) unsigned long long rtt; // @synthesize rtt=_rtt;
@property(nonatomic) unsigned long long decodePacketFinishedTime; // @synthesize decodePacketFinishedTime=_decodePacketFinishedTime;
@property(nonatomic) unsigned long long startDecodePacketTime; // @synthesize startDecodePacketTime=_startDecodePacketTime;
@property(nonatomic) unsigned long long encodePacketFinishedTime; // @synthesize encodePacketFinishedTime=_encodePacketFinishedTime;
@property(nonatomic) unsigned long long startEncodePacketTime; // @synthesize startEncodePacketTime=_startEncodePacketTime;
@property(nonatomic) unsigned long long readPacketFinishedTime; // @synthesize readPacketFinishedTime=_readPacketFinishedTime;
@property(nonatomic) unsigned long long startReadPacketTime; // @synthesize startReadPacketTime=_startReadPacketTime;
@property(nonatomic) unsigned long long sendPacketFinishedTime; // @synthesize sendPacketFinishedTime=_sendPacketFinishedTime;
@property(nonatomic) unsigned long long startSendPacketTime; // @synthesize startSendPacketTime=_startSendPacketTime;
@property(nonatomic) unsigned long long tlsHandshakeSuccessfulTime; // @synthesize tlsHandshakeSuccessfulTime=_tlsHandshakeSuccessfulTime;
@property(nonatomic) unsigned long long startTlsHandshakeTime; // @synthesize startTlsHandshakeTime=_startTlsHandshakeTime;
@property(nonatomic) unsigned long long connectSuccessfulTime; // @synthesize connectSuccessfulTime=_connectSuccessfulTime;
@property(nonatomic) unsigned long long startConnectTime; // @synthesize startConnectTime=_startConnectTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
- (id)initWithCGIProfile:(const void *)arg1;

@end

