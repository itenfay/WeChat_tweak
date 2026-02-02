//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUILabel, UIImageView;

@interface SolitairePhoneNumberTableViewCell : UITableViewCell
{
    MMUILabel *_phoneNumberLabel;
    MMUILabel *_descriptionLabel;
    UIImageView *_accessoryImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
@property(retain, nonatomic) MMUILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) MMUILabel *phoneNumberLabel; // @synthesize phoneNumberLabel=_phoneNumberLabel;
- (void)layoutSubviews;
- (void)configureCellWithPhoneNumber:(id)arg1;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

