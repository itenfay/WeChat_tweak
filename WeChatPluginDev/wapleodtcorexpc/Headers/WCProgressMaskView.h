//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UIImageView, UILabel, WCProgressCircleView;

@interface WCProgressMaskView : UIView
{
    UIView *_contentContainerView;
    WCProgressCircleView *_progressCircleView;
    UIImageView *_progressIconView;
    UILabel *_progressLabel;
    double _contentMarginTopRate;
    NSString *_currentLabelText;
    double _labelTextMarginTop;
    UIFont *_labelTextFont;
    UIColor *_labelTextColor;
    struct CGSize _progressCircleViewSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *labelTextColor; // @synthesize labelTextColor=_labelTextColor;
@property(retain, nonatomic) UIFont *labelTextFont; // @synthesize labelTextFont=_labelTextFont;
@property(nonatomic) double labelTextMarginTop; // @synthesize labelTextMarginTop=_labelTextMarginTop;
@property(retain, nonatomic) NSString *currentLabelText; // @synthesize currentLabelText=_currentLabelText;
@property(nonatomic) double contentMarginTopRate; // @synthesize contentMarginTopRate=_contentMarginTopRate;
@property(nonatomic) struct CGSize progressCircleViewSize; // @synthesize progressCircleViewSize=_progressCircleViewSize;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) UIImageView *progressIconView; // @synthesize progressIconView=_progressIconView;
@property(retain, nonatomic) WCProgressCircleView *progressCircleView; // @synthesize progressCircleView=_progressCircleView;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
- (void)initView;
- (void)resetDefaultStyle;
- (void)resizeView;
- (double)maxTextWidth;
- (void)updateProgressInfoByType:(long long)arg1;
- (void)setProgressBackColor:(id)arg1;
- (void)setProgressFrontColor:(id)arg1;
- (void)setProgressBorderWidth:(double)arg1;
- (void)setProgressSize:(struct CGSize)arg1;
- (void)_dismissWithText:(id)arg1 forType:(long long)arg2 afterDelayMS:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissWithText:(id)arg1 forType:(long long)arg2 atProgress:(double)arg3 afterDelayMS:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)dismissWithText:(id)arg1 forType:(long long)arg2 atProgress:(double)arg3;
- (void)dismissWithText:(id)arg1 forType:(long long)arg2;
- (void)dismissAtProgress:(double)arg1;
- (void)dismiss;
- (void)showForProgress:(double)arg1 withText:(id)arg2 byStepMode:(long long)arg3;
- (void)showForProgress:(double)arg1 withText:(id)arg2;
- (void)showForProgress:(double)arg1;
- (void)showInfinityWithText:(id)arg1;
- (void)showInfinity;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

