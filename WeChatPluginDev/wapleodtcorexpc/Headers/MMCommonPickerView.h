//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIPickerView.h>

@class NSArray, NSMutableArray, NSString, UIColor;
@protocol MMCommonPickerDelegate;

@interface MMCommonPickerView : UIPickerView
{
    id <MMCommonPickerDelegate> _pickDelegate;
    UIColor *_textColor;
    NSMutableArray *_dataItems;
    double _pickItemTextLineHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double pickItemTextLineHeight; // @synthesize pickItemTextLineHeight=_pickItemTextLineHeight;
@property(retain, nonatomic) NSMutableArray *dataItems; // @synthesize dataItems=_dataItems;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) __weak id <MMCommonPickerDelegate> pickDelegate; // @synthesize pickDelegate=_pickDelegate;
- (void)onPickerViewDidSelectRow:(long long)arg1 inComponent:(long long)arg2 PickItem:(id)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)updateLabelOnComponentCountOverThree:(id)arg1 ForComponent:(long long)arg2;
- (void)updateLabelOnComponentCountTwo:(id)arg1 ForComponent:(long long)arg2;
- (void)updateLabelOnComponentCountOne:(id)arg1 ForComponent:(long long)arg2;
- (void)updateLabel:(id)arg1 ForComponent:(long long)arg2 AndRow:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)titleForRow:(long long)arg1 forComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
@property(readonly, nonatomic) NSArray *selectedRows;
@property(readonly, nonatomic) id selectedData;
- (id)pickerItemForComponent:(long long)arg1 AndRow:(long long)arg2;
- (id)componentListAtIndex:(unsigned long long)arg1;
- (unsigned long long)componentCount;
- (_Bool)isScrolling:(id)arg1;
- (_Bool)isScrolling;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(_Bool)arg3;
- (void)setSelected:(id)arg1 inComponent:(long long)arg2;
- (void)setSelected:(id)arg1;
- (void)setData:(id)arg1 inComponent:(long long)arg2;
- (void)setData:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)initDataSrc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

