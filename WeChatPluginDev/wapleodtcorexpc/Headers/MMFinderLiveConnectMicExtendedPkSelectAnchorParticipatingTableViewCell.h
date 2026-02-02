//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UISwitch, UIView;
@protocol MMFinderLiveConnectMicExtendedPkSelectAnchorParticipatingTableViewCellDelegate;

@interface MMFinderLiveConnectMicExtendedPkSelectAnchorParticipatingTableViewCell : UITableViewCell
{
    id <MMFinderLiveConnectMicExtendedPkSelectAnchorParticipatingTableViewCellDelegate> _delegate;
    UILabel *_bulletLabel;
    UILabel *_titleLabel;
    UISwitch *_toggleSwitch;
    UIView *_separatorBar;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorBar; // @synthesize separatorBar=_separatorBar;
@property(retain, nonatomic) UISwitch *toggleSwitch; // @synthesize toggleSwitch=_toggleSwitch;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *bulletLabel; // @synthesize bulletLabel=_bulletLabel;
@property(nonatomic) __weak id <MMFinderLiveConnectMicExtendedPkSelectAnchorParticipatingTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onSwitchToggled;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool separatorBarHidden;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

