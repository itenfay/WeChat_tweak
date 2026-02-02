//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface WCFinderAddPOIViewTableViewCell : UITableViewCell
{
    UIImageView *_checkBox;
    UILabel *_nameLabel;
    UILabel *_addrLabel;
    UIView *_lineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *addrLabel; // @synthesize addrLabel=_addrLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *checkBox; // @synthesize checkBox=_checkBox;
- (void)configWithPOIDetail:(id)arg1 selected:(_Bool)arg2;
- (void)updateMargin;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

