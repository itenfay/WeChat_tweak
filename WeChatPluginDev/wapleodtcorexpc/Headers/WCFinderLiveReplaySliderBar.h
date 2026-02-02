//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString, WCFinderLivePlayerSlider;

@interface WCFinderLiveReplaySliderBar : UIView
{
    _Bool _isRecentShockInStartOrEnd;
    WCFinderLivePlayerSlider *_videoSlider;
    NSArray *_greateTimeList;
    CDUnknownBlockType _sliderDragCallback;
    CDUnknownBlockType _greateTimeDotTapCallback;
    CDUnknownBlockType _sliderTapCallback;
    double _totalTime;
    NSMutableArray *_greateTimeDotList;
}

+ (_Bool)isSliderPercent:(double)arg1 equalPercent:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isRecentShockInStartOrEnd; // @synthesize isRecentShockInStartOrEnd=_isRecentShockInStartOrEnd;
@property(retain, nonatomic) NSMutableArray *greateTimeDotList; // @synthesize greateTimeDotList=_greateTimeDotList;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(copy, nonatomic) CDUnknownBlockType sliderTapCallback; // @synthesize sliderTapCallback=_sliderTapCallback;
@property(copy, nonatomic) CDUnknownBlockType greateTimeDotTapCallback; // @synthesize greateTimeDotTapCallback=_greateTimeDotTapCallback;
@property(copy, nonatomic) CDUnknownBlockType sliderDragCallback; // @synthesize sliderDragCallback=_sliderDragCallback;
@property(retain, nonatomic) NSArray *greateTimeList; // @synthesize greateTimeList=_greateTimeList;
@property(retain, nonatomic) WCFinderLivePlayerSlider *videoSlider; // @synthesize videoSlider=_videoSlider;
- (void)onPlayerSliderTouch:(unsigned long long)arg1 location:(struct CGPoint)arg2;
- (void)onPlayerSliderPrecent:(double)arg1 dragState:(unsigned long long)arg2;
- (void)resetRecentShockTagIfNeeded:(double)arg1;
- (_Bool)shockInSliderPercentIfNeeded:(double)arg1;
- (void)clearAllGreateTimeDotBtns;
- (id)createGreateTimeDotWithGreateTime:(double)arg1;
- (void)updateGreateTimeDotList;
- (void)configGreateTimeAttachDotValueList;
- (void)updateGreatTimeList:(id)arg1;
- (void)updateTotalTime:(double)arg1;
- (_Bool)isPoint:(struct CGPoint)arg1 hitTouchInGreateDot:(id)arg2;
- (id)tryGetGreateDotToInvokeTap:(struct CGPoint)arg1;
- (void)updateGreateDotOrigin:(id)arg1;
- (void)updateAllGreateDotsOrigin;
- (void)layoutVideoSlider;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

