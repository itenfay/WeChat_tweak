//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, MMWebImageView, NSString, UILabel, UITableViewCell, WCPaySelectBankViewController, WCPayT2BCGetBankListCgi, WCPayTransBankItem;
@protocol WCPaySelectBankItemDelegate;

@interface WCPaySelectBankItem
{
    MMUIViewController *m_currentViewController;
    WCPayTransBankItem *m_value;
    MMWebImageView *m_bankIconView;
    UILabel *m_bankLabel;
    _Bool _m_isUnselectable;
    UITableViewCell *_fatherCell;
    id <WCPaySelectBankItemDelegate> _m_selectBankItemDelegate;
    WCPayT2BCGetBankListCgi *_m_getBankListCgi;
    WCPaySelectBankViewController *_m_selectBankViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPaySelectBankViewController *m_selectBankViewController; // @synthesize m_selectBankViewController=_m_selectBankViewController;
@property(retain, nonatomic) WCPayT2BCGetBankListCgi *m_getBankListCgi; // @synthesize m_getBankListCgi=_m_getBankListCgi;
@property(nonatomic) _Bool m_isUnselectable; // @synthesize m_isUnselectable=_m_isUnselectable;
@property(nonatomic) __weak id <WCPaySelectBankItemDelegate> m_selectBankItemDelegate; // @synthesize m_selectBankItemDelegate=_m_selectBankItemDelegate;
@property(nonatomic) __weak UITableViewCell *fatherCell; // @synthesize fatherCell=_fatherCell;
- (void)OnGetBankListOK:(id)arg1 allBankList:(id)arg2;
- (void)OnGetWCPaySelectBankViewControllerDataSorce;
- (id)getBankIconImageView;
- (id)bankString;
- (void)setBankItem:(id)arg1;
- (void)OnWCPaySelectBankViewControllerDidSelectItem:(id)arg1;
- (void)becomeFirstResponder;
- (void)clearItem;
- (id)getValue;
- (void)setCurrentViewController:(id)arg1;
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

