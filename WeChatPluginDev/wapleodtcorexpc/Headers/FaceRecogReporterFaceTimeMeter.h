//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface FaceRecogReporterFaceTimeMeter
{
    unsigned int _totalFrameCount;
    unsigned long long _enterTime;
    unsigned long long _enterPreConfirmPageTime;
    unsigned long long _enterFaceCameraTime;
    unsigned long long _requestConfigStartTime;
    unsigned long long _requestConfigEndTime;
    unsigned long long _recogStartTime;
    unsigned long long _verifyStartTime;
    unsigned long long _verifyEndTime;
    unsigned long long _detectFaceStartTime;
    unsigned long long _detectFaceEndTime;
    unsigned long long _poseStartTime;
    unsigned long long _poseEndTime;
    unsigned long long _guideStartTime;
    unsigned long long _guideEndTime;
    unsigned long long _uploadCdnStartTime;
    unsigned long long _uploadCdnEndTime;
    unsigned long long _livenessStartTime;
    unsigned long long _livenessEndTime;
    unsigned long long _exitTime;
}

@property(nonatomic) unsigned int totalFrameCount; // @synthesize totalFrameCount=_totalFrameCount;
@property(nonatomic) unsigned long long exitTime; // @synthesize exitTime=_exitTime;
@property(nonatomic) unsigned long long livenessEndTime; // @synthesize livenessEndTime=_livenessEndTime;
@property(nonatomic) unsigned long long livenessStartTime; // @synthesize livenessStartTime=_livenessStartTime;
@property(nonatomic) unsigned long long uploadCdnEndTime; // @synthesize uploadCdnEndTime=_uploadCdnEndTime;
@property(nonatomic) unsigned long long uploadCdnStartTime; // @synthesize uploadCdnStartTime=_uploadCdnStartTime;
@property(nonatomic) unsigned long long guideEndTime; // @synthesize guideEndTime=_guideEndTime;
@property(nonatomic) unsigned long long guideStartTime; // @synthesize guideStartTime=_guideStartTime;
@property(nonatomic) unsigned long long poseEndTime; // @synthesize poseEndTime=_poseEndTime;
@property(nonatomic) unsigned long long poseStartTime; // @synthesize poseStartTime=_poseStartTime;
@property(nonatomic) unsigned long long detectFaceEndTime; // @synthesize detectFaceEndTime=_detectFaceEndTime;
@property(nonatomic) unsigned long long detectFaceStartTime; // @synthesize detectFaceStartTime=_detectFaceStartTime;
@property(nonatomic) unsigned long long verifyEndTime; // @synthesize verifyEndTime=_verifyEndTime;
@property(nonatomic) unsigned long long verifyStartTime; // @synthesize verifyStartTime=_verifyStartTime;
@property(nonatomic) unsigned long long recogStartTime; // @synthesize recogStartTime=_recogStartTime;
@property(nonatomic) unsigned long long requestConfigEndTime; // @synthesize requestConfigEndTime=_requestConfigEndTime;
@property(nonatomic) unsigned long long requestConfigStartTime; // @synthesize requestConfigStartTime=_requestConfigStartTime;
@property(nonatomic) unsigned long long enterFaceCameraTime; // @synthesize enterFaceCameraTime=_enterFaceCameraTime;
@property(nonatomic) unsigned long long enterPreConfirmPageTime; // @synthesize enterPreConfirmPageTime=_enterPreConfirmPageTime;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
- (unsigned int)getAvgProcessTimePerFrame;
- (unsigned int)getDetectFaceTime;
- (unsigned int)getPoseTime;
- (unsigned int)getVerifyTime;

@end

