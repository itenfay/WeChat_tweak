//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMWifiInfo : NSObject
{
    NSString *_wifiSSID;
    NSString *_wifiBSSID;
    unsigned long long _updateTimeInMs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long updateTimeInMs; // @synthesize updateTimeInMs=_updateTimeInMs;
@property(retain, nonatomic) NSString *wifiBSSID; // @synthesize wifiBSSID=_wifiBSSID;
@property(retain, nonatomic) NSString *wifiSSID; // @synthesize wifiSSID=_wifiSSID;
- (void)accessWifiInfo:(id *)arg1 BSSID:(id *)arg2;

@end

