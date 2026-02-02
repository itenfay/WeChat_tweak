//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMWebImageView, UIImageView, UILabel, UIView;

@interface BrandAuthListTableViewCell : UITableViewCell
{
    double _superWith;
    MMWebImageView *_headerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_arrowView;
    UIView *_seperatorLineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *seperatorLineView; // @synthesize seperatorLineView=_seperatorLineView;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) double superWith; // @synthesize superWith=_superWith;
- (_Bool)checkLargerThanOne:(id)arg1;
- (id)concatWords:(id)arg1 andMaxIndexs:(long long)arg2;
- (id)getScopeDescString:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)configureLayout;
- (void)applyScopeItem:(id)arg1;
- (void)setSuperWidth:(double)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

