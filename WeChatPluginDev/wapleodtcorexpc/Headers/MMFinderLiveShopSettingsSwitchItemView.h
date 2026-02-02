//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UISwitch, UIView;

@interface MMFinderLiveShopSettingsSwitchItemView
{
    UISwitch *_switchView;
    UIView *_switchTapView;
    CDUnknownBlockType _onSwitchChange;
    CDUnknownBlockType _onSwitchTap;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onSwitchTap; // @synthesize onSwitchTap=_onSwitchTap;
@property(copy, nonatomic) CDUnknownBlockType onSwitchChange; // @synthesize onSwitchChange=_onSwitchChange;
@property(retain, nonatomic) UIView *switchTapView; // @synthesize switchTapView=_switchTapView;
@property(retain, nonatomic) UISwitch *switchView; // @synthesize switchView=_switchView;
- (void)layoutSubviews;
- (void)onSwitchTapViewTaped:(id)arg1;
- (void)onSwitchChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

