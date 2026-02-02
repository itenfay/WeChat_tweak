//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAsset, MMUIButton, NSString, SightLocalVideoImageSlider, UIColor;
@protocol EditVideoCropViewDelegate;

@interface EditVideoCropView
{
    AVAsset *_avAsset;
    MMUIButton *_cancelBtn;
    MMUIButton *_doneBtn;
    SightLocalVideoImageSlider *_slider;
    double _startTime;
    double _endTime;
    _Bool _sliderInited;
    _Bool _isSystemCrop;
    _Bool _useStandardBtn;
    _Bool _ignoreShock;
    _Bool _allowTapicOnExceedMaxTimeRange;
    float _minDuration;
    float _maxDuration;
    id <EditVideoCropViewDelegate> _m_delegate;
    double _outputTime;
    unsigned long long _entranceType;
    NSString *_customDoneBtnText;
    double _lastStartTime;
    double _lastEndTime;
    double _videoLength;
    UIColor *_sliderHighlightMaskColor;
    struct CGPoint _sliderContentOffset;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowTapicOnExceedMaxTimeRange; // @synthesize allowTapicOnExceedMaxTimeRange=_allowTapicOnExceedMaxTimeRange;
@property(retain, nonatomic) UIColor *sliderHighlightMaskColor; // @synthesize sliderHighlightMaskColor=_sliderHighlightMaskColor;
@property(nonatomic) double videoLength; // @synthesize videoLength=_videoLength;
@property(nonatomic) double lastEndTime; // @synthesize lastEndTime=_lastEndTime;
@property(nonatomic) double lastStartTime; // @synthesize lastStartTime=_lastStartTime;
@property(nonatomic) _Bool ignoreShock; // @synthesize ignoreShock=_ignoreShock;
@property(nonatomic) _Bool useStandardBtn; // @synthesize useStandardBtn=_useStandardBtn;
@property(retain, nonatomic) NSString *customDoneBtnText; // @synthesize customDoneBtnText=_customDoneBtnText;
@property(nonatomic) struct CGPoint sliderContentOffset; // @synthesize sliderContentOffset=_sliderContentOffset;
@property(nonatomic) unsigned long long entranceType; // @synthesize entranceType=_entranceType;
@property(nonatomic) _Bool isSystemCrop; // @synthesize isSystemCrop=_isSystemCrop;
@property(nonatomic) float maxDuration; // @synthesize maxDuration=_maxDuration;
@property(nonatomic) float minDuration; // @synthesize minDuration=_minDuration;
@property(nonatomic) double outputTime; // @synthesize outputTime=_outputTime;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) __weak id <EditVideoCropViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onRestartVideoPlayAt:(double)arg1;
- (void)onOutputTimeChanged:(id)arg1;
- (void)imageSlider:(id)arg1 didStopSlidingAtTime:(float)arg2 isStartFlag:(_Bool)arg3;
- (void)imageSlider:(id)arg1 playFlagDidMoveToTime:(float)arg2;
- (void)playShock;
- (void)tryToPlayShock;
- (void)updateLastTimeRange;
- (void)onClickDone;
- (void)onClickCancel;
- (void)layoutSubviews;
- (void)initView;
- (void)setHighLightMaskShadowColor:(id)arg1;
- (void)updateTimeFlag;
- (void)setupSubViews;
- (id)initWithAsset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

