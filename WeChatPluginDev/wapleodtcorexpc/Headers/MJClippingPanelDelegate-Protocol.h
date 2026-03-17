//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJClippingPanel, MJPublisherPlaybackProgressSlider, UIButton;

@protocol MJClippingPanelDelegate <NSObject>

@optional
- (void)clippingPanel:(MJClippingPanel *)arg1 redoButtonTouchUpInside:(UIButton *)arg2;
- (void)clippingPanel:(MJClippingPanel *)arg1 undoButtonTouchUpInside:(UIButton *)arg2;
- (void)clippingPanel:(MJClippingPanel *)arg1 playButtonTouchUpInside:(UIButton *)arg2;
- (void)clippingPanel:(MJClippingPanel *)arg1 playbackProgressSliderTouchEnd:(MJPublisherPlaybackProgressSlider *)arg2;
- (void)clippingPanel:(MJClippingPanel *)arg1 playbackProgressSliderTouchDown:(MJPublisherPlaybackProgressSlider *)arg2;
- (void)clippingPanel:(MJClippingPanel *)arg1 playbackProgressSliderValueDidChange:(MJPublisherPlaybackProgressSlider *)arg2;
@end

