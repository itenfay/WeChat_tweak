//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMMotionManager, NSString;

@interface SensorListener : NSObject
{
    CMMotionManager *motionManager;
    NSString *lastOrientation;
}

- (void).cxx_destruct;
- (void)stopOrientationListener;
- (void)getOrientation:(CDUnknownBlockType)arg1;
- (void)startOrientationListener:(CDUnknownBlockType)arg1;
- (void)initMotionManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

