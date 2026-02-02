//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WCFinderProfileEventView : UIView
{
    _Bool _showCoveredStyle;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_rightArrowView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *rightArrowView; // @synthesize rightArrowView=_rightArrowView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool showCoveredStyle; // @synthesize showCoveredStyle=_showCoveredStyle;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)onTap;
- (void)layoutSubviews;
- (void)layoutUI;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithEventInfo:(id)arg1;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

