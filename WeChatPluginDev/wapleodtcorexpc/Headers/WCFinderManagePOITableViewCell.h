//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface WCFinderManagePOITableViewCell : UITableViewCell
{
    UILabel *_nameLabel;
    UILabel *_addrLabel;
    UIImageView *_iconImageView;
    UILabel *_auditLabel;
    UIImageView *_arrowImageView;
    UIView *_lineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *auditLabel; // @synthesize auditLabel=_auditLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *addrLabel; // @synthesize addrLabel=_addrLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void)configWithPOIDetail:(id)arg1;
- (void)updateMargin;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

