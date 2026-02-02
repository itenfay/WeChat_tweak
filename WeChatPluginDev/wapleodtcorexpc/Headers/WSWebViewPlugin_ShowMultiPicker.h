//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPageSheetAdapter, NSMutableArray, NSString, UIPickerView;
@protocol MMWebViewPluginShowMultiPickerDelegate;

@interface WSWebViewPlugin_ShowMultiPicker
{
    id <MMWebViewPluginShowMultiPickerDelegate> _resultDelegate;
    NSMutableArray *_arrPickerData;
    UIPickerView *_pickerView;
    MMPageSheetAdapter *_pageSheetAdapter;
    unsigned long long _pickerMode;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long pickerMode; // @synthesize pickerMode=_pickerMode;
@property(retain, nonatomic) MMPageSheetAdapter *pageSheetAdapter; // @synthesize pageSheetAdapter=_pageSheetAdapter;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) NSMutableArray *arrPickerData; // @synthesize arrPickerData=_arrPickerData;
@property(nonatomic) __weak id <MMWebViewPluginShowMultiPickerDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (_Bool)isValueToShowInPickerValid:(id)arg1;
- (long long)searchMembersInArrayWhichIsInvalid:(id)arg1;
- (long long)searchMembersInArray:(id)arg1 isNotKindOfClass:(Class)arg2;
- (_Bool)checkParamsValid:(id)arg1 withErrorMsg:(id *)arg2;
- (void)showPickerViewSuccessAndCallback;
- (void)showPickerViewCanceldWithReaseon:(id)arg1;
- (void)showPickerEndAndClearData;
- (id)colorForPageSheetCancelButtonTitle;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (id)updateMultiPickerViewOfColumn:(unsigned long long)arg1 newValueArray:(id)arg2 andCurrent:(unsigned long long)arg3;
- (void)showMultiPickerWithDataArray:(id)arg1 selectedIndexArray:(id)arg2 andHeaderText:(id)arg3 inMode:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

