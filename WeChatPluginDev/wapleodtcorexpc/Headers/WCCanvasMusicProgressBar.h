//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIColor, WXVideoSlider;
@protocol WCCanvasMusicProgressBarDelegate;

@interface WCCanvasMusicProgressBar
{
    _Bool _isSliderScrubbing;
    id <WCCanvasMusicProgressBarDelegate> _delegate;
    UIColor *_labelColor;
    UIColor *_fgColor;
    UIColor *_bgColor;
    MMUILabel *_currentTimeLabel;
    MMUILabel *_durationLabel;
    WXVideoSlider *_slider;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSliderScrubbing; // @synthesize isSliderScrubbing=_isSliderScrubbing;
@property(retain, nonatomic) WXVideoSlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) MMUILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) MMUILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) UIColor *fgColor; // @synthesize fgColor=_fgColor;
@property(retain, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
@property(nonatomic) __weak id <WCCanvasMusicProgressBarDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)canSlider;
- (void)onSliderScrubEnd;
- (void)onSliderScrubBegin;
- (void)onSliderChange;
- (id)genTimeText:(double)arg1;
- (void)innerUpdateCurrentTime:(double)arg1;
- (void)updateCurrentTime:(double)arg1;
- (void)updateDuration:(double)arg1;
- (void)layoutSubviews;
- (id)createTimeLabel;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1 labelColor:(id)arg2 fgColor:(id)arg3 bgColor:(id)arg4;

@end

