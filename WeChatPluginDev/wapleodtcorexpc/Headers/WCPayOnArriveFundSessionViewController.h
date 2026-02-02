//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSString;

@interface WCPayOnArriveFundSessionViewController
{
    MMTableView *m_tableView;
    NSMutableArray *m_arrSessionInfo;
    NSMutableArray *m_arrChatName;
    NSString *m_confirmingSessionName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_confirmingSessionName; // @synthesize m_confirmingSessionName;
@property(retain, nonatomic) NSMutableArray *m_arrChatName; // @synthesize m_arrChatName;
@property(retain, nonatomic) NSMutableArray *m_arrSessionInfo; // @synthesize m_arrSessionInfo;
- (void)OnQuitGroup:(id)arg1;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)onArriveFundConfirmDeleteSession:(id)arg1;
- (void)onArriveFundCancelDeleteSession:(id)arg1;
- (void)deleteSessionOnIndexPath:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onBackBtnDone:(id)arg1;
- (void)initNavigationBar;
- (void)initTableView;
- (void)updateSessionInfo;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)sortSession;
- (void)viewDidLoad;
- (id)initWithWithChatName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

