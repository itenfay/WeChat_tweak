//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUILabel, NSString, UIImageView;

@interface StorageCacheClassCell : UITableViewCell
{
    _Bool _isSelected;
    NSString *_titleString;
    NSString *_sizeString;
    UIImageView *_selectIconView;
    MMUILabel *_titleLabel;
    MMUILabel *_sizeLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *selectIconView; // @synthesize selectIconView=_selectIconView;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *sizeString; // @synthesize sizeString=_sizeString;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (void)layoutSubviews;
- (void)updateView;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

