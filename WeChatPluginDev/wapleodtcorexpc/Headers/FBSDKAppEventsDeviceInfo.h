//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FBSDKAppEventsDeviceInfo : NSObject
{
    NSString *_carrierName;
    NSString *_timeZoneAbbrev;
    unsigned long long _remainingDiskSpaceGB;
    NSString *_timeZoneName;
    NSString *_bundleIdentifier;
    NSString *_longVersion;
    NSString *_shortVersion;
    NSString *_sysVersion;
    NSString *_machine;
    NSString *_language;
    unsigned long long _totalDiskSpaceGB;
    unsigned long long _coreCount;
    double _width;
    double _height;
    double _density;
    long long _lastGroup1CheckTime;
    _Bool _isEncodingDirty;
    NSString *_encodedDeviceInfo;
}

+ (id)_getCarrier;
+ (unsigned int)_readSysCtlUInt:(int)arg1 type:(int)arg2;
+ (unsigned int)_coreCount;
+ (id)_getRemainingDiskSpace;
+ (id)_getTotalDiskSpace;
+ (id)sharedDeviceInfo;
+ (void)initialize;
+ (void)extendDictionaryWithDeviceInfo:(id)arg1;
- (void).cxx_destruct;
- (id)_generateEncoding;
- (void)_collectGroup1Data;
- (_Bool)_isGroup1Expired;
- (void)_collectPersistentData;
- (void)setEncodedDeviceInfo:(id)arg1;
- (id)encodedDeviceInfo;
- (id)init;

@end

