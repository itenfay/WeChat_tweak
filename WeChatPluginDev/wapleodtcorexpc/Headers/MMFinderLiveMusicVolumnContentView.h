//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveMusicStyleSlider, MMUILabel;

@interface MMFinderLiveMusicVolumnContentView : UIView
{
    _Bool _isUpdatingWithSEI;
    int _previousVolumeValue;
    MMLiveMusicStyleSlider *_sliderBar;
    MMUILabel *_progressTipLabel;
    CDUnknownBlockType _volumnAdjustCallback;
}

+ (int)getAdaptedProgressValue:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isUpdatingWithSEI; // @synthesize isUpdatingWithSEI=_isUpdatingWithSEI;
@property(nonatomic) int previousVolumeValue; // @synthesize previousVolumeValue=_previousVolumeValue;
@property(copy, nonatomic) CDUnknownBlockType volumnAdjustCallback; // @synthesize volumnAdjustCallback=_volumnAdjustCallback;
@property(retain, nonatomic) MMUILabel *progressTipLabel; // @synthesize progressTipLabel=_progressTipLabel;
@property(retain, nonatomic) MMLiveMusicStyleSlider *sliderBar; // @synthesize sliderBar=_sliderBar;
- (void)updateUIWithVolumn:(int)arg1;
- (void)setVolumn:(int)arg1;
- (int)currentVolumn;
- (void)recoverPreviousVolumn;
- (void)reduceVolumnToLowVoice;
- (void)updateProgressTip:(int)arg1;
- (void)onMusicStyleSliderValueChanged:(id)arg1;
- (void)onMusicStyleSliderValueChangedForceUpdate:(id)arg1;
- (void)layoutProgressTipLabel;
- (void)layoutSliderBar;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

