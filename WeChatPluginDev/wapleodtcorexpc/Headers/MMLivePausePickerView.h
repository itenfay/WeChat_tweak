//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCommonPickerView, NSNumber, NSString, UIView;
@protocol MMLivePausePickerViewDelegate;

@interface MMLivePausePickerView
{
    id <MMLivePausePickerViewDelegate> _delegate;
    UIView *_contentView;
    MMCommonPickerView *_pickerView;
    UIView *_pickerViewCustomizedIndicatorTopLine;
    UIView *_pickerViewCustomizedIndicatorBottomLine;
    NSNumber *_selectedDuration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *selectedDuration; // @synthesize selectedDuration=_selectedDuration;
@property(retain, nonatomic) UIView *pickerViewCustomizedIndicatorBottomLine; // @synthesize pickerViewCustomizedIndicatorBottomLine=_pickerViewCustomizedIndicatorBottomLine;
@property(retain, nonatomic) UIView *pickerViewCustomizedIndicatorTopLine; // @synthesize pickerViewCustomizedIndicatorTopLine=_pickerViewCustomizedIndicatorTopLine;
@property(retain, nonatomic) MMCommonPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <MMLivePausePickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPickerViewDidSelectRow:(long long)arg1 inComponent:(long long)arg2 PickItem:(id)arg3;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)colorForPageSheetConfirmButton;
- (id)colorForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

