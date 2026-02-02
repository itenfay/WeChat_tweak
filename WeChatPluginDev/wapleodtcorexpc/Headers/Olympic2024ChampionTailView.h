//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, UIImageView, UILabel, UIView;

@interface Olympic2024ChampionTailView
{
    MMWebImageView *_iconView;
    UILabel *_titleView;
    UIView *_seperatorView;
    UILabel *_descLabel;
    UIImageView *_arrowView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIView *seperatorView; // @synthesize seperatorView=_seperatorView;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
- (void)layoutUI;
- (void)initViews;
- (void)setRankExtInfo:(id)arg1;
- (id)displayText;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

