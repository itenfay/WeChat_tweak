//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CameraReflectDevice, NSString;
@protocol FaceRecogCheckBrightnessLogicDelegate;

@interface FaceRecogCheckBrightnessLogic : NSObject
{
    _Bool _hasCheckBrightness;
    float _lightThreshold;
    id <FaceRecogCheckBrightnessLogicDelegate> _delegate;
    CameraReflectDevice *_lightDetector;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CameraReflectDevice *lightDetector; // @synthesize lightDetector=_lightDetector;
@property(nonatomic) _Bool hasCheckBrightness; // @synthesize hasCheckBrightness=_hasCheckBrightness;
@property(nonatomic) float lightThreshold; // @synthesize lightThreshold=_lightThreshold;
@property(nonatomic) __weak id <FaceRecogCheckBrightnessLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 depthPixelBuffer:(id)arg3;
- (float)getBrightness:(struct opaqueCMSampleBuffer *)arg1;
- (void)startCheck;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

