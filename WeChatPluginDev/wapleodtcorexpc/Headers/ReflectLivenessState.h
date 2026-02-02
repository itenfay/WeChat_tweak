//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVCaptureDevice, AVCaptureSession, NSMutableArray, NSString, UIColor, YTFaceHandle, YtTimerCounter;

@interface ReflectLivenessState
{
    struct YTFullPack pack;
    UIColor *originShapeColor;
    AVCaptureDevice *inputCamera;
    AVCaptureSession *captureSession;
    int poseType;
    _Bool needLocalConfig;
    int stableFrameCount;
    int originDetectInterval;
    int randomChangePointNum;
    NSString *randomExtraConfig;
    _Bool needRandomFlag;
    _Bool needForcePoseCheckFlag;
    YtTimerCounter *tipsTimeCounter;
    NSString *controlConfig;
    double originBrightness;
    int actReflectMode;
    int reflectImagesShortenStrategy;
    int _continuousPassCount;
    float _lux;
    YTFaceHandle *_faceHandle;
    NSMutableArray *_currentFacePoints;
    NSString *_mRgbConfig;
    unsigned long long _curState;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long curState; // @synthesize curState=_curState;
@property(nonatomic) float lux; // @synthesize lux=_lux;
@property(retain, nonatomic) NSString *mRgbConfig; // @synthesize mRgbConfig=_mRgbConfig;
@property(retain, nonatomic) NSMutableArray *currentFacePoints; // @synthesize currentFacePoints=_currentFacePoints;
@property(nonatomic) int continuousPassCount; // @synthesize continuousPassCount=_continuousPassCount;
@property(retain, nonatomic) YTFaceHandle *faceHandle; // @synthesize faceHandle=_faceHandle;
- (id)getCaptureDevice;
- (void)setCameraSettings:(long long)arg1 iso:(int)arg2;
- (void)resetCountDown;
- (void)resetParam;
- (void)changeToState:(unsigned long long)arg1;
- (void)startRelfect;
- (void)stopCamera;
- (void)sendCameraEvent:(id)arg1;
- (void)sendUIEventWithLight:(double)arg1 withColor:(unsigned int)arg2;
- (void)sendUIEventWithValue:(id)arg1 withType:(id)arg2;
- (void)update:(struct Mat)arg1 withTimeStamp:(unsigned long long)arg2;
- (void)reset;
- (void)enter;
- (void)onPause;
- (void)unload;
- (void)loadWithName:(id)arg1 withSDKConfigData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

