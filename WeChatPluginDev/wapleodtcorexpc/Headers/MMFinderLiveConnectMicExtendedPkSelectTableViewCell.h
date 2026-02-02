//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel, UIView;

@interface MMFinderLiveConnectMicExtendedPkSelectTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_checkboxView;
    UIView *_separatorBar;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorBar; // @synthesize separatorBar=_separatorBar;
@property(retain, nonatomic) UIImageView *checkboxView; // @synthesize checkboxView=_checkboxView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool separatorBarHidden;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

