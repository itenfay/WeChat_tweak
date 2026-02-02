//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class UIColor, UIImageView, UILabel, UIView, WCVideoCropImageSliderTouch;
@protocol SightLocalViewSliderMaskViewDelegate;

@interface SightLocalViewSliderMaskView : UIControl
{
    _Bool _isDurationMarkerEnabled;
    _Bool _isStartTimeMarkerEnabled;
    _Bool _isHighlightMaskEnabled;
    _Bool _startFlagOnTouch;
    _Bool _endFlagOnTouch;
    _Bool _isInLargeMode;
    id <SightLocalViewSliderMaskViewDelegate> _delegate;
    double _totalDuration;
    double _maxDuration;
    double _minDuration;
    long long _sideFlagStyle;
    double _startTimeMarkerKeepTimeSec;
    double _maskRectRadius;
    UIColor *_customLineSliderBorderColor;
    UIColor *_customHightlightMaskShadowColor;
    UIColor *_customDurationMarkerViewColor;
    UIColor *_customDurationMarkerLabelColor;
    UIImageView *_startFlag;
    UIImageView *_endFlag;
    UIView *_playFlag;
    UIColor *_lineColor;
    UIView *_durationMarkerView;
    UILabel *_durationMarkerLabel;
    UIView *_startTimeMarkerView;
    UILabel *_startTimeMarkerLabel;
    UIView *_highlightMaskLeftShadow;
    UIView *_highlightMaskRightShadow;
    WCVideoCropImageSliderTouch *_lastTouch;
    struct CGRect _validFrame;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInLargeMode; // @synthesize isInLargeMode=_isInLargeMode;
@property(retain, nonatomic) WCVideoCropImageSliderTouch *lastTouch; // @synthesize lastTouch=_lastTouch;
@property(nonatomic, getter=isEndFlagOnTouch) _Bool endFlagOnTouch; // @synthesize endFlagOnTouch=_endFlagOnTouch;
@property(nonatomic, getter=isStartFlagOnTouch) _Bool startFlagOnTouch; // @synthesize startFlagOnTouch=_startFlagOnTouch;
@property(retain, nonatomic) UIView *highlightMaskRightShadow; // @synthesize highlightMaskRightShadow=_highlightMaskRightShadow;
@property(retain, nonatomic) UIView *highlightMaskLeftShadow; // @synthesize highlightMaskLeftShadow=_highlightMaskLeftShadow;
@property(retain, nonatomic) UILabel *startTimeMarkerLabel; // @synthesize startTimeMarkerLabel=_startTimeMarkerLabel;
@property(retain, nonatomic) UIView *startTimeMarkerView; // @synthesize startTimeMarkerView=_startTimeMarkerView;
@property(retain, nonatomic) UILabel *durationMarkerLabel; // @synthesize durationMarkerLabel=_durationMarkerLabel;
@property(retain, nonatomic) UIView *durationMarkerView; // @synthesize durationMarkerView=_durationMarkerView;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(retain, nonatomic) UIView *playFlag; // @synthesize playFlag=_playFlag;
@property(retain, nonatomic) UIImageView *endFlag; // @synthesize endFlag=_endFlag;
@property(retain, nonatomic) UIImageView *startFlag; // @synthesize startFlag=_startFlag;
@property(retain, nonatomic) UIColor *customDurationMarkerLabelColor; // @synthesize customDurationMarkerLabelColor=_customDurationMarkerLabelColor;
@property(retain, nonatomic) UIColor *customDurationMarkerViewColor; // @synthesize customDurationMarkerViewColor=_customDurationMarkerViewColor;
@property(retain, nonatomic) UIColor *customHightlightMaskShadowColor; // @synthesize customHightlightMaskShadowColor=_customHightlightMaskShadowColor;
@property(retain, nonatomic) UIColor *customLineSliderBorderColor; // @synthesize customLineSliderBorderColor=_customLineSliderBorderColor;
@property(nonatomic) double maskRectRadius; // @synthesize maskRectRadius=_maskRectRadius;
@property(nonatomic) _Bool isHighlightMaskEnabled; // @synthesize isHighlightMaskEnabled=_isHighlightMaskEnabled;
@property(nonatomic) double startTimeMarkerKeepTimeSec; // @synthesize startTimeMarkerKeepTimeSec=_startTimeMarkerKeepTimeSec;
@property(nonatomic) _Bool isStartTimeMarkerEnabled; // @synthesize isStartTimeMarkerEnabled=_isStartTimeMarkerEnabled;
@property(nonatomic) _Bool isDurationMarkerEnabled; // @synthesize isDurationMarkerEnabled=_isDurationMarkerEnabled;
@property(nonatomic) long long sideFlagStyle; // @synthesize sideFlagStyle=_sideFlagStyle;
@property(nonatomic) double minDuration; // @synthesize minDuration=_minDuration;
@property(nonatomic) double maxDuration; // @synthesize maxDuration=_maxDuration;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) struct CGRect validFrame; // @synthesize validFrame=_validFrame;
@property(nonatomic) __weak id <SightLocalViewSliderMaskViewDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_getSideFlagImageContentMode;
- (id)_getSideFlagImage;
- (double)_getSideFlagWidth;
- (void)refreshThumbImagesCollectionViewContentInset;
- (void)playFlagDidStopMovingAtStartFlag:(_Bool)arg1;
- (void)positionOfPlayFlagDidChange;
- (void)switchToLargeMode:(_Bool)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)extendedFrame:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setStartFlagPosition:(double)arg1 andEndFlagPosition:(double)arg2;
- (void)stopMovingPlayFlag;
- (void)movePlayFlagFromPosition:(double)arg1 toPosition:(double)arg2 withinTime:(double)arg3;
- (double)rightOfEndFlag;
- (double)leftOfStartFlag;
- (double)positionOfEndFlag;
- (double)positionOfPlayFlag;
- (double)positionOfStartFlag;
- (double)maxRange;
- (double)minimumRange;
- (void)drawRect:(struct CGRect)arg1;
- (void)_relayoutHighlightMaskWithThumbListContentMinX:(double)arg1 thumbListContentMaxX:(double)arg2;
- (void)_initHighlightMaskIfNeeded;
- (void)_hideStartTimeMarkerView;
- (void)_showStartTimeMarkerViewIfNeeded;
- (void)_relayoutStartTimeMarkerViewTimeSec:(double)arg1;
- (void)_initStartTimeMarkerViewIfNeeded;
- (void)_relayoutDurationMarkerViewTimeSec:(double)arg1;
- (void)_initDurationMarkerViewIfNeeded;
- (void)_initEndFlagIfNeeded;
- (void)_initPlayFlagIfNeeded;
- (void)_initStartFlagIfNeeded;
- (void)_initViewIfNeeded;

@end

