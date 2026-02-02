//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMCameraMultiSessionUtil : NSObject
{
}

+ (id)_getBuiltInTripleCamera;
+ (id)_getBuiltInDualWideCamera;
+ (id)_getBuiltInTelephotoCamera;
+ (id)_getBuiltInUltraWideCamera;
+ (id)_getBuiltInWideAngleCamera;
+ (void)_safeInsertUniqueFactorInfo:(id)arg1 intoSortedList:(id)arg2;
+ (id)cameraWithPosition:(long long)arg1 deviceType:(id)arg2 needFallBackDevice:(_Bool)arg3;
+ (id)cameraWithPosition:(long long)arg1 deviceType:(id)arg2;
+ (id)getCameraGroup;
+ (id)getCameraZoomFactorInfo;
+ (id)getCameraSwitchableZoomFactors;
+ (_Bool)supportBuiltInBackTripleCamera;
+ (_Bool)supportBuiltInBackDualWideCamera;
+ (_Bool)supportMultiCameraSession;

@end

