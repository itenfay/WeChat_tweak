//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSMutableArray, NSString, UILabel, WCPayCardBinInfo, WCPaySelectBankViewController;

@interface WCPayFillCardInfoSelectBankItem
{
    UILabel *m_bankLabel;
    WCPayCardBinInfo *m_selectedBank;
    MMUIViewController *m_currentViewController;
    NSMutableArray *_m_arrCardTypeList;
    WCPaySelectBankViewController *_m_selectBankViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPaySelectBankViewController *m_selectBankViewController; // @synthesize m_selectBankViewController=_m_selectBankViewController;
@property(retain, nonatomic) NSMutableArray *m_arrCardTypeList; // @synthesize m_arrCardTypeList=_m_arrCardTypeList;
- (void)OnWCPaySelectBankViewControllerDidSelectItem:(id)arg1;
- (void)OnGetWCPaySelectBankViewControllerDataSorce;
- (id)bankString;
- (id)getValue;
- (_Bool)containsBankType:(id)arg1;
- (void)becomeFirstResponder;
- (void)setCurrentViewController:(id)arg1;
- (void)setSelectCardType:(id)arg1;
- (void)setCardTypeList:(id)arg1;
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

