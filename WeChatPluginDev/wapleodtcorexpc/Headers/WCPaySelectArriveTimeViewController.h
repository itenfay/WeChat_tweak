//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EnterTimeItem, WCPayTransBankItem;
@protocol WCPaySelectArriveTimeViewControllerDelegate;

@interface WCPaySelectArriveTimeViewController
{
    id <WCPaySelectArriveTimeViewControllerDelegate> _delegate;
    EnterTimeItem *_m_arriveTimeItem;
    WCPayTransBankItem *_m_bankItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayTransBankItem *m_bankItem; // @synthesize m_bankItem=_m_bankItem;
@property(nonatomic) EnterTimeItem *m_arriveTimeItem; // @synthesize m_arriveTimeItem=_m_arriveTimeItem;
@property(nonatomic) __weak id <WCPaySelectArriveTimeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clickInfoCell:(id)arg1;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2;
- (void)reloadData;
- (void)OnReturn;
- (void)initNavigationBar;
- (void)viewDidLoad;

@end

