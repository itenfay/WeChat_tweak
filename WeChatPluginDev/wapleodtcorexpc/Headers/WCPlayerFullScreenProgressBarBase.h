//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@protocol FullScreenVideoProgressBarDelegate;

@interface WCPlayerFullScreenProgressBarBase : UIView
{
    _Bool _isActive;
    _Bool _isSliderScrubbing;
    id <FullScreenVideoProgressBarDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSliderScrubbing; // @synthesize isSliderScrubbing=_isSliderScrubbing;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) __weak id <FullScreenVideoProgressBarDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)resetPlayRateButtonIfNeed;
- (float)currentProgress;
- (void)onPlayStop;
- (void)onPlayStart;
- (void)updateTotalTime:(double)arg1;
- (void)reloadSliderStartTime;
- (id)initWithSuper:(id)arg1 totalTime:(double)arg2 delegate:(id)arg3 params:(id)arg4;

@end

