//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel, UIView;

@interface WCMomentsPrivacyLastSelectCell
{
    UILabel *_titleLabel;
    UIView *_lineView;
}

+ (double)heightForTitle:(id)arg1 cellWidth:(double)arg2;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)arg1;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

