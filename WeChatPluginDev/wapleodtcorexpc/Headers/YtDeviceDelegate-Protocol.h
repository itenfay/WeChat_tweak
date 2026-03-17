//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVCaptureDevice, AVCaptureSession, NSData, NSString;

@protocol YtDeviceDelegate <NSObject>
- (void)onReflectStart:(long long)arg1;
- (void)onReflectEventWithArgb:(unsigned int)arg1 withLight:(double)arg2;
- (AVCaptureSession *)getCaptureSession;
- (AVCaptureDevice *)getCaptureDevice;

@optional
- (NSString *)encodeBase64:(NSData *)arg1;
- (NSData *)getVoiceData;
@end

