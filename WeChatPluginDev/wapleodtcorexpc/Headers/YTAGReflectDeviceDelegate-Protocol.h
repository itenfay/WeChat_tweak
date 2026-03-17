//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVCaptureDevice;

@protocol YTAGReflectDeviceDelegate <NSObject>
- (AVCaptureDevice *)getCaptureDevice;
- (void)setCameraSettings:(long long)arg1 iso:(int)arg2;
@end

