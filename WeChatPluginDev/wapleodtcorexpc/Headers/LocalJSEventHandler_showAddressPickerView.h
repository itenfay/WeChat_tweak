//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, WCAddressHalfScreenPickerView;

@interface LocalJSEventHandler_showAddressPickerView
{
    int _pickerMode;
    unsigned int _state;
    WCAddressHalfScreenPickerView *_pickerView;
    NSArray *_addressItems;
    NSArray *_current;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) int pickerMode; // @synthesize pickerMode=_pickerMode;
@property(retain, nonatomic) NSArray *current; // @synthesize current=_current;
@property(retain, nonatomic) NSArray *addressItems; // @synthesize addressItems=_addressItems;
@property(retain, nonatomic) WCAddressHalfScreenPickerView *pickerView; // @synthesize pickerView=_pickerView;
- (void)OnGetAllFourthAddressStageData:(id)arg1 Error:(id)arg2;
- (unsigned long long)eventAuthScene;
- (void)multiPickerWillDisappear;
- (void)chooseStageAtComponent:(int)arg1 withProvince:(id)arg2 andCity:(id)arg3 andDistrict:(id)arg4 andStreet:(id)arg5;
- (void)onFinishMultiPickerWithProvince:(id)arg1 andCity:(id)arg2 andDistrict:(id)arg3 andStreet:(id)arg4 andPostCode:(id)arg5;
- (void)onFailureCompletionWithText:(id)arg1 andComponent:(int)arg2;
- (void)initPickerView;
- (void)configAddressPicker;
- (int)parseModeType:(id)arg1;
- (void)initAddressItems;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

