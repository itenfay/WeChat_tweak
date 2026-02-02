//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TPDownloadRecord : NSObject
{
    NSString *_cdnUip;
    NSString *_cdnIp;
    NSString *_cdnUrl;
    long long _speed;
    long long _maxSpeed;
    long long _totalSpeed;
    long long _totalSpeedCount;
    NSDictionary *_extraInfo;
    NSString *_protocol;
    NSString *_protocolVer;
    long long _hitDownloaded;
}

- (void).cxx_destruct;
@property(nonatomic) long long hitDownloaded; // @synthesize hitDownloaded=_hitDownloaded;
@property(retain, nonatomic) NSString *protocolVer; // @synthesize protocolVer=_protocolVer;
@property(retain, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(copy, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) long long totalSpeedCount; // @synthesize totalSpeedCount=_totalSpeedCount;
@property(nonatomic) long long totalSpeed; // @synthesize totalSpeed=_totalSpeed;
@property(nonatomic) long long maxSpeed; // @synthesize maxSpeed=_maxSpeed;
@property(nonatomic) long long speed; // @synthesize speed=_speed;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl=_cdnUrl;
@property(retain, nonatomic) NSString *cdnIp; // @synthesize cdnIp=_cdnIp;
@property(retain, nonatomic) NSString *cdnUip; // @synthesize cdnUip=_cdnUip;

@end

