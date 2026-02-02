//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, MMFinderLiveWcPlayerViewConfig, MMLiveStorageCleanupPinningToken, NSMutableArray, NSString, WCPlayerView;
@protocol MMFinderLiveWcPlayerViewModelDelegate, OS_dispatch_semaphore;

@interface MMFinderLiveWcPlayerViewModel : NSObject
{
    _Bool _muted;
    _Bool _isFirstFrameRendered;
    _Bool _hiddenPlayerView;
    WCPlayerView *playerView;
    MMFinderLiveWcPlayerViewConfig *_config;
    NSString *_playUrl;
    unsigned long long _status;
    id <MMFinderLiveWcPlayerViewModelDelegate> _delegate;
    NSString *_pipViewName;
    NSString *_pipBusinessId;
    MMLiveStorageCleanupPinningToken *_filePinningToken;
    MMFinderLiveTaskId *_taskId;
    NSMutableArray *_tempARGBColorRequestTaskList;
    NSMutableArray *_tempYUVColorRequestTaskList;
    NSObject<OS_dispatch_semaphore> *_tempARGBReqTaskLock;
    NSObject<OS_dispatch_semaphore> *_tempYUVReqTaskLock;
    struct CGRect _normalizedFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *tempYUVReqTaskLock; // @synthesize tempYUVReqTaskLock=_tempYUVReqTaskLock;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *tempARGBReqTaskLock; // @synthesize tempARGBReqTaskLock=_tempARGBReqTaskLock;
@property(retain, nonatomic) NSMutableArray *tempYUVColorRequestTaskList; // @synthesize tempYUVColorRequestTaskList=_tempYUVColorRequestTaskList;
@property(retain, nonatomic) NSMutableArray *tempARGBColorRequestTaskList; // @synthesize tempARGBColorRequestTaskList=_tempARGBColorRequestTaskList;
@property(nonatomic) _Bool hiddenPlayerView; // @synthesize hiddenPlayerView=_hiddenPlayerView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMLiveStorageCleanupPinningToken *filePinningToken; // @synthesize filePinningToken=_filePinningToken;
@property(nonatomic) _Bool isFirstFrameRendered; // @synthesize isFirstFrameRendered=_isFirstFrameRendered;
@property(nonatomic) struct CGRect normalizedFrame; // @synthesize normalizedFrame=_normalizedFrame;
@property(retain, nonatomic) NSString *pipBusinessId; // @synthesize pipBusinessId=_pipBusinessId;
@property(retain, nonatomic) NSString *pipViewName; // @synthesize pipViewName=_pipViewName;
@property(nonatomic) __weak id <MMFinderLiveWcPlayerViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(readonly, nonatomic) MMFinderLiveWcPlayerViewConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak WCPlayerView *playerView; // @synthesize playerView;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)stopObserveVolume;
- (void)startObserveVolume;
- (void)showThumbImageView;
- (void)showPercentView;
- (void)showBufferingView;
- (void)onVideoSizeChange:(struct CGSize)arg1;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onVideoPlayFinish;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoFristFrameRendered;
- (void)onVideoDidPlayToEndTime;
- (void)onReceiveAllVideoData;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)onPlayerGetSeiInfo:(id)arg1;
- (void)onDownloadProgressChange:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onDataSourceChangeSuccessWithDownloadArgsWrap:(id)arg1;
- (void)onDataSourceChangeSucc:(id)arg1;
- (void)onDataSourceChangeStart:(id)arg1;
- (void)onCreateThumbImage:(id)arg1;
- (void)hiddenThumbImageView;
- (void)hiddenPercentView;
- (void)hiddenBufferingView;
- (id)generateDownloadArgsWrap;
- (id)createPlayerInfo;
- (void)requestYUVColorAtNormalizedCoordinateList:(id)arg1 fromRectWithSize:(struct CGSize)arg2 callback:(CDUnknownBlockType)arg3;
- (void)requestARGBColorAtNormalizedCoordinateList:(id)arg1 fromRectWithSize:(struct CGSize)arg2 callback:(CDUnknownBlockType)arg3;
- (unsigned long long)getCurrentStatus;
- (_Bool)resume;
- (_Bool)pause;
- (_Bool)play;
- (void)playFinish;
- (void)updatePlayInitialTime:(unsigned int)arg1;
- (void)updatePlayUri:(id)arg1 isLocalFile:(_Bool)arg2;
- (void)updateLocalFilePath:(id)arg1;
- (void)updateRemotePlayUrl:(id)arg1;
- (void)initDefaultData;
- (id)initTaskId:(id)arg1 config:(id)arg2;
- (CDStruct_77932685)readYUVColorInPixelPoint:(struct CGPoint)arg1 pixelBuffer:(struct __CVBuffer *)arg2 ret:(_Bool *)arg3;
- (CDStruct_abf36e01)readARGBColorInPixelPoint:(struct CGPoint)arg1 pixelBuffer:(struct __CVBuffer *)arg2 ret:(_Bool *)arg3;
- (struct CGPoint)convertNormalizedCoordinate:(struct CGPoint)arg1 toPointInPixelBuffer:(struct __CVBuffer *)arg2 pixelBufferDisplayNormalizedFrame:(struct CGRect)arg3;
- (struct CGRect)convertNormalizedDisplayFrameFromPixelBuffer:(struct __CVBuffer *)arg1 withDisplaySize:(struct CGSize)arg2;
- (void)extractPixelColorWithRequestTaskList:(id)arg1 fromPixelBufferIfNeeded:(struct __CVBuffer *)arg2;
- (void)checkTempARGBColorRequestTaskListOverLimit;
- (void)checkTempYUVColorRequestTaskListOverLimit;
- (void)extractPixelColorInfoFromPixelBufferIfNeeded:(struct __CVBuffer *)arg1;
- (void)addTempYUVColorRequestTask:(id)arg1;
- (void)addTempARGBColorRequestTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

