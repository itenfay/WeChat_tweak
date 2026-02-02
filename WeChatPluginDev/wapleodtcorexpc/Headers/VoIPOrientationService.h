//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMMotionManager, NSString;

@interface VoIPOrientationService
{
    _Bool _isSystemLockActived;
    double _deviceAngleDegree;
    long long _deviceOrientation;
    long long _motionOrientation;
    CMMotionManager *_motion;
}

+ (long long)interfaceOrientation;
+ (long long)realtimeDeviceOrientation;
+ (_Bool)isMiniInAppViewEnableWithRemoteClientVersion:(unsigned int)arg1 remoteDevice:(id)arg2;
+ (_Bool)shouldShowSystemLockToastWithRemoteClientVersion:(unsigned int)arg1 remoteDevice:(id)arg2;
+ (_Bool)isEnableWithRemoteClientVersion:(unsigned int)arg1 remoteDevice:(id)arg2;
+ (_Bool)shouldUpdateDeviceAngleDegree;
+ (_Bool)isEnable;
+ (int)flagWithOrientation:(long long)arg1 isFrontCamera:(_Bool)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CMMotionManager *motion; // @synthesize motion=_motion;
@property(nonatomic) _Bool isSystemLockActived; // @synthesize isSystemLockActived=_isSystemLockActived;
@property(nonatomic) long long motionOrientation; // @synthesize motionOrientation=_motionOrientation;
@property(nonatomic) long long deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(nonatomic) double deviceAngleDegree; // @synthesize deviceAngleDegree=_deviceAngleDegree;
- (void)didChangeRotation:(id)arg1;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)dealloc;
- (id)init;
- (void)close;
- (void)open;
@property(readonly, nonatomic) _Bool isMotionActived;
- (void)updateDeviceOrientation:(long long)arg1;
- (void)updateDeviceAngleDegree:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

