//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;

@interface MMFinderLiveConnectMicPkSelectItemView : UITableViewCell
{
    UIView *_container;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
}

+ (double)cellHeight;
+ (id)ReuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
- (void)configWithMode:(unsigned long long)arg1 subTitle:(id)arg2;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

