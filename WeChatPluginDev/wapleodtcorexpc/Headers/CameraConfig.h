//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CameraConfig : NSObject
{
}

+ (void)checkAccessCameraAndShowAlertFor:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (_Bool)tryShowAccessCameraAlert;
+ (_Bool)canAccessCamera;
+ (_Bool)isBlackCameraSize480x640;
+ (_Bool)isBlackCameraSize720x1280;
+ (_Bool)isBlackCameraSize1080x1920;
+ (struct CGSize)getBlackCameraSizeByPreset:(id)arg1;
+ (id)getBlackCameraPreset;

@end

