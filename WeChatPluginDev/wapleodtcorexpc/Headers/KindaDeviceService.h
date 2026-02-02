//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface KindaDeviceService : NSObject
{
}

- (void)invokePhoneCall:(id)arg1;
- (void)updateBiometricVerificationState:(int)arg1 biometricVerificationState:(_Bool)arg2;
- (_Bool)isDeviceSupportTouchId;
- (_Bool)isDeviceSupportFaceId;
- (_Bool)isDeviceTouchIdHardwareSupported;
- (_Bool)isDeviceOpenBiometricVerification;
- (_Bool)useLastestTouchInfo;
- (id)soterUid;
- (id)soterCpuId;
- (_Bool)isRoot;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

