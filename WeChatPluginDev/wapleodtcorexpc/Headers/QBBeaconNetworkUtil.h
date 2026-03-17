//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QBBeaconNetworkUtil : NSObject
{
}

+ (id)getMobileNetType;
+ (id)getAPN;
+ (id)getIMSI;
+ (_Bool)activeWWAN;
+ (_Bool)activeWLAN;
+ (_Bool)networkAvaliable;
+ (id)getWifiName;
+ (id)getWifiMac;

@end

