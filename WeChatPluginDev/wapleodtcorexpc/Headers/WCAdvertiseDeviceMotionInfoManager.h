//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMDeviceMotion, CMMotionManager, NSMutableDictionary, NSObject;

@interface WCAdvertiseDeviceMotionInfoManager
{
    CMMotionManager *_motionManager;
    NSObject *_motionManagerLock;
    NSMutableDictionary *_attachedObjects;
    CMDeviceMotion *_lastMotion;
}

+ (id)getInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) CMDeviceMotion *lastMotion; // @synthesize lastMotion=_lastMotion;
@property(retain, nonatomic) NSMutableDictionary *attachedObjects; // @synthesize attachedObjects=_attachedObjects;
@property(retain, nonatomic) NSObject *motionManagerLock; // @synthesize motionManagerLock=_motionManagerLock;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
- (_Bool)didMotionDataUpdatedSinceLastMotion:(id)arg1;
- (id)fetchCurrentDeviceMotion;
- (void)delayUpdateLastMotion;
- (void)detachDeviceMotionManagerWithObject:(id)arg1;
- (void)attachDeviceMotionManagerWithObject:(id)arg1;
- (void)onViewDidEnterBackground:(id)arg1;
- (void)removeNotificationObserver;
- (void)initNotificationObserver;
- (id)init;

@end

