//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCommonActionSheetPicker, NSArray, NSString, WCAddressStageDataStruct;

@interface WCPOIAddressPickerItem
{
    NSArray *m_arrStage;
    WCAddressStageDataStruct *m_selectProvince;
    WCAddressStageDataStruct *m_selectCity;
    WCAddressStageDataStruct *m_selectDistrict;
    long long m_uiCurProvince;
    long long m_uiCurCity;
    long long m_uiCurDistrict;
    MMCommonActionSheetPicker *m_pickerView;
    _Bool m_bLockProvince;
    _Bool m_bLockCity;
    _Bool m_bLockDistrict;
    _Bool m_bLockProviceAndCity;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool lockProviceAndCity; // @synthesize lockProviceAndCity=m_bLockProviceAndCity;
- (void)commonPickerConfirm:(id)arg1;
- (void)commonPickerCancel:(id)arg1;
- (void)onPickerViewDidSelectRow:(long long)arg1 inComponent:(long long)arg2 PickItem:(id)arg3;
- (id)getDistrictDataItems;
- (id)getCityDataItems;
- (id)getProvinceDataItems;
- (id)getAddressDataItems;
- (void)reloadComponents;
- (void)SetText;
- (void)becomeFirstResponder;
- (void)initView:(struct CGRect)arg1;
- (void)resetSelectedAddress;
- (id)getSelectDistrict;
- (id)getSelectCity;
- (id)getSelectProvice;
- (_Bool)selectCityInDistrict:(id)arg1;
- (void)setSelectStageProvince:(id)arg1 City:(id)arg2 District:(id)arg3;
- (void)setAllAddressStageData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

