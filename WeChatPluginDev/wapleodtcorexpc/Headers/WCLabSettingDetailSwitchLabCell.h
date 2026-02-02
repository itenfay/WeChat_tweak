//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUILabel, UISwitch, UIView;

@interface WCLabSettingDetailSwitchLabCell : UITableViewCell
{
    UIView *_topLineView;
    UIView *_bottomLineView;
    MMUILabel *_label;
    UISwitch *_labSwitch;
}

+ (double)height;
- (void).cxx_destruct;
@property(retain, nonatomic) UISwitch *labSwitch; // @synthesize labSwitch=_labSwitch;
- (void)initLabel;
- (void)initSwitch;
- (void)switchChanged:(id)arg1;
- (void)initLines;
- (void)configureWithLabItem:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

