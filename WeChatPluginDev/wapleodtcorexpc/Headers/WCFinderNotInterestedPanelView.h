//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel, UIView;

@interface WCFinderNotInterestedPanelView
{
    _Bool _highLight;
    UIImageView *_iconView;
    UILabel *_tipsLabel;
    UIView *_containerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic, getter=isHighLight) _Bool highLight; // @synthesize highLight=_highLight;
- (void)setMoveOffset:(double)arg1;
- (id)getTipsLabelText;
- (void)updateView;
- (void)setupSubViewsAndLayout;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

