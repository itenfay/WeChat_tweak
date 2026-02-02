//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface MMFinderLiveConnectMicExtendedPkSelectLayoutModeTableViewCell : UITableViewCell
{
    unsigned long long _selectedLayoutMode;
    UILabel *_titleLabel;
    UILabel *_rightLabel;
    UIImageView *_rightChevronView;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *rightChevronView; // @synthesize rightChevronView=_rightChevronView;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long selectedLayoutMode; // @synthesize selectedLayoutMode=_selectedLayoutMode;
- (void)layoutSubviews;
- (void)updateRightLabelText;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

