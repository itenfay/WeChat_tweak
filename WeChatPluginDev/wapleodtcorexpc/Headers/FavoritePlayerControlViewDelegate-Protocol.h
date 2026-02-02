//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol FavoritePlayerControlViewDelegate <NSObject>

@optional
- (void)onRawVideoDownloadSuccess;
- (void)onPlayProgressChanged:(double)arg1 totalTime:(double)arg2;
- (void)onGetVideoViewBottomLineCenterY:(double *)arg1 leftPartOffset:(double *)arg2 rightPartWidth:(double *)arg3 rightPartMargin:(double *)arg4;
- (double)getBottomRightMargin;
- (void)setToolViewHidden:(_Bool)arg1;
- (void)onClickToCancelPlayRawVideo;
- (void)onClickToPlayRawVideo;
- (void)onSliderPlayVideo;
- (void)onSliderPauseVideo;
- (void)onProgressBarEndSeek:(double)arg1;
- (void)onProgressBarBeginSeek;
- (void)onSightProgressBarHidden;
- (void)onClickPlayAttachVideoBtn;
- (void)onClickDetailButton;
- (void)onCloseVideoPlay;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(NSString *)arg3;
- (void)onVideoSizeChange:(struct CGSize)arg1;
- (void)onStartPlayIconClick;
- (void)onPlayToEnd;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onVideoPrepareToPlay;
@end

