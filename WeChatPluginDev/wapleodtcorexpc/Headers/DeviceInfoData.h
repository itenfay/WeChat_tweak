//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSNumber, NSString;

@interface DeviceInfoData : NSObject
{
    NSString *_deviceName;
    NSString *_deviceID;
    NSNumber *_RSSI;
    NSData *_manuData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *manuData; // @synthesize manuData=_manuData;
@property(retain, nonatomic) NSNumber *RSSI; // @synthesize RSSI=_RSSI;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;

@end

