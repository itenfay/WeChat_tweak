//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel, UIView;

@interface FTSTitleCell
{
    UILabel *_titleLabel;
    UIView *_topLine;
    UIView *_lineView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)getTopMargin;
- (void)updateTitle:(id)arg1;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

