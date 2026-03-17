//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMKDeviceService <NSObject>
- (void)invokePhoneCall:(NSString *)arg1;
- (void)updateBiometricVerificationState:(int)arg1 biometricVerificationState:(_Bool)arg2;
- (_Bool)useLastestTouchInfo;
- (NSString *)soterUid;
- (NSString *)soterCpuId;
- (_Bool)isRoot;
- (_Bool)isDeviceSupportFaceId;
- (_Bool)isDeviceSupportTouchId;
- (_Bool)isDeviceTouchIdHardwareSupported;
- (_Bool)isDeviceOpenBiometricVerification;
@end

