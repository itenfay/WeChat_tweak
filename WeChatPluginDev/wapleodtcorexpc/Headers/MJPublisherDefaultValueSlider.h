//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CALayer, UIColor, UISelectionFeedbackGenerator;

@interface MJPublisherDefaultValueSlider
{
    struct map<float, double, std::less<float>, std::allocator<std::pair<const float, double>>> _gearXCoordsByValue;
    _Bool _isSnapFeedbackEnabled;
    float _defaultValue;
    double _trackMarkHeight;
    double _autoSnapThreshold;
    UIColor *_defaultValueMarkColor;
    UISelectionFeedbackGenerator *_snapFeedbackGenerator;
    CALayer *_defaultValueMarkLayer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *defaultValueMarkLayer; // @synthesize defaultValueMarkLayer=_defaultValueMarkLayer;
@property(retain, nonatomic) UISelectionFeedbackGenerator *snapFeedbackGenerator; // @synthesize snapFeedbackGenerator=_snapFeedbackGenerator;
@property(nonatomic) _Bool isSnapFeedbackEnabled; // @synthesize isSnapFeedbackEnabled=_isSnapFeedbackEnabled;
@property(retain, nonatomic) UIColor *defaultValueMarkColor; // @synthesize defaultValueMarkColor=_defaultValueMarkColor;
@property(nonatomic) double autoSnapThreshold; // @synthesize autoSnapThreshold=_autoSnapThreshold;
@property(nonatomic) double trackMarkHeight; // @synthesize trackMarkHeight=_trackMarkHeight;
@property(nonatomic) float defaultValue; // @synthesize defaultValue=_defaultValue;
- (void)feedbackIfNeededWithValue:(float)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (double)ratioForValue:(double)arg1;
- (void)layoutMarkLayerAnimated:(_Bool)arg1;
- (void)updateGearXCoordsCache;
- (struct CGRect)defaultValueMarkRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2;
- (void)tintColorDidChange;
- (float)valueForTouchPoint:(struct CGPoint)arg1 withTrackRect:(struct CGRect)arg2;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)commonInit;

@end

