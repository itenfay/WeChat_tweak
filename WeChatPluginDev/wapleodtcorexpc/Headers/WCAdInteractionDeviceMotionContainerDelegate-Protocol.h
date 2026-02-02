//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCAdInteractionDeviceMotionContainerDelegate <NSObject>

@optional
- (void)deviceMotionAccelerationChangedWithX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (void)deviceMotionOrientationChangedWithXAngle:(double)arg1 yAngle:(double)arg2 zAngle:(double)arg3;
@end

