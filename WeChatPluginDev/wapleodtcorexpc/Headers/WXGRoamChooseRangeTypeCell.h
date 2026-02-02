//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface WXGRoamChooseRangeTypeCell : UITableViewCell
{
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UIImageView *_selectedIcon;
    UIImageView *_rightIcon;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *rightIcon; // @synthesize rightIcon=_rightIcon;
@property(retain, nonatomic) UIImageView *selectedIcon; // @synthesize selectedIcon=_selectedIcon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void)setCellWidth:(double)arg1 index:(long long)arg2 type:(unsigned long long)arg3 count:(long long)arg4;

@end

