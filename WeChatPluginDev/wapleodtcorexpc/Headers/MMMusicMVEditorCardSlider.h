//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMMusicMVEditorCardThickSlider, UILabel;
@protocol MMMusicMVEditorCardSliderDelegate;

@interface MMMusicMVEditorCardSlider : UIView
{
    _Bool _isSliding;
    float _startTime;
    float _endTime;
    id <MMMusicMVEditorCardSliderDelegate> _delegate;
    MMMusicMVEditorCardThickSlider *_slider;
    UILabel *_curTimeLabel;
    UILabel *_endTimeLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSliding; // @synthesize isSliding=_isSliding;
@property(retain, nonatomic) UILabel *endTimeLabel; // @synthesize endTimeLabel=_endTimeLabel;
@property(retain, nonatomic) UILabel *curTimeLabel; // @synthesize curTimeLabel=_curTimeLabel;
@property(retain, nonatomic) MMMusicMVEditorCardThickSlider *slider; // @synthesize slider=_slider;
@property(nonatomic) float endTime; // @synthesize endTime=_endTime;
@property(nonatomic) float startTime; // @synthesize startTime=_startTime;
@property(nonatomic) __weak id <MMMusicMVEditorCardSliderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setLabelHidden:(_Bool)arg1;
- (void)trySetSliderValue:(float)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)handleSliderValueChanged:(id)arg1 forEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

