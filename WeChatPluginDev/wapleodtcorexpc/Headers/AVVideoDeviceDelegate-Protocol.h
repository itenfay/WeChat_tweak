//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVVideoDevice, AVVideoEffect;

@protocol AVVideoDeviceDelegate <NSObject>
- (void)videoDevice:(AVVideoDevice *)arg1 didChangeRotation:(int)arg2;
- (void)videoDevice:(AVVideoDevice *)arg1 updateFilterSetting:(AVVideoEffect *)arg2 fromABTest:(_Bool)arg3;
- (void)videoDeviceCameraBack:(AVVideoDevice *)arg1;
- (void)videoDeviceCameraFront:(AVVideoDevice *)arg1;
@end

