//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMBadgeView, MMUILabel, MMWebImageView, UIView;

@interface WCLabsSettingCell : UITableViewCell
{
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    MMWebImageView *_thumbImageView;
    UIView *_backgroundView;
    MMBadgeView *_badgeView;
    UIView *_maskView;
}

+ (double)heightForLabsItem:(id)arg1;
- (void).cxx_destruct;
- (void)initMaskView;
- (void)initBadgeView;
- (void)initThumbImageView;
- (void)initDescLabel;
- (void)initTitleLabel;
- (void)initBackgroundView;
- (void)configureWithLabsItem:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

