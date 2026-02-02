//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, TPVideoFrameBuffer, UIScrollView, UITapGestureRecognizer, UIView, WCFinderFeedContentVM, WCFinderFeedMediaWrap, WCFinderFeedStreamLiveCellRouterModel, WCFinderJumpInfoPanelView, WCFinderMediaInfo, WCFinderPlayerReport, WCFinderSimplePlayerView, WCPlayerPlaybackInfo;
@protocol WCFinderJumpInfoViewProtocol;

@protocol WCFinderFeedContentMediaActionProtocol <NSObject>

@optional
- (struct CGRect)customPlayerViewRect;
- (void)onMediaScrollViewDidZoom:(UIScrollView *)arg1;
- (void)onLivePreviewEnoughTimeToShowFollowButton;
- (void)onSimplePlayerRestoreUserInterfaceForPictureInPictureStop:(WCFinderSimplePlayerView *)arg1;
- (void)onSimplePlayerView:(WCFinderSimplePlayerView *)arg1 pictureInPictureStateDidChange:(long long)arg2;
- (void)playerView:(WCFinderSimplePlayerView *)arg1 onVideoPrepareToPlay:(WCPlayerPlaybackInfo *)arg2;
- (void)playerView:(WCFinderSimplePlayerView *)arg1 onVideoFrameOut:(TPVideoFrameBuffer *)arg2;
- (UIView *)onVideoGetBottomGuideView;
- (WCFinderJumpInfoPanelView *)onVideoGetDescTopRightJumpInfoPanelView;
- (void)onPlayerUnMuteByAudioModuleInterruptionEnd:(WCFinderSimplePlayerView *)arg1;
- (void)onPlayerMuteByAudioModuleInterruptionBegin:(WCFinderSimplePlayerView *)arg1;
- (void)onVideoPlayDecoderError:(NSString *)arg1;
- (void)onMediaCellPreparedCell:(NSString *)arg1;
- (void)shouldPauseByDeviceUnavailableAction;
- (void)onVideoWithMediaId:(NSString *)arg1 renderSize:(struct CGSize)arg2;
- (void)onVideoWithMediaId:(NSString *)arg1 startPlayTime:(unsigned long long)arg2;
- (void)onVideoWithMediaId:(NSString *)arg1 preloadFinishTime:(unsigned long long)arg2;
- (void)onVideoWithMediaId:(NSString *)arg1 preloadStartTime:(unsigned long long)arg2;
- (void)onLiveFeedToolBarShareBtnVisibleStateChange:(WCFinderFeedContentVM *)arg1;
- (void)onLiveFeedClickWithJumpInfoView:(UIView<WCFinderJumpInfoViewProtocol> *)arg1;
- (void)onLiveFeedSatisfactionQuestVisibleStateChange:(_Bool)arg1;
- (void)onLiveBeginPlay:(WCFinderMediaInfo *)arg1;
- (void)liveFeedDidTap:(WCFinderMediaInfo *)arg1 routeModel:(WCFinderFeedStreamLiveCellRouterModel *)arg2;
- (void)onVideoHiddenBufferingView;
- (void)onVideoShowBufferingView;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onVideoPlayWithReport:(WCFinderPlayerReport *)arg1 mediaWrap:(WCFinderFeedMediaWrap *)arg2 currentIndex:(unsigned long long)arg3;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (NSString *)getContentFeedUsername;
- (void)stopVideoPlayerWithReport:(WCFinderPlayerReport *)arg1 mediaWrap:(WCFinderFeedMediaWrap *)arg2 currentIndex:(unsigned long long)arg3;
- (void)onPhotoBGMDidPause;
- (void)onPhotoBGMDidPlay;
- (void)onPlayerControlViewPanEndToResumePlayVideoWithPlayPosition:(double)arg1;
- (void)onPlayerControlViewTapToResumePlayVideo;
- (void)onPlayerControlViewTapPauseVideo:(_Bool)arg1;
- (void)onVideoStopPlay;
- (void)onVideoSeekActionWithDirection:(_Bool)arg1;
- (void)retryLoadingVideoResource:(_Bool)arg1;
- (void)retryLoadingCoverImg;
- (void)photoContentPageTurning:(unsigned long long)arg1 lastIndex:(unsigned long long)arg2 scrollByManual:(_Bool)arg3;
- (void)onCurrentBGMDidEndPlay:(WCFinderFeedContentVM *)arg1;
- (void)contentMediaDidStopPlay:(WCFinderPlayerReport *)arg1;
- (void)contentMediaDidEndPlay:(WCFinderPlayerReport *)arg1;
- (void)didSelectPhotoMediaSource:(NSArray *)arg1 originRect:(struct CGRect)arg2;
- (void)onImageViewDidLoadImage:(NSString *)arg1;
- (void)onImageViewTapAction;
- (void)onImageViewDoubleTapAction:(UITapGestureRecognizer *)arg1;
- (void)didFeedDoubleTapAction;
- (_Bool)isEnableDoubleLikeAction;
- (void)didSelectVideoMediaMuteChanged:(_Bool)arg1;
- (void)didSelectVideoMediaSource:(WCFinderMediaInfo *)arg1 originRect:(struct CGRect)arg2;
- (void)browseCollectionViewLongTime:(unsigned long long)arg1;
- (UIView *)getTopBubbleView;
@end

