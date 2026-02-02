//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ChatBackgroundView, MMTableView, NSMutableArray, NSString;
@protocol MMChatBackgroundSettingViewControllerDelegate;

@interface MMChatBackgroundSettingViewController
{
    MMTableView *m_tableView;
    long long m_columnCount;
    NSMutableArray *m_itemViews;
    NSString *m_username;
    NSMutableArray *m_allItems;
    _Bool isSettingChanged;
    ChatBackgroundView *currentSelectView;
    _Bool _bFromSetting;
    id <MMChatBackgroundSettingViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bFromSetting; // @synthesize bFromSetting=_bFromSetting;
@property(nonatomic) __weak id <MMChatBackgroundSettingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *m_allItems; // @synthesize m_allItems;
@property(retain, nonatomic) NSString *m_username; // @synthesize m_username;
@property(retain, nonatomic) NSMutableArray *m_itemViews; // @synthesize m_itemViews;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
- (void)onListStatusChange;
- (void)onChatBackgroundViewClick:(id)arg1;
- (void)onChatBackgroundDownloadFinishedForUser:(id)arg1 withCID:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)OnDone;
- (void)OnCancel;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (long long)getRowCount;
- (id)getAllItems;
- (id)init;
- (void)addItemView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

