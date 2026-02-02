//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCommonPickerView, MMFinderLiveBattleDurationItem, NSArray, NSString, UIView;
@protocol MMFinderLiveConnectMicPkDurationSelectionPageSheetDelegate;

@interface MMFinderLiveConnectMicPkDurationSelectionPageSheet
{
    id <MMFinderLiveConnectMicPkDurationSelectionPageSheetDelegate> _delegate;
    NSArray *_options;
    MMFinderLiveBattleDurationItem *_selectedOption;
    UIView *_separatorBar;
    MMCommonPickerView *_picker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMCommonPickerView *picker; // @synthesize picker=_picker;
@property(retain, nonatomic) UIView *separatorBar; // @synthesize separatorBar=_separatorBar;
@property(retain, nonatomic) MMFinderLiveBattleDurationItem *selectedOption; // @synthesize selectedOption=_selectedOption;
@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
@property(nonatomic) __weak id <MMFinderLiveConnectMicPkDurationSelectionPageSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initializeComponents;
- (void)onPickerViewDidSelectRow:(long long)arg1 inComponent:(long long)arg2 PickItem:(id)arg3;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)layoutSubviews;
- (id)initWithDurationOptions:(id)arg1 selectedOption:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

