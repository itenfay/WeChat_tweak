//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MotionDetector, NSString;

@interface UploadDetectLogic
{
    int _retryTimes;
    struct CGSize _qmpSize;
    int _motionState;
    _Bool _isForOcr;
    MotionDetector *_motionDetector;
    int _uploadTimes;
    _Bool _canUpload;
    struct timeval _lastProcessTime;
}

- (void).cxx_destruct;
@property(nonatomic) int motionState; // @synthesize motionState=_motionState;
@property(nonatomic) int retryTimes; // @synthesize retryTimes=_retryTimes;
- (void)feedbackCameraFocused;
- (void)feedbackMotionStateChanged:(int)arg1;
- (void)uploadRetry;
- (void)cancelUpload;
- (_Bool)canUpload;
- (void)process:(char *)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;
- (id)initWithFocusEngineSize:(struct CGSize)arg1 IsForOcr:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

