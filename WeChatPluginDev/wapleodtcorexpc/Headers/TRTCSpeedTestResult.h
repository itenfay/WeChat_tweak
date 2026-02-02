//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TRTCSpeedTestResult : NSObject
{
    _Bool _success;
    float _upLostRate;
    float _downLostRate;
    unsigned int _rtt;
    NSString *_errMsg;
    NSString *_ip;
    long long _quality;
    long long _availableUpBandwidth;
    long long _availableDownBandwidth;
}

- (void).cxx_destruct;
@property(nonatomic) long long availableDownBandwidth; // @synthesize availableDownBandwidth=_availableDownBandwidth;
@property(nonatomic) long long availableUpBandwidth; // @synthesize availableUpBandwidth=_availableUpBandwidth;
@property(nonatomic) unsigned int rtt; // @synthesize rtt=_rtt;
@property(nonatomic) float downLostRate; // @synthesize downLostRate=_downLostRate;
@property(nonatomic) float upLostRate; // @synthesize upLostRate=_upLostRate;
@property(nonatomic) long long quality; // @synthesize quality=_quality;
@property(copy, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(copy, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (id)description;
- (id)initWithCppParams:(const void *)arg1;

@end

