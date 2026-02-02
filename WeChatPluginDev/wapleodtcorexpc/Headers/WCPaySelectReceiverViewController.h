//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSString, UILabel, WCPayTransToBankCardReceiver, WCUIAlertView;
@protocol WCPaySelectReceiverViewControllerDelegate;

@interface WCPaySelectReceiverViewController
{
    MMTableView *m_tableView;
    id <WCPaySelectReceiverViewControllerDelegate> _delegate;
    NSMutableArray *_m_otherHistoryArray;
    NSMutableArray *_m_myHistoryArray;
    WCUIAlertView *_m_alertView;
    WCPayTransToBankCardReceiver *_m_receiver;
    UILabel *_m_emptyTipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *m_emptyTipsLabel; // @synthesize m_emptyTipsLabel=_m_emptyTipsLabel;
@property(retain, nonatomic) WCPayTransToBankCardReceiver *m_receiver; // @synthesize m_receiver=_m_receiver;
@property(retain, nonatomic) WCUIAlertView *m_alertView; // @synthesize m_alertView=_m_alertView;
@property(retain, nonatomic) NSMutableArray *m_myHistoryArray; // @synthesize m_myHistoryArray=_m_myHistoryArray;
@property(retain, nonatomic) NSMutableArray *m_otherHistoryArray; // @synthesize m_otherHistoryArray=_m_otherHistoryArray;
@property(nonatomic) __weak id <WCPaySelectReceiverViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)confirmDeleteRecord:(id)arg1;
- (void)confirmSetRemark:(id)arg1 remark:(id)arg2;
- (void)confirmComment;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)layoutCell:(id)arg1 candidate:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)OnCancel;
- (void)updateTableView;
- (void)updateNavigationBar;
- (_Bool)isDataEmpty;
- (void)updateEmptyTipsLabel;
- (void)updateView;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (void)setupWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

