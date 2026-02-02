//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController;
@protocol WCFinderFeedBaseViewControllerProtocol;

@protocol WCFinderFeedDetailContentViewDelegate <NSObject>
- (MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *)feedDetailContentViewCurrentViewController;

@optional
- (void)feedDetailContentViewDoubleClickLikeMedia;
- (_Bool)feedDetailViewShouldDoubleClickLikeMedia;
- (_Bool)feedDetailContentViewRotating;
- (void)onFeedDetailContentVideoPlayUpdateVideoPosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onFeedDetailContentViewVideoExitIPhoneLandscape;
- (void)onFeedDetailContentViewVideoExitFullScreen;
- (void)onFeedDetailContentViewClickPlayerFullScreen;
- (void)onFeedDetailContentViewPhotoIndexChanged:(unsigned long long)arg1;
- (void)onFeedDetailContentViewClickPhotoImageWithIndex:(unsigned long long)arg1;
@end

