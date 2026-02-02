//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableString, YTLiveDetector, YtTimerCounter;

@interface SilentLivenessState
{
    CDStruct_0edc81f6 trackInfo;
    struct YTPOSE pose;
    struct CGRect detectRect;
    struct CGRect previewRect;
    float eyeOpenThreshold;
    _Bool needEyeOpenCheck;
    int pitchThreshold;
    int yawThreshold;
    int rollThreshold;
    float bigThreshold;
    float smallThreshold;
    float inRectThreshold;
    float blurDetectThreshold;
    float faceInRectRatio;
    int continueCloseEyeCount;
    int continueBlurCount;
    _Bool isManual;
    _Bool triggerLiveBeginEventFlag;
    _Bool tipFilterFlag;
    _Bool needBigFaceMode;
    int stableFrameCount;
    vector_8ca568ff bestShape;
    vector_8ca568ff eyeShape;
    vector_8ca568ff mouthShape;
    struct Mat bestMat;
    float maxEyeScore;
    float minEyeScore;
    float maxMouthScore;
    float minMouthScore;
    float maxInRectRatio;
    double maxBlureScore;
    float maxShelterScore;
    float bigThresholdBuffer;
    float smallThresholdBuffer;
    float poseThresholdBuffer;
    int continueNoValidFaceCount;
    int continueNoValidFaceCountThreshold;
    _Bool needForcePoseCheckFlag;
    _Bool needShelterCheckFlag;
    YtTimerCounter *timeCounter;
    YtTimerCounter *predetectTimeCounter;
    int currentTipAdvise;
    int currentShelterResult;
    int previousShelterResult;
    int continueShelterCount;
    int frameNum;
    _Bool needFaceDirectionDetect;
    _Bool _firstStableStatePass;
    int _continuousPassCount;
    int _currentAdvise;
    int _currentShelter;
    int _sameUITipCount;
    YTLiveDetector *_liveDetector;
    NSMutableString *_currentTips;
    NSMutableArray *_currentFacePoints;
}

+ (id)parseAdvise:(int)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool firstStableStatePass; // @synthesize firstStableStatePass=_firstStableStatePass;
@property(nonatomic) int sameUITipCount; // @synthesize sameUITipCount=_sameUITipCount;
@property(retain, nonatomic) NSMutableArray *currentFacePoints; // @synthesize currentFacePoints=_currentFacePoints;
@property(nonatomic) int currentShelter; // @synthesize currentShelter=_currentShelter;
@property(nonatomic) int currentAdvise; // @synthesize currentAdvise=_currentAdvise;
@property(nonatomic) int continuousPassCount; // @synthesize continuousPassCount=_continuousPassCount;
@property(retain, nonatomic) NSMutableString *currentTips; // @synthesize currentTips=_currentTips;
@property(retain, nonatomic) YTLiveDetector *liveDetector; // @synthesize liveDetector=_liveDetector;
- (_Bool)checkActionStage;
- (void)sendUIEventWithValue:(id)arg1 withType:(id)arg2;
- (void)sendUIEventWithPose:(int)arg1 withBlock:(int)arg2;
- (id)parseShelter:(int)arg1;
- (int)shelterJudge:(vector_8ca568ff)arg1;
- (float)preCheckCloseEye:(struct TC_FaceShape)arg1;
- (int)getFacePreviewAdvise:(struct CGRect)arg1 faceInPreview:(struct CGRect)arg2 pitch:(float)arg3 yaw:(float)arg4 roll:(float)arg5 imageWidth:(int)arg6 imageHeight:(int)arg7 faceRect:(struct CGRect)arg8 facePoints:(id)arg9;
- (int)faceLocationDetect:(struct CGRect)arg1 targetRect:(struct CGRect)arg2;
- (void)handleInnerAction:(id)arg1 data:(id)arg2;
- (void)moveToNextState;
- (void)handleEvent:(id)arg1;
- (void)updateSDKSetting:(id)arg1;
- (void)update:(struct Mat)arg1 withTimeStamp:(unsigned long long)arg2;
- (int)stableShelter:(int)arg1;
- (void)checkBestImage:(struct Mat)arg1 withTrackInfo:(CDStruct_0edc81f6)arg2 withInRectRatio:(float)arg3 withBlurScore:(double)arg4;
- (vector_8ca568ff)covnertFaceShape:(void *)arg1;
- (id)convertFaceFiveShape:(vector_8ca568ff)arg1;
- (void)addFaceShapePoint:(vector_4c9ad6d1)arg1 withFacePoints:(void *)arg2;
- (void)reset;
- (void)exit;
- (void)enter;
- (void)unload;
- (void)loadWithName:(id)arg1 withSDKConfigData:(id)arg2;

@end

