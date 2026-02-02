//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPanelView, NSMutableArray, NSString, UILabel, UIPickerView, WCPayCredInfo;

@interface WCPayCredTypeItem
{
    UILabel *m_textLabel;
    NSMutableArray *m_arrSection;
    WCPayCredInfo *m_selectType;
    long long m_iCurrentSectoin;
    double _contentMaxWidth;
    MMPanelView *_panelView;
    UIPickerView *_pickerView;
}

- (void).cxx_destruct;
@property(retain) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain) MMPanelView *panelView; // @synthesize panelView=_panelView;
@property double contentMaxWidth; // @synthesize contentMaxWidth=_contentMaxWidth;
- (id)currentAccessibilityDesc;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)updateTitleColor:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setEnable:(_Bool)arg1;
- (void)setCredTypeList:(id)arg1;
- (void)setSelectCredType:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setText:(id)arg1;
- (id)getValue;
- (void)resignFirstResponder;
- (void)becomeFirstResponder;
- (id)getStringFrom:(id)arg1;
- (void)beforeShowPicker;
- (void)onTapLabel;
- (void)updateLabel;
- (void)updateView;
- (void)initView:(struct CGRect)arg1;
- (void)updateContentMaxWidth:(double)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

