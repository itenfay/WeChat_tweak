//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMVoidListCallback, NSArray, NSString, UIPickerView;

@interface KindaPickerView
{
    UIPickerView *_pickerView;
    MMVoidListCallback *_callback;
    NSArray *_normalData;
    NSArray *_syncDataFirstColumn;
    NSArray *_syncDataSecondColumn;
    unsigned long long _seletedRowInFirstColumn;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long seletedRowInFirstColumn; // @synthesize seletedRowInFirstColumn=_seletedRowInFirstColumn;
@property(retain, nonatomic) NSArray *syncDataSecondColumn; // @synthesize syncDataSecondColumn=_syncDataSecondColumn;
@property(retain, nonatomic) NSArray *syncDataFirstColumn; // @synthesize syncDataFirstColumn=_syncDataFirstColumn;
@property(retain, nonatomic) NSArray *normalData; // @synthesize normalData=_normalData;
@property(retain, nonatomic) MMVoidListCallback *callback; // @synthesize callback=_callback;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)getCurrentSelectedRows;
- (void)setSelectedRow:(int)arg1 column:(int)arg2;
- (void)setSelectedRows:(id)arg1;
- (void)setCallbackImpl:(id)arg1;
- (void)setSyncData:(id)arg1 secondColumn:(id)arg2;
- (id)getView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

