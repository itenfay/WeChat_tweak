//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIActivityIndicatorView, UIImageView, UIView;
@protocol MMLimitedModeBizCellDelegate;

@interface MMLimitedModeBizCell
{
    id <MMLimitedModeBizCellDelegate> _delegate;
    long long _bizType;
    UIImageView *_backgroundImageView;
    UIImageView *_iconImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    UIImageView *_arrowImageView;
    UIView *_separatorView;
    UIActivityIndicatorView *_indicatorView;
}

+ (double)cellHeight;
+ (id)cellInTableView:(id)arg1 delegate:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(nonatomic) __weak id <MMLimitedModeBizCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithBizType:(long long)arg1 position:(long long)arg2;

@end

