//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJSegmentSpeedInspectorViewModel, MJSpeedParameterPickerView, NSDictionary, NSString, UIImage, UISelectionFeedbackGenerator;
@protocol MJSegmentSpeedInspectorViewDelegate;

@interface MJSegmentSpeedInspectorView
{
    id <MJSegmentSpeedInspectorViewDelegate> _delegate;
    MJSpeedParameterPickerView *_parameterPickerView;
    UIImage *_lowerIndicatorImage;
    UIImage *_higherIndicatorImage;
    NSDictionary *_pickerStrideLabelsByValue;
    UISelectionFeedbackGenerator *_feedback;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UISelectionFeedbackGenerator *feedback; // @synthesize feedback=_feedback;
@property(retain, nonatomic) NSDictionary *pickerStrideLabelsByValue; // @synthesize pickerStrideLabelsByValue=_pickerStrideLabelsByValue;
@property(retain, nonatomic) UIImage *higherIndicatorImage; // @synthesize higherIndicatorImage=_higherIndicatorImage;
@property(retain, nonatomic) UIImage *lowerIndicatorImage; // @synthesize lowerIndicatorImage=_lowerIndicatorImage;
@property(readonly, nonatomic) MJSpeedParameterPickerView *parameterPickerView; // @synthesize parameterPickerView=_parameterPickerView;
@property(nonatomic) __weak id <MJSegmentSpeedInspectorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)precisionPickerView:(id)arg1 shouldAutoSnapForValue:(long long)arg2;
- (void)precisionPickerView:(id)arg1 didScrollAcrossValue:(long long)arg2;
- (void)precisionPickerView:(id)arg1 didSelectValue:(long long)arg2;
- (id)precisionPickerView:(id)arg1 contentsGravityForValue:(long long)arg2;
- (id)precisionPickerView:(id)arg1 labelForValue:(long long)arg2;
- (id)precisionPickerView:(id)arg1 contentForValue:(long long)arg2;
- (void)bindViews;
- (void)layoutViews;
- (void)setupViews;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) MJSegmentSpeedInspectorViewModel *viewModel; // @dynamic viewModel;

@end

