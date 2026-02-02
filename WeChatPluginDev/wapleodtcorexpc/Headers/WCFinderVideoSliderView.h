//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAsset, AVAssetImageGenerator, MMUIView, UIImage, UIImageView, UIImpactFeedbackGenerator;

@interface WCFinderVideoSliderView
{
    AVAssetImageGenerator *_coverGenerator;
    MMUIView *_sliderBarView;
    UIImageView *_selectedView;
    unsigned long long _thumbCount;
    CDUnknownBlockType _selectedChangeBlock;
    double _keyFrameRate;
    AVAsset *_avAsset;
    UIImage *_speciallyImage;
    UIImpactFeedbackGenerator *_feedbackGenerator;
}

+ (id)resizeImageForCGImage:(struct CGImage *)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) UIImage *speciallyImage; // @synthesize speciallyImage=_speciallyImage;
@property(retain, nonatomic) AVAsset *avAsset; // @synthesize avAsset=_avAsset;
@property(nonatomic) double keyFrameRate; // @synthesize keyFrameRate=_keyFrameRate;
@property(copy, nonatomic) CDUnknownBlockType selectedChangeBlock; // @synthesize selectedChangeBlock=_selectedChangeBlock;
@property(nonatomic) unsigned long long thumbCount; // @synthesize thumbCount=_thumbCount;
@property(retain, nonatomic) UIImageView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) MMUIView *sliderBarView; // @synthesize sliderBarView=_sliderBarView;
@property(retain, nonatomic) AVAssetImageGenerator *coverGenerator; // @synthesize coverGenerator=_coverGenerator;
- (void)setSelectedPlayTime:(double)arg1;
- (void)setSelectedViewToSpecialImagePlace;
- (id)getCurrentResult;
- (_Bool)isSpeciallyImageSelected;
- (void)refreshSelectedView;
- (void)debounceTriggerRefreshSelectedView;
- (void)longPressSelectCoverGes:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)loadSliderByPlayerAsset:(id)arg1 keyFrameRate:(double)arg2 specialImage:(id)arg3 coverTimeStamp:(double)arg4 selectedChangeBlock:(CDUnknownBlockType)arg5;
- (void)setupSubViewsWithMaxWidth:(double)arg1;
- (void)setupGesture;
- (id)initWithHeight:(double)arg1 maxWidth:(double)arg2;

@end

