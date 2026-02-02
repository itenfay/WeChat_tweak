//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface FaceRecogReporterFaceErrCounter
{
    unsigned int _faceOkCount;
    unsigned int _motionOkCount;
    unsigned int _noFaceCount;
    unsigned int _systemErrCount;
    unsigned int _noLiveFaceCount;
    unsigned int _tooDarkCount;
    unsigned int _tooLightCount;
    unsigned int _backLightCount;
    unsigned int _tooSmallCount;
    unsigned int _tooBigCount;
    unsigned int _tooActiveCount;
    unsigned int _poseInvalidCount;
    unsigned int _timeoutCount;
    unsigned int _trackFailedCount;
    unsigned int _unstableCount;
    unsigned int _poseType;
}

@property(nonatomic) unsigned int poseType; // @synthesize poseType=_poseType;
@property(nonatomic) unsigned int unstableCount; // @synthesize unstableCount=_unstableCount;
@property(nonatomic) unsigned int trackFailedCount; // @synthesize trackFailedCount=_trackFailedCount;
@property(nonatomic) unsigned int timeoutCount; // @synthesize timeoutCount=_timeoutCount;
@property(nonatomic) unsigned int poseInvalidCount; // @synthesize poseInvalidCount=_poseInvalidCount;
@property(nonatomic) unsigned int tooActiveCount; // @synthesize tooActiveCount=_tooActiveCount;
@property(nonatomic) unsigned int tooBigCount; // @synthesize tooBigCount=_tooBigCount;
@property(nonatomic) unsigned int tooSmallCount; // @synthesize tooSmallCount=_tooSmallCount;
@property(nonatomic) unsigned int backLightCount; // @synthesize backLightCount=_backLightCount;
@property(nonatomic) unsigned int tooLightCount; // @synthesize tooLightCount=_tooLightCount;
@property(nonatomic) unsigned int tooDarkCount; // @synthesize tooDarkCount=_tooDarkCount;
@property(nonatomic) unsigned int noLiveFaceCount; // @synthesize noLiveFaceCount=_noLiveFaceCount;
@property(nonatomic) unsigned int systemErrCount; // @synthesize systemErrCount=_systemErrCount;
@property(nonatomic) unsigned int noFaceCount; // @synthesize noFaceCount=_noFaceCount;
@property(nonatomic) unsigned int motionOkCount; // @synthesize motionOkCount=_motionOkCount;
@property(nonatomic) unsigned int faceOkCount; // @synthesize faceOkCount=_faceOkCount;
- (void)recordErrType:(int)arg1;

@end

