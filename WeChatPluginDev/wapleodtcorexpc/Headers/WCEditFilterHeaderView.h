//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, UILabel, UISlider;
@protocol WCEditFilterHeaderViewDelegate;

@interface WCEditFilterHeaderView
{
    int _lastSliderValue;
    id <WCEditFilterHeaderViewDelegate> _delegate;
    UISlider *_slider;
    UILabel *_titleLabel;
    UILabel *_sliderValueLabel;
    MMTimer *_throttle;
}

- (void).cxx_destruct;
@property(nonatomic) int lastSliderValue; // @synthesize lastSliderValue=_lastSliderValue;
@property(retain, nonatomic) MMTimer *throttle; // @synthesize throttle=_throttle;
@property(retain, nonatomic) UILabel *sliderValueLabel; // @synthesize sliderValueLabel=_sliderValueLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UISlider *slider; // @synthesize slider=_slider;
@property(nonatomic) __weak id <WCEditFilterHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendSliderValueDidChangeNotify;
- (void)changeSliderValueProgress;
- (void)changeSliderValue:(int)arg1;
- (id)getDotImage:(id)arg1 withSize:(struct CGSize)arg2;
- (void)onSliderScrubbEnd;
- (void)onSliderScrubbBegin;
- (void)onsliderValueDidChange;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

