//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TPVideoFrameBuffer, UIView;

@protocol WCFinderLiveReplayControlDelegate <NSObject>
- (UIView *)getPreviewContainerSuperView;
- (void)onVideoSizeChange:(struct CGSize)arg1;
- (void)onGetVideoSize:(struct CGSize)arg1;
- (void)onLoopPlayToEnd;
- (void)onPlayToEnd;
- (void)onVideoPause;
- (void)onVideoPlay;

@optional
- (void)onPreviewContainerDisplayChange:(_Bool)arg1;
- (void)onPlayerControlWidgetsDisplay;
- (double)getOperateButtonCenterY;
- (double)getProgrressBarRight;
- (double)getProgrressBarLeft;
- (struct CGRect)getHLSPlayerViewFrame;
- (void)onVideoFrameBufferRefresh:(TPVideoFrameBuffer *)arg1;
- (double)viewAboveProgressBarBottom;
- (double)toolViewBottom;
- (void)onGetSeiMessage:(NSString *)arg1;
- (void)onScrubberPauseButtonTapped;
- (void)onScrubberPlayButtonTapped;
- (void)onSliderSeekToTime:(float)arg1 isAtGreateTime:(_Bool)arg2;
- (void)onSliderSeekBegin;
- (void)onCurrentTimeUpdate:(unsigned int)arg1;
@end

