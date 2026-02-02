//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UISwitch;
@protocol MMTemplateMsgGlobalSwitchCellDelegate;

@interface MMTemplateMsgGlobalSwitchCell : UITableViewCell
{
    UILabel *_titleLabel;
    UISwitch *_ctrlSwitch;
    id <MMTemplateMsgGlobalSwitchCellDelegate> _delegate;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MMTemplateMsgGlobalSwitchCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateTitle:(id)arg1 ctrlSwitch:(_Bool)arg2;
- (void)layoutSubviews;
- (void)onCtrlSwitchChanged:(id)arg1;
- (void)initCtrlSwitch;
- (void)initTitleLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

