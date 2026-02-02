//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMDynamicColor, MMKBankEditViewOnSeletBankCallback, NSMutableArray, NSString, UITextField, WCPaySelectBankViewController, WCPaySingleSelectTableViewController;

@interface KindaBankEditView
{
    WCPaySelectBankViewController *m_selectBankVC;
    UITextField *m_view;
    NSMutableArray *m_major_bank_list;
    NSMutableArray *m_bank_list;
    MMKBankEditViewOnSeletBankCallback *m_callback;
    NSMutableArray *m_bank_type_list;
    float _fontSize;
    long long _fontStyle;
    MMDynamicColor *_dynamicColor;
    NSString *_bankName;
    NSString *_bankCardType;
    WCPaySingleSelectTableViewController *_singleSelectViewController;
    NSMutableArray *_currentBankCardTypeList;
    NSMutableArray *_currentBankCardTypeDisplayList;
    NSString *_tmpBankName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tmpBankName; // @synthesize tmpBankName=_tmpBankName;
@property(retain, nonatomic) NSMutableArray *currentBankCardTypeDisplayList; // @synthesize currentBankCardTypeDisplayList=_currentBankCardTypeDisplayList;
@property(retain, nonatomic) NSMutableArray *currentBankCardTypeList; // @synthesize currentBankCardTypeList=_currentBankCardTypeList;
@property(retain, nonatomic) WCPaySingleSelectTableViewController *singleSelectViewController; // @synthesize singleSelectViewController=_singleSelectViewController;
@property(retain, nonatomic) NSString *bankCardType; // @synthesize bankCardType=_bankCardType;
@property(retain, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) MMDynamicColor *dynamicColor; // @synthesize dynamicColor=_dynamicColor;
@property(nonatomic) long long fontStyle; // @synthesize fontStyle=_fontStyle;
- (_Bool)getSupportDynamicSize;
- (id)getSelectedBankType;
- (float)getTextSize;
- (void)setTextSize:(float)arg1;
- (long long)getFontStyle;
- (id)getTextColor;
- (void)setTextColor:(id)arg1;
- (void)setOnSeletBankCallback:(id)arg1;
- (void)onSingleSelectWithIndexPath:(id)arg1;
- (_Bool)needPushSelectCardTypeViewController;
- (void)OnWCPaySelectBankViewControllerDidSelectItem:(id)arg1;
- (void)OnGetWCPaySelectBankViewControllerDataSorce;
- (void)openBankSelectView;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)setSelected:(id)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (void)setData:(id)arg1;
- (id)bankListFromKindaData:(id)arg1;
- (id)getView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

