//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSDictionary, NSString, WCAddressHalfScreenPickerView;
@protocol IWAWebViewPluginDelegate;

@interface WAWebViewPlugin_addressPicker
{
    int _pickerMode;
    id <IWAWebViewPluginDelegate> _resultDelegate;
    WCAddressHalfScreenPickerView *_pickerView;
    NSArray *_addressItems;
    NSArray *_current;
    NSDictionary *_result;
    NSString *_errString;
}

- (void).cxx_destruct;
@property(nonatomic) int pickerMode; // @synthesize pickerMode=_pickerMode;
@property(retain, nonatomic) NSString *errString; // @synthesize errString=_errString;
@property(retain, nonatomic) NSDictionary *result; // @synthesize result=_result;
@property(retain, nonatomic) NSArray *current; // @synthesize current=_current;
@property(retain, nonatomic) NSArray *addressItems; // @synthesize addressItems=_addressItems;
@property(retain, nonatomic) WCAddressHalfScreenPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic) __weak id <IWAWebViewPluginDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (void)OnGetAllFourthAddressStageData:(id)arg1 Error:(id)arg2;
- (void)chooseStageAtComponent:(int)arg1 withProvince:(id)arg2 andCity:(id)arg3 andDistrict:(id)arg4 andStreet:(id)arg5;
- (void)onFinishMultiPickerWithProvince:(id)arg1 andCity:(id)arg2 andDistrict:(id)arg3 andStreet:(id)arg4 andPostCode:(id)arg5;
- (void)onFailureCompletionWithText:(id)arg1 andComponent:(int)arg2;
- (void)multiPickerWillDisappear;
- (void)configAddressPicker;
- (void)showAddressPicker:(id)arg1 mode:(id)arg2;
- (int)parseModeType:(id)arg1;
- (void)initAddressItems;
- (void)initPickerView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

