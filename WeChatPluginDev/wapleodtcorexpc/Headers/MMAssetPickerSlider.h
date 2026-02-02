//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMAssetPickerSliderThumbView, MMUILabel, NSDate;
@protocol MMAssetPickerSliderDelegate;

@interface MMAssetPickerSlider
{
    _Bool _isActive;
    _Bool _isThumbViewDragging;
    _Bool _isAssetPickerDragging;
    _Bool _isThumbViewAnimating;
    _Bool _isHiddenSliderTopMask;
    double _value;
    id <MMAssetPickerSliderDelegate> _delegate;
    double _beginDragValue;
    MMAssetPickerSliderThumbView *_thumbView;
    MMUILabel *_timeLabel;
    CAGradientLayer *_backgroundLayer;
    NSDate *_lastDate;
    struct UIEdgeInsets _thumbViewEdgeInset;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isHiddenSliderTopMask; // @synthesize isHiddenSliderTopMask=_isHiddenSliderTopMask;
@property(nonatomic) _Bool isThumbViewAnimating; // @synthesize isThumbViewAnimating=_isThumbViewAnimating;
@property(retain, nonatomic) NSDate *lastDate; // @synthesize lastDate=_lastDate;
@property(nonatomic) _Bool isAssetPickerDragging; // @synthesize isAssetPickerDragging=_isAssetPickerDragging;
@property(retain, nonatomic) CAGradientLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) struct UIEdgeInsets thumbViewEdgeInset; // @synthesize thumbViewEdgeInset=_thumbViewEdgeInset;
@property(retain, nonatomic) MMAssetPickerSliderThumbView *thumbView; // @synthesize thumbView=_thumbView;
@property(nonatomic) double beginDragValue; // @synthesize beginDragValue=_beginDragValue;
@property(nonatomic) __weak id <MMAssetPickerSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isThumbViewDragging; // @synthesize isThumbViewDragging=_isThumbViewDragging;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) double value; // @synthesize value=_value;
- (void)updateTimeLabelFrame;
- (void)updateThumbViewFrame;
- (void)layoutSubviews;
- (void)onActiveDurationTimeUp;
- (void)onThumbViewDragging:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)performTimeLabelHiddenAnimation;
- (void)performTimeLabelShowAnimation;
- (void)performThumbViewHiddenAnimation;
- (void)performThumbViewShowAnimation;
- (void)performThumbViewNormalAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)performThumbViewActiveAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (double)maxThumbViewMoveDistanceWithThumbViewSize:(struct CGSize)arg1;
- (void)initBackgroundLayer;
- (void)initTimeLabel;
- (struct CGRect)thumbViewFrame:(_Bool)arg1 value:(double)arg2;
- (void)initThumbView;
- (void)initView;
- (void)updateTimeLabelText:(id)arg1;
- (void)onInsertSelectedInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)onAssetPickerDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)onAssetPickerWillBeginDragging:(id)arg1;
- (void)onAssetPickerDidScroll:(id)arg1;
- (void)updateThumbViewEdgeInset:(struct UIEdgeInsets)arg1;
- (id)initWithFrame:(struct CGRect)arg1 thumbViewEdgeInset:(struct UIEdgeInsets)arg2 hiddenSliderTopMask:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 thumbViewEdgeInset:(struct UIEdgeInsets)arg2;

@end

