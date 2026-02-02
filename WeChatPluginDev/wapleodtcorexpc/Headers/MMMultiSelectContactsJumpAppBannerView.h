//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, NSString, UIImageView, UILabel, UIView;

@interface MMMultiSelectContactsJumpAppBannerView
{
    UIView *_contentView;
    MMWebImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIImageView *_arrowView;
    NSString *_defaultIconImageName;
}

+ (double)heightForViewWithWidth:(double)arg1 title:(id)arg2 andContent:(id)arg3;
+ (id)contentLabelFont;
+ (id)titleLabelFont;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *defaultIconImageName; // @synthesize defaultIconImageName=_defaultIconImageName;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)updateForIlink;
- (void)layoutSubviews;
- (void)updateViewWithTitle:(id)arg1 content:(id)arg2 iconUrlString:(id)arg3 andIconDefaultName:(id)arg4;

@end

