//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPanelView, NSString, UILabel, UIPickerView;

@interface WCPaySelectCountItemV2
{
    UIPickerView *m_pickerView;
    long long m_iStartCount;
    long long m_iEndCount;
    NSString *m_value;
    UILabel *_label;
    MMPanelView *_panelView;
    long long _m_count;
    NSString *_title;
    double _contentMaxWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double contentMaxWidth; // @synthesize contentMaxWidth=_contentMaxWidth;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long m_count; // @synthesize m_count=_m_count;
@property(retain, nonatomic) MMPanelView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)resignFirstResponder;
- (void)becomeFirstResponder;
- (long long)getCount;
- (void)setDefaultCount:(long long)arg1;
- (void)setStartCount:(long long)arg1 endCount:(long long)arg2;
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

