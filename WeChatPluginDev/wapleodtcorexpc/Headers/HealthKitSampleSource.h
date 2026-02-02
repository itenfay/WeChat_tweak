//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface HealthKitSampleSource
{
    _Bool _bIsAppleWatch;
    _Bool _bIsLocalDevice;
    _Bool _bIsInWhiteList;
    unsigned int _uiStepCount;
    NSString *_nsBundleId;
    NSString *_nsAppName;
}

+ (void)initialize;
+ (void)PBArrayAdd_bIsInWhiteList;
+ (void)PBArrayAdd_bIsLocalDevice;
+ (void)PBArrayAdd_bIsAppleWatch;
+ (void)PBArrayAdd_uiStepCount;
+ (void)PBArrayAdd_nsAppName;
+ (void)PBArrayAdd_nsBundleId;
- (void).cxx_destruct;
@property(nonatomic) _Bool bIsInWhiteList; // @synthesize bIsInWhiteList=_bIsInWhiteList;
@property(nonatomic) _Bool bIsLocalDevice; // @synthesize bIsLocalDevice=_bIsLocalDevice;
@property(nonatomic) _Bool bIsAppleWatch; // @synthesize bIsAppleWatch=_bIsAppleWatch;
@property(nonatomic) unsigned int uiStepCount; // @synthesize uiStepCount=_uiStepCount;
@property(retain, nonatomic) NSString *nsAppName; // @synthesize nsAppName=_nsAppName;
@property(retain, nonatomic) NSString *nsBundleId; // @synthesize nsBundleId=_nsBundleId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

