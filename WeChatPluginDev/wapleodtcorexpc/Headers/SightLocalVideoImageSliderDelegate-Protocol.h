//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class SightLocalVideoImageSlider;

@protocol SightLocalVideoImageSliderDelegate <NSObject>

@optional
- (_Bool)imageSliderCanMoveStartAndEndFlag:(SightLocalVideoImageSlider *)arg1;
- (void)onOutputTimeChanged:(SightLocalVideoImageSlider *)arg1;
- (void)imageSlider:(SightLocalVideoImageSlider *)arg1 didStopSlidingAtTime:(float)arg2 isStartFlag:(_Bool)arg3;
- (void)imageSlider:(SightLocalVideoImageSlider *)arg1 endFlagDidMoveToTime:(float)arg2;
- (void)imageSlider:(SightLocalVideoImageSlider *)arg1 playFlagDidMoveToTime:(float)arg2;
- (void)imageSlider:(SightLocalVideoImageSlider *)arg1 startFlagDidMoveToTime:(float)arg2;
@end

