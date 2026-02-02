//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE, WCFinderFeedContentVM, WCPlayerView;

@interface _TtC6WeChat14WCFinderPIPMgr
{
    MISSING_TYPE *sourceContentVM;
    MISSING_TYPE *curContentVM;
    MISSING_TYPE *curPlayerView;
    MISSING_TYPE *is_pip_status;
    MISSING_TYPE *currentVolume;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
@property(nonatomic) _Bool is_pip_status; // @synthesize is_pip_status;
@property(nonatomic, retain) WCPlayerView *curPlayerView; // @synthesize curPlayerView;
@property(nonatomic, retain) WCFinderFeedContentVM *curContentVM; // @synthesize curContentVM;
@property(nonatomic, retain) WCFinderFeedContentVM *sourceContentVM; // @synthesize sourceContentVM;
- (void)onPlayerDidStopPictureInPicture:(id)arg1;
- (void)onPlayerDidStartPictureInPicture;
- (void)onPlayerWillStartPictureInPicture;
- (void)onPlayerWillStopPictureInPicture;
- (void)onPlayerRestoreUserInterface;
- (void)onPipSourcePlayerUnRegisterPipResource:(id)arg1;
- (void)reportReplay;
- (void)reportPlayFinished;
- (void)reportPlay;
- (void)reportPause;
- (void)reportSeekFromTime:(double)arg1 toTime:(double)arg2;
- (void)reportClose:(id)arg1 contentVM:(id)arg2 reason:(long long)arg3;
- (void)reportCreate:(id)arg1 contentVM:(id)arg2;
- (void)volumeChangedBeforeIOS15WithNotification:(id)arg1;
- (void)volumeChangedAfterIOS15WithNotification:(id)arg1;
- (void)willTerminated;
- (void)didEnterBackGround;
- (void)reportEnterForeground;
- (void)onEnterForeground;
- (void)removePIPNotify;
- (void)addPIPNotify;
- (void)removeNotify;
- (void)addNotify;

@end

