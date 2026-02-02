//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol MMLiveUniqueTaskId;

@interface MMFinderLiveKTVPerfAdjustLogic : NSObject
{
    _Bool _isBlackStreamFpsNeedUpdate;
    unsigned long long _device;
    id <MMLiveUniqueTaskId> _taskId;
    long long _thermalState;
}

+ (unsigned long long)getPerfDeviceType;
- (void).cxx_destruct;
@property(nonatomic) long long thermalState; // @synthesize thermalState=_thermalState;
@property(retain, nonatomic) id <MMLiveUniqueTaskId> taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool isBlackStreamFpsNeedUpdate; // @synthesize isBlackStreamFpsNeedUpdate=_isBlackStreamFpsNeedUpdate;
@property(nonatomic) unsigned long long device; // @synthesize device=_device;
- (void)onMatrixPerfWarning:(id)arg1;
- (int)adjustBlackStreamFPSIfNeed:(int)arg1;
- (void)updateBlackStreamFPSNeedUpdate:(_Bool)arg1;
- (int)minBlackStreamFPS;
- (int)maxBlackStreamFPS;
- (void)updateThermalState:(long long)arg1;
- (void)initNotifications;
- (void)initDefaultDatas;
- (id)initWithTaskId:(id)arg1;

@end

