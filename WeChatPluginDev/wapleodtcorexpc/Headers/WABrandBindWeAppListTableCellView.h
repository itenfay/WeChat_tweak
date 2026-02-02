//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMWebImageView, UILabel, UIView;

@interface WABrandBindWeAppListTableCellView : UITableViewCell
{
    MMWebImageView *_headImageView;
    UILabel *_titleLabel;
    UIView *_sepreateLine;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initSeperateLine;
- (void)initTitleLabel;
- (void)initHeadImgeView;
- (void)initView;
- (void)updateDataWithHeadImageURL:(id)arg1 title:(id)arg2 isShowSeperateLine:(_Bool)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

