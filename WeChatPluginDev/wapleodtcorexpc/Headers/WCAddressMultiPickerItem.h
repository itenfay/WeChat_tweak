//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, WCAddressHalfScreenPickerView;

@interface WCAddressMultiPickerItem
{
    NSArray *m_arrStage;
    NSString *m_selectProvince;
    NSString *m_selectCity;
    NSString *m_selectDistrict;
    NSString *m_selectStreet;
    NSString *m_nationalCode;
    int m_component;
    WCAddressHalfScreenPickerView *_pickerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAddressHalfScreenPickerView *pickerView; // @synthesize pickerView=_pickerView;
- (id)selectStreet;
- (id)selectDistrict;
- (id)selectCity;
- (id)selectProvice;
- (void)setComponentWhenAppear:(int)arg1;
- (void)setAllAddressStageData:(id)arg1;
- (void)setSelectStageProvince:(id)arg1 City:(id)arg2 District:(id)arg3 Street:(id)arg4 NationalCode:(id)arg5;
- (void)setSelectStageProvince:(id)arg1 City:(id)arg2 District:(id)arg3 Street:(id)arg4;
- (void)setSelectStageProvince:(id)arg1 City:(id)arg2 District:(id)arg3;
- (void)reloadAddress;
- (void)setScreenViewDelegate:(id)arg1;
- (void)becomeFirstResponder;
- (void)initView:(struct CGRect)arg1;

@end

