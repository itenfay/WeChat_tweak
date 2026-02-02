//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MinimizeGesBlurCircleView, UIImageView, UILabel;

@interface MinimizeGestureCircleView : UIView
{
    _Bool _selected;
    _Bool _forVoiceMsg;
    UILabel *_minimizeLabel;
    UIImageView *_minimizeIconView;
    UIView *_maskView;
    MinimizeGesBlurCircleView *_blurEffectView;
    UIImageView *_cannotMinimizeIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *cannotMinimizeIconView; // @synthesize cannotMinimizeIconView=_cannotMinimizeIconView;
@property(retain, nonatomic) MinimizeGesBlurCircleView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *minimizeIconView; // @synthesize minimizeIconView=_minimizeIconView;
@property(retain, nonatomic) UILabel *minimizeLabel; // @synthesize minimizeLabel=_minimizeLabel;
@property(nonatomic) _Bool forVoiceMsg; // @synthesize forVoiceMsg=_forVoiceMsg;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (double)canTouchRadius;
- (id)cannotAddSelectedCircleIconImage;
- (id)cannotAddNormalCircleIconImage;
- (id)selectedCircleIconImage;
- (id)normalCircleIconImage;
- (id)circleTitle;
- (double)circleContentRightMargin;
- (double)circleContentBottomMargin;
- (double)circleHightlightedRadius;
- (double)circleRadius;
- (double)circleSelectIconSize;
- (double)circleIconSize;
- (void)resertNormalState;
- (void)changeToSelectedState;
- (void)changeToCanAddTaskState:(_Bool)arg1 forVoiceMsg:(_Bool)arg2;
- (void)layoutSubviews;
- (void)initCannotMinimizeView;
- (void)initSelectedMaskView;
- (void)initMinimizeIconView;
- (void)initMinimizeLabel;
- (void)initBlurEffectView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

