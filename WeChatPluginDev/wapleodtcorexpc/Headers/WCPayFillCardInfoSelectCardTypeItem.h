//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSArray, NSMutableArray, NSString, UILabel, WCBizPickerView, WCPayCardBinInfo;

@interface WCPayFillCardInfoSelectCardTypeItem
{
    UILabel *m_cardTypeLabel;
    MMUIViewController *m_currentViewController;
    WCBizPickerView *m_pickerView;
    WCPayCardBinInfo *_m_selectCardTypeInfo;
    NSArray *_m_allCardTypeList;
    NSMutableArray *_m_selectCardTypeList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_selectCardTypeList; // @synthesize m_selectCardTypeList=_m_selectCardTypeList;
@property(retain, nonatomic) NSArray *m_allCardTypeList; // @synthesize m_allCardTypeList=_m_allCardTypeList;
@property(retain, nonatomic) WCPayCardBinInfo *m_selectCardTypeInfo; // @synthesize m_selectCardTypeInfo=_m_selectCardTypeInfo;
- (id)getValue;
- (void)WCBizPickerViewDidComplete:(id)arg1;
- (void)WCBizPickerViewDidCancel;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)setSelectBankItem:(id)arg1;
- (id)cardTypeString;
- (void)becomeFirstResponder;
- (void)setSelectCardType:(id)arg1;
- (void)setCurrentViewController:(id)arg1;
- (void)setCardTypeList:(id)arg1;
- (void)dealloc;
- (void)updateView;
- (void)initView:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

