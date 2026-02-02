//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, MMWebImageView;

@interface WCLabSettingDetailHeaderView : UIView
{
    MMWebImageView *_iconImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    UIView *_lineView;
}

+ (double)heightForLabItem:(id)arg1;
- (void).cxx_destruct;
- (void)initLineView;
- (void)initDescLabel;
- (void)initTitleLabel;
- (void)initIconView;
- (void)configureWithLabItem:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

