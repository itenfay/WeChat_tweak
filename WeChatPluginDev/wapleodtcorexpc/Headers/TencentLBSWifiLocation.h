//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CLLocation;

@interface TencentLBSWifiLocation : NSObject
{
    int _wlanUse;
    CLLocation *_location;
}

- (void).cxx_destruct;
@property(nonatomic) int wlanUse; // @synthesize wlanUse=_wlanUse;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (id)description;
- (_Bool)isWifiLocationValid;
- (id)init;

@end

