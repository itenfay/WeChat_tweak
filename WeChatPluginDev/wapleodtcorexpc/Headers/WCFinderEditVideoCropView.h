//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAsset, MMUIView, NSString, SightLocalVideoImageSlider, UIButton, UILabel;
@protocol WCFinderEditVideoCropViewDelegate;

@interface WCFinderEditVideoCropView
{
    _Bool _ignoreShock;
    id <WCFinderEditVideoCropViewDelegate> _delegate;
    UIButton *_closeBtn;
    UIButton *_doneBtn;
    UILabel *_titleLabel;
    MMUIView *_containerView;
    SightLocalVideoImageSlider *_slider;
    UILabel *_cropInfoLabel;
    AVAsset *_avAsset;
    long long _currentEditAssetIndex;
    double _originalStartTime;
    double _originalEndTime;
    double _lastStartTime;
    double _lastEndTime;
    double _videoLegnth;
}

- (void).cxx_destruct;
@property(nonatomic) double videoLegnth; // @synthesize videoLegnth=_videoLegnth;
@property(nonatomic) _Bool ignoreShock; // @synthesize ignoreShock=_ignoreShock;
@property(nonatomic) double lastEndTime; // @synthesize lastEndTime=_lastEndTime;
@property(nonatomic) double lastStartTime; // @synthesize lastStartTime=_lastStartTime;
@property(nonatomic) double originalEndTime; // @synthesize originalEndTime=_originalEndTime;
@property(nonatomic) double originalStartTime; // @synthesize originalStartTime=_originalStartTime;
@property(nonatomic) long long currentEditAssetIndex; // @synthesize currentEditAssetIndex=_currentEditAssetIndex;
@property(retain, nonatomic) AVAsset *avAsset; // @synthesize avAsset=_avAsset;
@property(retain, nonatomic) UILabel *cropInfoLabel; // @synthesize cropInfoLabel=_cropInfoLabel;
@property(retain, nonatomic) SightLocalVideoImageSlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) MMUIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *doneBtn; // @synthesize doneBtn=_doneBtn;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) __weak id <WCFinderEditVideoCropViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onRestartVideoPlayAt:(double)arg1;
- (void)playShock;
- (void)updateLastTimeRange;
- (_Bool)isTimeReachBounds:(double)arg1 scrollLeft:(_Bool)arg2 leftBounds:(double)arg3 rightBounds:(double)arg4;
- (void)tryToPlayShock;
- (void)onOutputTimeChanged:(id)arg1;
- (void)imageSlider:(id)arg1 endFlagDidMoveToTime:(float)arg2;
- (void)imageSlider:(id)arg1 startFlagDidMoveToTime:(float)arg2;
- (void)imageSlider:(id)arg1 didStopSlidingAtTime:(float)arg2 isStartFlag:(_Bool)arg3;
- (void)onClickDoneBtn:(id)arg1;
- (void)onClickCloseBtn:(id)arg1;
- (void)replaceStr:(id)arg1 cccurrences:(id)arg2 withString:(id)arg3;
- (id)createAttrString:(id)arg1 font:(id)arg2 color:(id)arg3;
- (id)cropInfoFormatTimeStr:(double)arg1;
- (void)updateCropInfoTitle:(double)arg1;
- (void)tryShowCropInfoLabel:(double)arg1;
- (void)startPlayAtTime:(double)arg1;
- (void)updateAsset:(id)arg1 videoComposition:(id)arg2 assetIndex:(long long)arg3 duration:(double)arg4 conset:(struct CGPoint)arg5 startTime:(double)arg6 endTime:(double)arg7;
- (void)updateAsset:(id)arg1 assetIndex:(long long)arg2 duration:(double)arg3 conset:(struct CGPoint)arg4 startTime:(double)arg5 endTime:(double)arg6;
- (void)layoutSubviews;
- (void)setupSubViews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

