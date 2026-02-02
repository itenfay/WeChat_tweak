//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface MMOrderCenterOrderSearchHistoryTableViewClearCell : UITableViewCell
{
    UIImageView *_clearIconView;
    UILabel *_clearLabelView;
    UIView *_separatorBarView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorBarView; // @synthesize separatorBarView=_separatorBarView;
@property(retain, nonatomic) UILabel *clearLabelView; // @synthesize clearLabelView=_clearLabelView;
@property(retain, nonatomic) UIImageView *clearIconView; // @synthesize clearIconView=_clearIconView;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

