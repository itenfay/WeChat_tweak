//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderLiveReplayProgressBarDelegate <NSObject>
- (CDStruct_1b6d18a9)getCurrentPlaybackTime;
- (void)onSliderBarTap;
- (void)onGreateTimeDotTap:(double)arg1;
- (void)onTotalDisplayTimeUpdate:(unsigned int)arg1;
- (void)onCurrentTimeUpdate:(unsigned int)arg1;
- (void)onSliderScrubbEnd:(unsigned long long)arg1 time:(float)arg2;
- (void)onSliderScrubbBegin:(unsigned long long)arg1;
- (void)onSliderChangeToPercent:(float)arg1;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderPlayVideo;
- (void)onSliderPauseVideo;
@end

