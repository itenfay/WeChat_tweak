//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface KSUPnPDiscoveryRequest : NSObject
{
    NSString *_UUID;
    NSString *_host;
    long long _port;
    NSString *_man;
    NSString *_searchTarget;
    NSString *_userAgent;
    unsigned long long _maximumResponseDelay;
    double _socketSendTimeoutInterval;
    double _socketReceiveTimeoutInterval;
}

- (void).cxx_destruct;
@property(nonatomic) double socketReceiveTimeoutInterval; // @synthesize socketReceiveTimeoutInterval=_socketReceiveTimeoutInterval;
@property(nonatomic) double socketSendTimeoutInterval; // @synthesize socketSendTimeoutInterval=_socketSendTimeoutInterval;
@property(nonatomic) unsigned long long maximumResponseDelay; // @synthesize maximumResponseDelay=_maximumResponseDelay;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(copy, nonatomic) NSString *searchTarget; // @synthesize searchTarget=_searchTarget;
@property(copy, nonatomic) NSString *man; // @synthesize man=_man;
@property(nonatomic) long long port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (id)generateRequestData;
- (id)init;

@end

