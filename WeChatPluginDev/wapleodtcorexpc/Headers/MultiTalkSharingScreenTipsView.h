//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface MultiTalkSharingScreenTipsView : UIView
{
    long long _currentStyle;
    UIView *_contentView;
    UIImageView *_iconImageView;
    UILabel *_tipsLabel;
}

+ (double)preferredHeight;
- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) long long currentStyle; // @synthesize currentStyle=_currentStyle;
- (void)layoutIconTips;
- (void)layoutLongTips;
- (void)hideTips;
- (void)delayShowIconTipsAnimated;
- (void)showTips;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

