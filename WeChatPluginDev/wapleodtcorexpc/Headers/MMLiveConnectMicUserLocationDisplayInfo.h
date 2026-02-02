//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveConnectMicUserLocationDisplayInfo : NSObject
{
    _Bool _isOver;
    NSString *_sdkUserId;
    NSString *_locationName;
    unsigned long long _expiredTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isOver; // @synthesize isOver=_isOver;
@property(nonatomic) unsigned long long expiredTime; // @synthesize expiredTime=_expiredTime;
@property(copy, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
@property(copy, nonatomic) NSString *sdkUserId; // @synthesize sdkUserId=_sdkUserId;

@end

