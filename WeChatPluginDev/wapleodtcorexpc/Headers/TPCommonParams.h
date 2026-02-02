//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPCommonParams : NSObject
{
    float _videoFrameRate;
    NSString *_flowId;
    NSString *_guid;
    long long _seq;
    long long _platformType;
    long long _devType;
    long long _networkType;
    NSString *_deviceName;
    NSString *_osVer;
    NSString *_appName;
    NSString *_appVer;
    NSString *_playerVer;
    NSString *_reportProtocolVer;
    long long _durationMs;
    long long _hlsSourceType;
    long long _playerType;
    long long _urlProtocol;
    NSString *_containerFormat;
    long long _videoEncodeFmt;
    long long _audioEncodeFmt;
    long long _subtitleEncodeFmt;
    long long _streamBitrateKbps;
    NSString *_url;
    NSString *_resolution;
    NSString *_dataTransportVer;
    long long _speedKbps;
    long long _useDataTransport;
    NSString *_dataTransportProtocolVer;
    NSString *_cdnUip;
    NSString *_cdnIp;
    long long _platform;
    NSString *_playerConfig;
    long long _drmAbility;
}

- (void).cxx_destruct;
@property(nonatomic) long long drmAbility; // @synthesize drmAbility=_drmAbility;
@property(copy, nonatomic) NSString *playerConfig; // @synthesize playerConfig=_playerConfig;
@property(nonatomic) long long platform; // @synthesize platform=_platform;
@property(copy, nonatomic) NSString *cdnIp; // @synthesize cdnIp=_cdnIp;
@property(copy, nonatomic) NSString *cdnUip; // @synthesize cdnUip=_cdnUip;
@property(copy, nonatomic) NSString *dataTransportProtocolVer; // @synthesize dataTransportProtocolVer=_dataTransportProtocolVer;
@property(nonatomic) long long useDataTransport; // @synthesize useDataTransport=_useDataTransport;
@property(nonatomic) long long speedKbps; // @synthesize speedKbps=_speedKbps;
@property(copy, nonatomic) NSString *dataTransportVer; // @synthesize dataTransportVer=_dataTransportVer;
@property(copy, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) float videoFrameRate; // @synthesize videoFrameRate=_videoFrameRate;
@property(nonatomic) long long streamBitrateKbps; // @synthesize streamBitrateKbps=_streamBitrateKbps;
@property(nonatomic) long long subtitleEncodeFmt; // @synthesize subtitleEncodeFmt=_subtitleEncodeFmt;
@property(nonatomic) long long audioEncodeFmt; // @synthesize audioEncodeFmt=_audioEncodeFmt;
@property(nonatomic) long long videoEncodeFmt; // @synthesize videoEncodeFmt=_videoEncodeFmt;
@property(copy, nonatomic) NSString *containerFormat; // @synthesize containerFormat=_containerFormat;
@property(nonatomic) long long urlProtocol; // @synthesize urlProtocol=_urlProtocol;
@property(nonatomic) long long playerType; // @synthesize playerType=_playerType;
@property(nonatomic) long long hlsSourceType; // @synthesize hlsSourceType=_hlsSourceType;
@property(nonatomic) long long durationMs; // @synthesize durationMs=_durationMs;
@property(copy, nonatomic) NSString *reportProtocolVer; // @synthesize reportProtocolVer=_reportProtocolVer;
@property(copy, nonatomic) NSString *playerVer; // @synthesize playerVer=_playerVer;
@property(copy, nonatomic) NSString *appVer; // @synthesize appVer=_appVer;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *osVer; // @synthesize osVer=_osVer;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(nonatomic) long long networkType; // @synthesize networkType=_networkType;
@property(nonatomic) long long devType; // @synthesize devType=_devType;
@property(nonatomic) long long platformType; // @synthesize platformType=_platformType;
@property(nonatomic) long long seq; // @synthesize seq=_seq;
@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(copy, nonatomic) NSString *flowId; // @synthesize flowId=_flowId;
- (id)init;

@end

