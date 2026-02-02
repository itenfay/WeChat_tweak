//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPanelView, NSArray, NSString, UILabel, UIPickerView, WCPayProfession;

@interface WCPayGetProfessionItemV2
{
    NSArray *_professions;
    UILabel *_label;
    MMPanelView *_panelView;
    UIPickerView *_pickerView;
    long long _count;
    NSString *_title;
    double _contentMaxWidth;
    WCPayProfession *_profession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayProfession *profession; // @synthesize profession=_profession;
@property(nonatomic) double contentMaxWidth; // @synthesize contentMaxWidth=_contentMaxWidth;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) MMPanelView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSArray *professions; // @synthesize professions=_professions;
- (id)currentAccessibilityDesc;
- (void)resignFirstResponder;
- (void)becomeFirstResponder;
- (void)UIPickerViewDidFinish;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)onTapLabel;
- (void)updateLabel;
- (void)updateView;
- (void)initView:(struct CGRect)arg1;
- (void)updateContentMaxWidth:(double)arg1;
- (void)updateProfession:(id)arg1;
- (id)getValue;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

