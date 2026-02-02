//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUILabel, NSString, UIImageView, UIView;

@interface SettingMigrationCell : UITableViewCell
{
    NSString *_titleString;
    NSString *_iconName;
    UIImageView *_iconImageView;
    MMUILabel *_titleLabel;
    UIImageView *_arrowImageView;
    UIView *_myBackgroundView;
    UIView *_topSeperator;
    UIView *_bottomSeperator;
    UIView *_betweenSeperator;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *betweenSeperator; // @synthesize betweenSeperator=_betweenSeperator;
@property(retain, nonatomic) UIView *bottomSeperator; // @synthesize bottomSeperator=_bottomSeperator;
@property(retain, nonatomic) UIView *topSeperator; // @synthesize topSeperator=_topSeperator;
@property(retain, nonatomic) UIView *myBackgroundView; // @synthesize myBackgroundView=_myBackgroundView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (void)layoutSubviews;
- (void)updateView;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

