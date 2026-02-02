//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPickerMaskView, NSString, WACommonPickerView;

@interface WAJSEventHandler_showPickerView
{
    WACommonPickerView *_picker;
    MMPickerMaskView *_mask;
    long long _current;
    double _pickerTime;
}

- (void).cxx_destruct;
- (void)onConfirm:(id)arg1 values:(id)arg2;
- (void)onCancel;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

