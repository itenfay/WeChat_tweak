//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CAShapeLayer, MMLiveScrollNumView, NSString, RichTextView, UIImageView, UILabel;

@interface MMFinderLiveCommentHotWordsView : UIView
{
    RichTextView *_wordLabel;
    MMLiveScrollNumView *_numView;
    UILabel *_multiplayLabel;
    CAGradientLayer *_gradientLayer;
    CAShapeLayer *_maskLayer;
    UIView *_hotWordsSignBGView;
    UIImageView *_hotWordsSignImageView;
    UILabel *_hotWordsSignTitleLabel;
    unsigned long long _style;
    long long _currentCount;
    long long _targetCount;
    long long _step;
}

- (void).cxx_destruct;
@property(nonatomic) long long step; // @synthesize step=_step;
@property(nonatomic) long long targetCount; // @synthesize targetCount=_targetCount;
@property(nonatomic) long long currentCount; // @synthesize currentCount=_currentCount;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) UILabel *hotWordsSignTitleLabel; // @synthesize hotWordsSignTitleLabel=_hotWordsSignTitleLabel;
@property(retain, nonatomic) UIImageView *hotWordsSignImageView; // @synthesize hotWordsSignImageView=_hotWordsSignImageView;
@property(retain, nonatomic) UIView *hotWordsSignBGView; // @synthesize hotWordsSignBGView=_hotWordsSignBGView;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UILabel *multiplayLabel; // @synthesize multiplayLabel=_multiplayLabel;
@property(retain, nonatomic) MMLiveScrollNumView *numView; // @synthesize numView=_numView;
@property(retain, nonatomic) RichTextView *wordLabel; // @synthesize wordLabel=_wordLabel;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)rescheduleAnimation;
- (id)currentWord;
- (void)animateToCount:(long long)arg1 duration:(double)arg2;
- (long long)eliminateForbiddenCount:(long long)arg1;
- (void)updateLabelWithCount:(long long)arg1;
- (void)configWithWord:(id)arg1 count:(long long)arg2;
- (id)numFont;
- (void)initViews;
- (void)recreateMaskLayerIfNeeded;
- (void)recreateGradientLayerIfNeeded;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithStyle:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

