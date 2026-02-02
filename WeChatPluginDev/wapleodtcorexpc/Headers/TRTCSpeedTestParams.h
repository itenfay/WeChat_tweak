//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TRTCSpeedTestParams : NSObject
{
    unsigned int _sdkAppId;
    NSString *_userId;
    NSString *_userSig;
    long long _expectedUpBandwidth;
    long long _expectedDownBandwidth;
}

- (void).cxx_destruct;
@property(nonatomic) long long expectedDownBandwidth; // @synthesize expectedDownBandwidth=_expectedDownBandwidth;
@property(nonatomic) long long expectedUpBandwidth; // @synthesize expectedUpBandwidth=_expectedUpBandwidth;
@property(copy, nonatomic) NSString *userSig; // @synthesize userSig=_userSig;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) unsigned int sdkAppId; // @synthesize sdkAppId=_sdkAppId;
- (id)description;
- (struct SpeedTestParams)convertToCppParams;

@end

