//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface WCFinderSearchHistoryMoreTableViewCell : UITableViewCell
{
    UILabel *_label;
    UIImageView *_iconView;
    unsigned long long _cellType;
}

+ (id)cellID;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
- (void)updateCellType:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

