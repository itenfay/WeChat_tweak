//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "VideoProgressBarDelegate-Protocol.h"

@protocol FullScreenVideoProgressBarDelegate <VideoProgressBarDelegate>
- (void)onSliderActive:(_Bool)arg1;

@optional
- (void)onUpdateTotalTime:(double)arg1;
- (void)onUpdateCurrentTime:(double)arg1;
- (void)onSetPlayBackRate:(double)arg1;
@end

