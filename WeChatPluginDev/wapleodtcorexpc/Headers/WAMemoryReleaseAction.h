//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAMemoryReleaseAction
{
    unsigned int _triggerMemoryEvent;
    unsigned int _foregroundWeAppCount;
    unsigned int _backgroundWeAppCount;
    unsigned int _foregroundSimulatedNativeCount;
    unsigned int _foregroundGameCount;
    unsigned int _backgroundGameCount;
    unsigned int _releasePolicy;
    unsigned int _releaseWeAppCount;
    unsigned int _releaseSimulatedNativeCount;
    unsigned int _releaseGameCount;
    unsigned int _releasePageCount;
    unsigned int _releasePreloadPageCount;
    unsigned int _releasePreloadWeAppCount;
    unsigned int _releasePreloadGameCount;
    unsigned int _footprintMemoryPercent;
    unsigned int _freeMemoryPercent;
    unsigned int _backgroundSimulatedNativeCount;
    unsigned long long _deviceTotalMemoryInBytes;
    unsigned long long _roundedDeviceTotalMemoryInBytes;
    unsigned long long _footprintMemoryInBytes;
    unsigned long long _freeMemoryInBytes;
    NSString *_foregroundWeAppAppIDs;
    NSString *_backgroundWeAppAppIDs;
    NSString *_foregroundGameAppIDs;
    NSString *_backgroundGameAppIDs;
    NSString *_foregroundSimulatedNativeAppIDs;
    NSString *_backgroundSimulatedNativeAppIDs;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *backgroundSimulatedNativeAppIDs; // @synthesize backgroundSimulatedNativeAppIDs=_backgroundSimulatedNativeAppIDs;
@property(copy, nonatomic) NSString *foregroundSimulatedNativeAppIDs; // @synthesize foregroundSimulatedNativeAppIDs=_foregroundSimulatedNativeAppIDs;
@property(copy, nonatomic) NSString *backgroundGameAppIDs; // @synthesize backgroundGameAppIDs=_backgroundGameAppIDs;
@property(copy, nonatomic) NSString *foregroundGameAppIDs; // @synthesize foregroundGameAppIDs=_foregroundGameAppIDs;
@property(copy, nonatomic) NSString *backgroundWeAppAppIDs; // @synthesize backgroundWeAppAppIDs=_backgroundWeAppAppIDs;
@property(copy, nonatomic) NSString *foregroundWeAppAppIDs; // @synthesize foregroundWeAppAppIDs=_foregroundWeAppAppIDs;
@property(nonatomic) unsigned int backgroundSimulatedNativeCount; // @synthesize backgroundSimulatedNativeCount=_backgroundSimulatedNativeCount;
@property(nonatomic) unsigned int freeMemoryPercent; // @synthesize freeMemoryPercent=_freeMemoryPercent;
@property(nonatomic) unsigned long long freeMemoryInBytes; // @synthesize freeMemoryInBytes=_freeMemoryInBytes;
@property(nonatomic) unsigned int footprintMemoryPercent; // @synthesize footprintMemoryPercent=_footprintMemoryPercent;
@property(nonatomic) unsigned long long footprintMemoryInBytes; // @synthesize footprintMemoryInBytes=_footprintMemoryInBytes;
@property(nonatomic) unsigned long long roundedDeviceTotalMemoryInBytes; // @synthesize roundedDeviceTotalMemoryInBytes=_roundedDeviceTotalMemoryInBytes;
@property(nonatomic) unsigned long long deviceTotalMemoryInBytes; // @synthesize deviceTotalMemoryInBytes=_deviceTotalMemoryInBytes;
@property(nonatomic) unsigned int releasePreloadGameCount; // @synthesize releasePreloadGameCount=_releasePreloadGameCount;
@property(nonatomic) unsigned int releasePreloadWeAppCount; // @synthesize releasePreloadWeAppCount=_releasePreloadWeAppCount;
@property(nonatomic) unsigned int releasePreloadPageCount; // @synthesize releasePreloadPageCount=_releasePreloadPageCount;
@property(nonatomic) unsigned int releasePageCount; // @synthesize releasePageCount=_releasePageCount;
@property(nonatomic) unsigned int releaseGameCount; // @synthesize releaseGameCount=_releaseGameCount;
@property(nonatomic) unsigned int releaseSimulatedNativeCount; // @synthesize releaseSimulatedNativeCount=_releaseSimulatedNativeCount;
@property(nonatomic) unsigned int releaseWeAppCount; // @synthesize releaseWeAppCount=_releaseWeAppCount;
@property(nonatomic) unsigned int releasePolicy; // @synthesize releasePolicy=_releasePolicy;
@property(nonatomic) unsigned int backgroundGameCount; // @synthesize backgroundGameCount=_backgroundGameCount;
@property(nonatomic) unsigned int foregroundGameCount; // @synthesize foregroundGameCount=_foregroundGameCount;
@property(nonatomic) unsigned int foregroundSimulatedNativeCount; // @synthesize foregroundSimulatedNativeCount=_foregroundSimulatedNativeCount;
@property(nonatomic) unsigned int backgroundWeAppCount; // @synthesize backgroundWeAppCount=_backgroundWeAppCount;
@property(nonatomic) unsigned int foregroundWeAppCount; // @synthesize foregroundWeAppCount=_foregroundWeAppCount;
@property(nonatomic) unsigned int triggerMemoryEvent; // @synthesize triggerMemoryEvent=_triggerMemoryEvent;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

@end

