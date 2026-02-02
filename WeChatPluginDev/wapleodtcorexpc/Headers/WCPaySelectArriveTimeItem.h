//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EnterTimeItem, MMUIViewController, NSString, UILabel, UITableViewCell, WCPayTransBankItem;
@protocol WCPaySelectArriveTimeItemDelegate;

@interface WCPaySelectArriveTimeItem
{
    UILabel *m_arriveTimeLabel;
    EnterTimeItem *m_enterTimeItem;
    MMUIViewController *m_currentVC;
    _Bool m_isMaintenance;
    UITableViewCell *_fatherCell;
    id <WCPaySelectArriveTimeItemDelegate> _m_selectArriveItemDelegate;
    WCPayTransBankItem *_m_bankItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayTransBankItem *m_bankItem; // @synthesize m_bankItem=_m_bankItem;
@property(nonatomic) __weak id <WCPaySelectArriveTimeItemDelegate> m_selectArriveItemDelegate; // @synthesize m_selectArriveItemDelegate=_m_selectArriveItemDelegate;
@property(nonatomic) __weak UITableViewCell *fatherCell; // @synthesize fatherCell=_fatherCell;
- (void)clearItem;
- (void)updateWithEnterTimeItem:(id)arg1;
- (void)OnWCPaySelectArriveTimeViewControllerSelectArriveTime:(id)arg1;
- (id)getAccessibilityLabel;
- (id)getArriveTimeString;
- (void)setBankItem:(id)arg1;
- (id)getValue;
- (void)updateView;
- (void)becomeFirstResponder;
- (void)setCurrentViewController:(id)arg1;
- (void)initView:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

