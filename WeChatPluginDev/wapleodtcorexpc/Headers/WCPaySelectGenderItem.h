//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPanelView, NSString, UILabel, UIPickerView;

@interface WCPaySelectGenderItem
{
    UILabel *_label;
    MMPanelView *_panelView;
    UIPickerView *_pickerView;
    unsigned long long _currentGender;
    double _contentMaxWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double contentMaxWidth; // @synthesize contentMaxWidth=_contentMaxWidth;
@property unsigned long long currentGender; // @synthesize currentGender=_currentGender;
@property(retain) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain) MMPanelView *panelView; // @synthesize panelView=_panelView;
@property(retain) UILabel *label; // @synthesize label=_label;
- (id)currentAccessibilityDesc;
- (void)resignFirstResponder;
- (void)becomeFirstResponder;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)onTapLabel;
- (void)updateLabel;
- (void)updateView;
- (void)initView:(struct CGRect)arg1;
- (void)updateCurrentGender:(unsigned long long)arg1;
- (unsigned long long)currentSelectGender;
- (void)updateContentMaxWidth:(double)arg1;
- (id)getValue;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

