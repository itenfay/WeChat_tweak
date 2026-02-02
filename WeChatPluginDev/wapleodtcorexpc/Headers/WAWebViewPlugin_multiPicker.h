//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WABasePickerView;
@protocol WAWebViewPluginPickerDelegate;

@interface WAWebViewPlugin_multiPicker
{
    WABasePickerView *_pickerView;
    id <WAWebViewPluginPickerDelegate> _resultDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WAWebViewPluginPickerDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (double)getContentMaxHeight;
- (void)onDateTimeConfirm:(id)arg1;
- (void)onSelect:(long long)arg1 row:(long long)arg2;
- (void)onConfirm:(id)arg1 values:(id)arg2;
- (void)onCancel;
- (void)pickerWillShow;
- (void)showDateTimePickerView:(long long)arg1 field:(id)arg2 current:(id)arg3 start:(id)arg4 end:(id)arg5 headerText:(id)arg6;
- (void)showSinglePickerView:(id)arg1 current:(unsigned long long)arg2 headerText:(id)arg3;
- (void)updateMultiPickerView:(id)arg1 current:(long long)arg2 column:(long long)arg3;
- (void)showMultiPickerView:(id)arg1 current:(id)arg2 headerText:(id)arg3;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

