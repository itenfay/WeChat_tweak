//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId;

@interface MMFinderLivePictureInPictureReporter : NSObject
{
    MMFinderLiveTaskId *_taskID;
    unsigned long long _pipStartTime;
    unsigned long long _lastPauseTime;
    unsigned long long _pauseDuration;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long pauseDuration; // @synthesize pauseDuration=_pauseDuration;
@property(nonatomic) unsigned long long lastPauseTime; // @synthesize lastPauseTime=_lastPauseTime;
@property(nonatomic) unsigned long long pipStartTime; // @synthesize pipStartTime=_pipStartTime;
@property(retain, nonatomic) MMFinderLiveTaskId *taskID; // @synthesize taskID=_taskID;
- (void)clearLastDatas;
- (id)audienceLogReporter;
- (void)onPictureInPictureResume;
- (void)onPictureInPicturePause;
- (void)reportForResumePictureInPicture;
- (void)reportForPausePictureInPicture;
- (void)reportForRestorePictureInPicture;
- (void)reportForClosePictureInPicture;
- (void)reportForStopPictureInPicture;
- (void)reportForStartPictureInPicture;

@end

