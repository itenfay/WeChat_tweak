//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel, UISwitch;
@protocol MMFinderLiveFansGroupAnchorEditSwitchCellDelegate;

@interface MMFinderLiveFansGroupAnchorEditSwitchCell
{
    id <MMFinderLiveFansGroupAnchorEditSwitchCellDelegate> _delegate;
    UILabel *_titleLabel;
    UISwitch *_editSwitch;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) UISwitch *editSwitch; // @synthesize editSwitch=_editSwitch;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <MMFinderLiveFansGroupAnchorEditSwitchCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)switchDidChanged:(id)arg1;
- (void)layoutSubviews;
- (void)setSwitchOn:(_Bool)arg1;
- (id)getTitle;
- (void)configWithTitle:(id)arg1 switchOn:(_Bool)arg2;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

