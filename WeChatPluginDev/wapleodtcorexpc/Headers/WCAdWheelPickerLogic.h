//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCommonActionSheetPicker, NSMutableDictionary, NSString, WCAdPickerDataInfo;
@protocol WCAdWheelPickerLogicDelegate;

@interface WCAdWheelPickerLogic
{
    unsigned int _columnCount;
    id <WCAdWheelPickerLogicDelegate> _delegate;
    MMCommonActionSheetPicker *_wheelPicker;
    WCAdPickerDataInfo *_pickerDataInfo;
    NSMutableDictionary *_transferTableDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *transferTableDic; // @synthesize transferTableDic=_transferTableDic;
@property(nonatomic) unsigned int columnCount; // @synthesize columnCount=_columnCount;
@property(retain, nonatomic) WCAdPickerDataInfo *pickerDataInfo; // @synthesize pickerDataInfo=_pickerDataInfo;
@property(retain, nonatomic) MMCommonActionSheetPicker *wheelPicker; // @synthesize wheelPicker=_wheelPicker;
@property(nonatomic) __weak id <WCAdWheelPickerLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)makeTransferTable;
- (id)generateComponentPickerData:(id)arg1;
- (long long)findSelectedIndex:(id)arg1 selectedKey:(id)arg2;
- (void)setComponentData:(long long)arg1 dataList:(id)arg2 useDefault:(_Bool)arg3;
- (id)generateInitPickerData;
- (void)commonActionSheetPicker:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 pickItem:(id)arg4;
- (void)commonPickerConfirm:(id)arg1;
- (void)commonPickerCancel:(id)arg1;
- (void)showPickerInView:(id)arg1;
- (id)initWithDataInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

