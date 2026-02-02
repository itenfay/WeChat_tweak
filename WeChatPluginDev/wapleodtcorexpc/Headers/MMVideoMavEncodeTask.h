//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MAVVideoComposition, VideoCompositionOutputConfig;

@interface MMVideoMavEncodeTask
{
    _Bool _isAutoRetryEnabled;
    _Bool _keepsProcessInBackgroundEnabled;
    _Bool _hasCanceledInCurrentExportSessionForApplicationSuspend;
    unsigned long long _currentAutoRetryTimes;
    MAVVideoComposition *_originalVideoComposition;
    MAVVideoComposition *_currentVideoComposition;
    VideoCompositionOutputConfig *_config;
    CDUnknownBlockType _videoExportCompletion;
}

+ (id)taskWithComposition:(id)arg1 config:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasCanceledInCurrentExportSessionForApplicationSuspend; // @synthesize hasCanceledInCurrentExportSessionForApplicationSuspend=_hasCanceledInCurrentExportSessionForApplicationSuspend;
@property(copy, nonatomic) CDUnknownBlockType videoExportCompletion; // @synthesize videoExportCompletion=_videoExportCompletion;
@property(retain, nonatomic) VideoCompositionOutputConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) MAVVideoComposition *currentVideoComposition; // @synthesize currentVideoComposition=_currentVideoComposition;
@property(retain, nonatomic) MAVVideoComposition *originalVideoComposition; // @synthesize originalVideoComposition=_originalVideoComposition;
@property(nonatomic) _Bool keepsProcessInBackgroundEnabled; // @synthesize keepsProcessInBackgroundEnabled=_keepsProcessInBackgroundEnabled;
@property(nonatomic) unsigned long long currentAutoRetryTimes; // @synthesize currentAutoRetryTimes=_currentAutoRetryTimes;
@property(nonatomic) _Bool isAutoRetryEnabled; // @synthesize isAutoRetryEnabled=_isAutoRetryEnabled;
- (void)handleApplicationWillSuspend;
- (void)handleApplicationDidBecomeActive;
- (void)handleApplicationWillResignActive;
- (_Bool)canCancelExport;
- (_Bool)shouldCallbackForCancel;
- (_Bool)shouldRetryExport;
- (void)retryExport;
- (void)continueExport;
- (void)pauseExport;
- (void)stopExport;
- (void)cleanExportSession;
- (void)exportAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_exportAsynchronously;
- (id)initWithComposition:(id)arg1 config:(id)arg2;

@end

