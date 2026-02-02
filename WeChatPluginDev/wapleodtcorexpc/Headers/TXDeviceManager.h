//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TXDeviceManager : NSObject
{
    weak_ptr_65a257e1 deviceManager_;
    CDUnknownBlockType _micTestBlock;
    CDUnknownBlockType _speakerTestBlock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType speakerTestBlock; // @synthesize speakerTestBlock=_speakerTestBlock;
@property(copy, nonatomic) CDUnknownBlockType micTestBlock; // @synthesize micTestBlock=_micTestBlock;
- (void)onTestSpeakerVolume:(unsigned int)arg1;
- (void)onTestMicVolume:(unsigned int)arg1;
- (long long)setSystemVolumeType:(long long)arg1;
- (long long)setAudioRoute:(long long)arg1;
- (long long)enableCameraTorch:(_Bool)arg1;
- (_Bool)isCameraTorchSupported;
- (long long)setCameraFocusPosition:(struct CGPoint)arg1;
- (long long)enableCameraAutoFocus:(_Bool)arg1;
- (_Bool)isAutoFocusEnabled;
- (long long)setCameraZoomRatio:(double)arg1;
- (double)getCameraZoomMaxRatio;
- (_Bool)isCameraZoomSupported;
- (long long)switchCamera:(_Bool)arg1;
- (_Bool)isFrontCamera;
- (void)setInternelDeviceManager:(weak_ptr_65a257e1)arg1;

@end

