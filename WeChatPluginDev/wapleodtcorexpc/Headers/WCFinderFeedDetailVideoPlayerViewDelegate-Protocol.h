//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderFeedDetailVideoPlayerView;

@protocol WCFinderFeedDetailVideoPlayerViewDelegate <NSObject>

@optional
- (int)finderDetailVideoPlayerGetCommentScene;
- (void)onFinderDetailVideoPlayerExitFullScreen;
- (void)onFinderDetailVideoPlayerExitIPhoneLandscape;
- (void)onFinderDetailVideoPlayerClickBulletSwitchBtn:(_Bool)arg1;
- (void)onFinderDetailVideoPlayerClickBulletInputBtn;
- (void)onFinderDetailVideoPlayerClickFullScreenBtn;
- (void)onFinderDetailVideoPlayerClickPauseBtn:(_Bool)arg1;
- (void)onFinderDetailVideoPlayerClickPlayRateButton;
- (void)onFinderDetailVideoPlayer:(WCFinderFeedDetailVideoPlayerView *)arg1 updateVideoPosition:(double)arg2 videoDuration:(double)arg3 maxPlayVideoTime:(double)arg4;
- (void)onFinderDetailVideoPlayerStartPan:(WCFinderFeedDetailVideoPlayerView *)arg1;
@end

