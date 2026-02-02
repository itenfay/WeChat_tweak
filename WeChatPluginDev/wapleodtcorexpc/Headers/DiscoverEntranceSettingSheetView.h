//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DiscoverEntranceSettingConfig;
@protocol DiscoverEntranceSettingSheetViewDelegate;

@interface DiscoverEntranceSettingSheetView
{
    id <DiscoverEntranceSettingSheetViewDelegate> _delegate;
    DiscoverEntranceSettingConfig *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DiscoverEntranceSettingConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <DiscoverEntranceSettingSheetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hideSubSwitchViewsWhenEntranceValueChanged:(_Bool)arg1;
- (id)genEntrySwitchViewWithTitle:(id)arg1 uiSwitch:(id)arg2;
- (id)genSwitchViewWithInfo:(id)arg1;
- (void)appendSwitchListViewWithInfos:(id)arg1;
- (void)appendIconView;
- (void)showWithAnimated:(_Bool)arg1;
- (void)customArrangeViews;
- (void)pageSheetWillDisappear;
- (void)onSwitchChanged:(id)arg1;
- (id)initWithConfig:(id)arg1;

@end

