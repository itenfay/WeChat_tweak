//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAsset, MMUIButton, MMUIView, NSString, SightLocalVideoImageSlider, UILabel;
@protocol MMMusicEditVideoCropViewDelegate;

@interface MMMusicEditVideoCropView
{
    _Bool _needToShowStartLine;
    _Bool _ignoreShock;
    _Bool _hasRemoveSliderCollectionViewKeyPathObserver;
    id <MMMusicEditVideoCropViewDelegate> _delegate;
    MMUIView *_containerView;
    SightLocalVideoImageSlider *_slider;
    UILabel *_cropInfoLabel;
    MMUIButton *_cancelBtn;
    MMUIButton *_doneBtn;
    AVAsset *_avAsset;
    long long _currentEditAssetIndex;
    double _originalStartTime;
    double _originalEndTime;
    double _lastStartTime;
    double _lastEndTime;
    double _videoLength;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasRemoveSliderCollectionViewKeyPathObserver; // @synthesize hasRemoveSliderCollectionViewKeyPathObserver=_hasRemoveSliderCollectionViewKeyPathObserver;
@property(nonatomic) double videoLength; // @synthesize videoLength=_videoLength;
@property(nonatomic) _Bool ignoreShock; // @synthesize ignoreShock=_ignoreShock;
@property(nonatomic) double lastEndTime; // @synthesize lastEndTime=_lastEndTime;
@property(nonatomic) double lastStartTime; // @synthesize lastStartTime=_lastStartTime;
@property(nonatomic) _Bool needToShowStartLine; // @synthesize needToShowStartLine=_needToShowStartLine;
@property(nonatomic) double originalEndTime; // @synthesize originalEndTime=_originalEndTime;
@property(nonatomic) double originalStartTime; // @synthesize originalStartTime=_originalStartTime;
@property(nonatomic) long long currentEditAssetIndex; // @synthesize currentEditAssetIndex=_currentEditAssetIndex;
@property(retain, nonatomic) AVAsset *avAsset; // @synthesize avAsset=_avAsset;
@property(retain, nonatomic) MMUIButton *doneBtn; // @synthesize doneBtn=_doneBtn;
@property(retain, nonatomic) MMUIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UILabel *cropInfoLabel; // @synthesize cropInfoLabel=_cropInfoLabel;
@property(retain, nonatomic) SightLocalVideoImageSlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) MMUIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <MMMusicEditVideoCropViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserveSliderCollectionViewContentSizeChanged;
- (void)observeSliderCollectionViewContentSizeChanged;
- (void)playShock;
- (void)updateLastTimeRange;
- (_Bool)isTimeReachBounds:(double)arg1 scrollLeft:(_Bool)arg2 leftBounds:(double)arg3 rightBounds:(double)arg4;
- (void)tryToPlayShock;
- (void)onOutputTimeChanged:(id)arg1;
- (void)imageSlider:(id)arg1 endFlagDidMoveToTime:(float)arg2;
- (void)imageSlider:(id)arg1 startFlagDidMoveToTime:(float)arg2;
- (void)imageSlider:(id)arg1 didStopSlidingAtTime:(float)arg2 isStartFlag:(_Bool)arg3;
- (_Bool)imageSliderCanMoveStartAndEndFlag:(id)arg1;
- (void)onClickDoneBtn:(id)arg1;
- (void)onClickCloseBtn:(id)arg1;
- (void)replaceStr:(id)arg1 cccurrences:(id)arg2 withString:(id)arg3;
- (id)createAttrString:(id)arg1 font:(id)arg2 color:(id)arg3;
- (id)cropInfoFormatTimeStr:(double)arg1;
- (void)updateCropInfoTitle:(double)arg1 cropLength:(double)arg2;
- (void)updateSliderCollectionOffsetAndPlayFlag;
- (void)startPlayAtTime:(double)arg1;
- (void)updateAsset:(id)arg1 videoLength:(double)arg2 videoComposition:(id)arg3 assetIndex:(long long)arg4 duration:(double)arg5 conset:(struct CGPoint)arg6 startTime:(double)arg7 endTime:(double)arg8 needToShowStartLine:(_Bool)arg9;
- (void)setDefault:(double)arg1 duration:(double)arg2 startTime:(double)arg3 endTime:(double)arg4 defaultImage:(id)arg5 needToShowStartLine:(_Bool)arg6;
- (void)updateAsset:(id)arg1 videoLength:(double)arg2 assetIndex:(long long)arg3 duration:(double)arg4 conset:(struct CGPoint)arg5 startTime:(double)arg6 endTime:(double)arg7 needToShowStartLine:(_Bool)arg8;
- (void)layoutSubviews;
- (void)setupSubViews;
- (void)setup;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

