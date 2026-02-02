//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UISwitch;
@protocol MMLiveBeautyExtSettingCardDelegate;

@interface MMLiveBeautyExtSettingCard
{
    id <MMLiveBeautyExtSettingCardDelegate> _delegate;
    MMUILabel *_titleLabel;
    MMUILabel *_subTitleLabel;
    UISwitch *_settingSwitch;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UISwitch *settingSwitch; // @synthesize settingSwitch=_settingSwitch;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <MMLiveBeautyExtSettingCardDelegate> delegate; // @synthesize delegate=_delegate;
- (void)switchDidChanged:(id)arg1;
- (void)heightToFit;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setupSubviews;
- (id)init;

@end

