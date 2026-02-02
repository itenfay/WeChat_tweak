//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSDictionary, NSString, YTVideoRecorder;

@interface ActionLivenessState
{
    void *faceCheckLivePose;
    vector_8ca568ff bestImgShape;
    struct Mat eyeImg;
    struct Mat mouthImg;
    vector_8ca568ff eyeShape;
    vector_8ca568ff mouthShape;
    vector_083faa51 currentFrameList;
    struct Mat currentBestFrame;
    YTVideoRecorder *videoRecorder;
    NSString *videoPath;
    NSString *extraTips;
    _Bool currentActionDoneAndWaitRecordFlag;
    _Bool needLocalConfig;
    _Bool isRecordFinished;
    int codecSettingBitRate;
    int codecSettingiFrameInterval;
    int stableFrameCount;
    int innerWaitFrameCount;
    _Bool isManual;
    int poseType;
    NSString *controlConfig;
    int actReflectMode;
    NSDictionary *innerConfig;
    void *trackInfo;
    NSString *anchorWidths;
    float secondaryYawThreshold;
    float secondaryPitchThreshold;
    float secondaryRollThreshold;
    float secondaryCloseMouthThreshold;
    _Bool needActionBestImageRigorous;
    _Bool _needReflect;
    _Bool _canTransitToReflect;
    _Bool _ActionFinished;
    int _actCurrent;
    int _continuousPassCount;
    NSArray *_actArray;
    unsigned long long _actIndex;
    struct YTPOSE *_facePose;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool ActionFinished; // @synthesize ActionFinished=_ActionFinished;
@property(nonatomic) struct YTPOSE *facePose; // @synthesize facePose=_facePose;
@property(nonatomic) _Bool canTransitToReflect; // @synthesize canTransitToReflect=_canTransitToReflect;
@property(nonatomic) _Bool needReflect; // @synthesize needReflect=_needReflect;
@property(nonatomic) int continuousPassCount; // @synthesize continuousPassCount=_continuousPassCount;
@property(nonatomic) int actCurrent; // @synthesize actCurrent=_actCurrent;
@property(nonatomic) unsigned long long actIndex; // @synthesize actIndex=_actIndex;
@property(retain, nonatomic) NSArray *actArray; // @synthesize actArray=_actArray;
- (id)depthDataChecksum:(id)arg1;
- (id)checksumV2:(id)arg1;
- (void)handleInnerAction:(id)arg1 data:(id)arg2;
- (void)resetCountDown;
- (void)handleEvent:(id)arg1;
- (void)resetParam;
- (void)sendStateEvent;
- (void)sendUIEvent;
- (void)resetPoseDetect;
- (_Bool)changeToNextAction;
- (int)poseDetect:(vector_8ca568ff)arg1 visVec:(vector_8ca568ff)arg2 poseType:(int)arg3 matRgb:(struct Mat)arg4 pitch:(float)arg5 yaw:(float)arg6 roll:(float)arg7;
- (int)handleActionFinished:(long long)arg1;
- (void)update:(struct Mat)arg1 withTimeStamp:(unsigned long long)arg2;
- (void)reset;
- (void)enter;
- (void)unload;
- (void)loadWithName:(id)arg1 withSDKConfigData:(id)arg2;
- (vector_8ca568ff)covnertFaceShape:(void *)arg1;
- (void)addFaceShapePoint:(vector_4c9ad6d1)arg1 withFacePoints:(void *)arg2;
- (vector_083faa51)convertMatList:(void *)arg1;
- (struct Mat)convertMat:(void *)arg1;

@end

