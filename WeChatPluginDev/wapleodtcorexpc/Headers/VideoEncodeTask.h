//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ABAReportPrams, AVAsset, AVMutableVideoComposition, NSMutableArray, NSString, NSURL, VideoEncodeParams;

@interface VideoEncodeTask : NSObject
{
    _Bool _isEncoding;
    _Bool _isCanceled;
    _Bool _isReplicable;
    NSURL *_inputPath;
    NSURL *_outputPath;
    AVAsset *_asset;
    VideoEncodeParams *_params;
    NSMutableArray *_callbacks;
    AVMutableVideoComposition *_videoComposition;
    NSString *_taskId;
    CDUnknownBlockType _videoProgressCallback;
    unsigned long long _applicationResignActiveTimes;
    unsigned long long _applicationSuspendTimes;
    NSMutableArray *_audioSessionStatus;
    NSString *_exportFilePath;
    ABAReportPrams *_videoScoreParams;
}

+ (_Bool)isCancel:(id)arg1;
+ (id)errorWithCode:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) ABAReportPrams *videoScoreParams; // @synthesize videoScoreParams=_videoScoreParams;
@property(copy, nonatomic) NSString *exportFilePath; // @synthesize exportFilePath=_exportFilePath;
@property(retain, nonatomic) NSMutableArray *audioSessionStatus; // @synthesize audioSessionStatus=_audioSessionStatus;
@property(nonatomic) unsigned long long applicationSuspendTimes; // @synthesize applicationSuspendTimes=_applicationSuspendTimes;
@property(nonatomic) unsigned long long applicationResignActiveTimes; // @synthesize applicationResignActiveTimes=_applicationResignActiveTimes;
@property(copy, nonatomic) CDUnknownBlockType videoProgressCallback; // @synthesize videoProgressCallback=_videoProgressCallback;
@property(copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) AVMutableVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(nonatomic) _Bool isReplicable; // @synthesize isReplicable=_isReplicable;
@property(nonatomic) _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(nonatomic) _Bool isEncoding; // @synthesize isEncoding=_isEncoding;
@property(retain, nonatomic) NSMutableArray *callbacks; // @synthesize callbacks=_callbacks;
@property(retain, nonatomic) VideoEncodeParams *params; // @synthesize params=_params;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(copy, nonatomic) NSURL *outputPath; // @synthesize outputPath=_outputPath;
@property(copy, nonatomic) NSURL *inputPath; // @synthesize inputPath=_inputPath;
- (void)onAudioSessionSilenceSecondaryAudioHint:(id)arg1;
- (void)onAudioSessionMediaServicesWereReset:(id)arg1;
- (void)onAudioSessionMediaServicesWereLost:(id)arg1;
- (void)onAudioSessionRouteChange:(id)arg1;
- (void)onAudioSessionInterrupt:(id)arg1;
- (void)handleApplicationWillSuspend;
- (void)handleApplicationDidBecomeActive;
- (void)handleApplicationWillResignActive;
- (void)onApplicationWillSuspend;
- (void)onApplicationDidBecomeActive;
- (void)onApplicationWillResignActive;
- (void)setupNotification;
- (_Bool)isValidPreComposeTask;
- (void)stopExport;
- (void)cleanExportSession;
- (void)cleanOutputFilePathIfNeeded;
- (void)exportAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)canCancelExport;
- (_Bool)shouldCallbackForCancel;
- (_Bool)cancel;
- (void)callbackSuccess:(id)arg1 compressDuration:(double)arg2;
- (void)dealloc;
- (id)init;

@end

