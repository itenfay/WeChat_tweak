//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class AVAsset, AVAssetImageGenerator, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, SightLocalViewSliderMaskView, UICollectionView, UIColor, UIFont, UILabel;
@protocol SightLocalVideoImageSliderDelegate;

@interface SightLocalVideoImageSlider : UIView
{
    struct CGRect _normalModeFrame;
    _Bool _isSystemCrop;
    _Bool _isCropAllowEnlarge;
    _Bool _isLargeMode;
    _Bool _isLargeAnimationBegin;
    _Bool _isDefaultMode;
    _Bool _isDurationMarkerEnabled;
    _Bool _isStartTimeMarkerEnabled;
    _Bool _isHighlightMaskEnabled;
    _Bool _isSliderBarrierEnabled;
    float _playRate;
    float _usrDefOutputDuration;
    float _minDuration;
    float _maxDuration;
    float _outputDuration;
    float _totalDuration;
    id <SightLocalVideoImageSliderDelegate> _delegate;
    AVAsset *_asset;
    UICollectionView *_thumbImagesCollectionView;
    double _widthOfImage;
    UIColor *_customLineSliderBorderColor;
    UIColor *_customHightlightMaskShadowColor;
    UIColor *_customDurationMarkerViewColor;
    UIColor *_customDurationMarkerLabelColor;
    double _currentRateOfImage;
    double _numberOfImagesPerSecond;
    double _lastContentOffset;
    unsigned long long _currentScrollDirection;
    AVAssetImageGenerator *_imageGenerator;
    NSMutableDictionary *_thumbImageDictionary;
    NSMutableArray *_totalTimeList;
    NSMutableArray *_largeModeTimeListOnShow;
    SightLocalViewSliderMaskView *_maskView;
    double _lastStartTime;
    double _lastEndTime;
    NSIndexPath *_enlargeCellIndex;
    unsigned long long _scene;
    long long _sideFlagStyle;
    double _startTimeMarkerKeepTimeSec;
    double _maskRectRadius;
    UIView *_sliderBarrierView;
    UILabel *_sliderBarrierLabel;
    UIFont *_sliderBarrierLabelScaledFont;
    NSString *_sliderBarrierText;
    struct CGPoint _sliderContentOffset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sliderBarrierText; // @synthesize sliderBarrierText=_sliderBarrierText;
@property(retain, nonatomic) UIFont *sliderBarrierLabelScaledFont; // @synthesize sliderBarrierLabelScaledFont=_sliderBarrierLabelScaledFont;
@property(retain, nonatomic) UILabel *sliderBarrierLabel; // @synthesize sliderBarrierLabel=_sliderBarrierLabel;
@property(retain, nonatomic) UIView *sliderBarrierView; // @synthesize sliderBarrierView=_sliderBarrierView;
@property(nonatomic) _Bool isSliderBarrierEnabled; // @synthesize isSliderBarrierEnabled=_isSliderBarrierEnabled;
@property(nonatomic) double maskRectRadius; // @synthesize maskRectRadius=_maskRectRadius;
@property(nonatomic) _Bool isHighlightMaskEnabled; // @synthesize isHighlightMaskEnabled=_isHighlightMaskEnabled;
@property(nonatomic) double startTimeMarkerKeepTimeSec; // @synthesize startTimeMarkerKeepTimeSec=_startTimeMarkerKeepTimeSec;
@property(nonatomic) _Bool isStartTimeMarkerEnabled; // @synthesize isStartTimeMarkerEnabled=_isStartTimeMarkerEnabled;
@property(nonatomic) _Bool isDurationMarkerEnabled; // @synthesize isDurationMarkerEnabled=_isDurationMarkerEnabled;
@property(nonatomic) long long sideFlagStyle; // @synthesize sideFlagStyle=_sideFlagStyle;
@property(nonatomic) _Bool isDefaultMode; // @synthesize isDefaultMode=_isDefaultMode;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSIndexPath *enlargeCellIndex; // @synthesize enlargeCellIndex=_enlargeCellIndex;
@property(nonatomic) _Bool isLargeAnimationBegin; // @synthesize isLargeAnimationBegin=_isLargeAnimationBegin;
@property(nonatomic) _Bool isLargeMode; // @synthesize isLargeMode=_isLargeMode;
@property(nonatomic) double lastEndTime; // @synthesize lastEndTime=_lastEndTime;
@property(nonatomic) double lastStartTime; // @synthesize lastStartTime=_lastStartTime;
@property(retain, nonatomic) SightLocalViewSliderMaskView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) NSMutableArray *largeModeTimeListOnShow; // @synthesize largeModeTimeListOnShow=_largeModeTimeListOnShow;
@property(retain, nonatomic) NSMutableArray *totalTimeList; // @synthesize totalTimeList=_totalTimeList;
@property(retain, nonatomic) NSMutableDictionary *thumbImageDictionary; // @synthesize thumbImageDictionary=_thumbImageDictionary;
@property(retain, nonatomic) AVAssetImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property(nonatomic) unsigned long long currentScrollDirection; // @synthesize currentScrollDirection=_currentScrollDirection;
@property(nonatomic) double lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(nonatomic) double numberOfImagesPerSecond; // @synthesize numberOfImagesPerSecond=_numberOfImagesPerSecond;
@property(nonatomic) float totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) float outputDuration; // @synthesize outputDuration=_outputDuration;
@property(nonatomic) double currentRateOfImage; // @synthesize currentRateOfImage=_currentRateOfImage;
@property(retain, nonatomic) UIColor *customDurationMarkerLabelColor; // @synthesize customDurationMarkerLabelColor=_customDurationMarkerLabelColor;
@property(retain, nonatomic) UIColor *customDurationMarkerViewColor; // @synthesize customDurationMarkerViewColor=_customDurationMarkerViewColor;
@property(retain, nonatomic) UIColor *customHightlightMaskShadowColor; // @synthesize customHightlightMaskShadowColor=_customHightlightMaskShadowColor;
@property(retain, nonatomic) UIColor *customLineSliderBorderColor; // @synthesize customLineSliderBorderColor=_customLineSliderBorderColor;
@property(nonatomic) struct CGPoint sliderContentOffset; // @synthesize sliderContentOffset=_sliderContentOffset;
@property(nonatomic) _Bool isCropAllowEnlarge; // @synthesize isCropAllowEnlarge=_isCropAllowEnlarge;
@property(nonatomic) _Bool isSystemCrop; // @synthesize isSystemCrop=_isSystemCrop;
@property(nonatomic) float maxDuration; // @synthesize maxDuration=_maxDuration;
@property(nonatomic) float minDuration; // @synthesize minDuration=_minDuration;
@property(nonatomic) float usrDefOutputDuration; // @synthesize usrDefOutputDuration=_usrDefOutputDuration;
@property(nonatomic) double widthOfImage; // @synthesize widthOfImage=_widthOfImage;
@property(retain, nonatomic) UICollectionView *thumbImagesCollectionView; // @synthesize thumbImagesCollectionView=_thumbImagesCollectionView;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) float playRate; // @synthesize playRate=_playRate;
@property(nonatomic) __weak id <SightLocalVideoImageSliderDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)canMoveStartAndEndFlag;
- (_Bool)queryIsCropAllowEnlarge;
- (_Bool)queryIsSystemCrop;
- (void)shouldSwitchToLargeMode:(_Bool)arg1;
- (void)thumbImagesCollectionViewContentInsetNeedChange;
- (void)sightLocalViewSliderMaskView:(id)arg1 didStopMovingAtPosition:(double)arg2 isStartFlag:(_Bool)arg3;
- (void)sightLocalViewSliderMaskViewPlayFlagDidChange:(id)arg1;
- (double)positionOfTime:(double)arg1;
- (double)timeOfPosition:(double)arg1;
- (void)stopPlayFlag;
- (void)startPlayFlagAtTime:(double)arg1;
- (_Bool)isSliderCanSlide;
- (double)timeOfEndFlag;
- (double)timeOfStartFlag;
- (void)endOfMaskDidMoveToTime:(double)arg1;
- (void)playFlagOfMaskDidMoveToTime:(double)arg1;
- (void)didStopScrolling;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)cancelAllImageGeneration;
- (void)loadMoreImagesFromIndexPath:(id)arg1 withSrollDirection:(unsigned long long)arg2;
- (void)loadMoreImages;
- (void)resetDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearImages;
- (struct CGPoint)getSliderCollectionViewContentOffset;
- (double)timePosition:(double)arg1;
- (void)updateCollectionOffsetStartFlagTime:(double)arg1 andEndFlagTime:(double)arg2 animated:(_Bool)arg3;
- (void)_setStartFlagTime:(double)arg1 andEndFlagTime:(double)arg2 andStartPlayFlag:(_Bool)arg3;
- (void)setStartFlagTime:(double)arg1 andEndFlagTime:(double)arg2;
- (void)asyncUpdateStartTime:(double)arg1 endTime:(double)arg2 animated:(_Bool)arg3 andStartPlayFlagAnim:(_Bool)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)setBarrierEnabled:(_Bool)arg1 withText:(id)arg2;
- (void)loadSingleImageAtIndexPath:(id)arg1 needFakeResultImmediately:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)loadSingleImageForCell:(id)arg1 atIndexPath:(id)arg2;
- (id)visibleIndexPathAtTime:(CDStruct_1b6d18a9)arg1;
- (id)timeValueForThumbAtRowIndex:(long long)arg1;
- (double)_getThumbListContentMaxX;
- (double)_getThumbListContentMinX;
- (double)_getSideFlagWidth;
- (struct CGRect)validFrameOfMaskView;
- (void)updateMaskViewDuration:(double)arg1;
- (void)_setOutputDuration:(float)arg1 animated:(_Bool)arg2;
- (void)setDefaultSlider:(double)arg1 defaultImage:(id)arg2 preferedFillMaskView:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setAsset:(id)arg1 videoComposition:(id)arg2 andLoadComplete:(CDUnknownBlockType)arg3;
- (void)_relayoutSliderBarrierViewWithThumbListContentMinX:(double)arg1 thumbListContentMaxX:(double)arg2;
- (void)_initSliderBarrierViewIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1 params:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

