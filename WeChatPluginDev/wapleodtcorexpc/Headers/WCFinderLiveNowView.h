//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIImageView, UILabel;

@interface WCFinderLiveNowView : UIView
{
    UIImageView *_iconView;
    UILabel *_label;
    long long _type;
    double _kMidInterval;
    NSArray *_iconImageArray;
    CDUnknownBlockType _clickBlock;
}

+ (id)iconImageWithType:(long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) NSArray *iconImageArray; // @synthesize iconImageArray=_iconImageArray;
@property(nonatomic) double kMidInterval; // @synthesize kMidInterval=_kMidInterval;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (double)rightInnerInset;
- (double)leftInnerInset;
- (id)accessibilityLabel;
- (void)viewDidClick;
- (void)_startLiveAnimation;
- (void)startLiveAnimation;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (struct CGColor *)colorForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4 startColor:(struct CGColor *)arg5 endColor:(struct CGColor *)arg6 currentColor:(struct CGColor *)arg7;
- (void)setMiddleInterval:(double)arg1;
- (void)changeType:(long long)arg1 changeColor:(_Bool)arg2;
- (void)changeType:(long long)arg1;
- (void)fitLabelWithMaxWidth:(double)arg1;
- (void)sizeToFit;
- (void)updateText:(id)arg1;
- (void)updateImage:(id)arg1;
- (void)updateIconView;
- (void)updateColorSchemeWith:(long long)arg1 changeColor:(_Bool)arg2;
- (void)initViewWithType:(long long)arg1 text:(id)arg2;
- (void)prepareForReuse;
- (void)initViewWithType:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 viewType:(long long)arg2 text:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 viewType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

