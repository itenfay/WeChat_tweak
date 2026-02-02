//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UISwitch, UIView;
@protocol MMFinderLiveConnectMicModePageSheetSwitchCellDelegate;

@interface MMFinderLiveConnectMicModePageSheetSwitchCell : UITableViewCell
{
    UISwitch *_toggleSwitch;
    id <MMFinderLiveConnectMicModePageSheetSwitchCellDelegate> _delegate;
    UILabel *_titleLabel;
    UIView *_separatorBar;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorBar; // @synthesize separatorBar=_separatorBar;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <MMFinderLiveConnectMicModePageSheetSwitchCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UISwitch *toggleSwitch; // @synthesize toggleSwitch=_toggleSwitch;
- (void)onSwitchToggled;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) NSString *title;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

