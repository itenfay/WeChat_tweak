//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIImage;

@protocol WACameraLogicControllerDelegate <NSObject>

@optional
- (void)onCameraDidRotate;
- (void)onCameraFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)onCameraVideoRecordingWithFrameImg:(UIImage *)arg1;
- (void)onCameraVideoTakenFail;
- (void)onCameraVideoTakenSuccess:(NSString *)arg1 thumbImg:(UIImage *)arg2 isMuted:(_Bool)arg3;
- (void)onCameraPictureTaken:(UIImage *)arg1 withFrontCamera:(_Bool)arg2;
- (void)onCameraScanCode:(NSDictionary *)arg1;
- (void)onCameraStopRecord;
- (void)onCameraStartRecord:(int)arg1;
- (void)onCameraStop;
- (void)onCameraInitDone;
- (void)onCameraNeedAuthCancel;
@end

