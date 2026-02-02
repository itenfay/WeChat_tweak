//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCCardNewTicketContentDelegate;

@interface WCCardNewTicketDetailContentView
{
    id <WCCardNewTicketContentDelegate> _delegte;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCardNewTicketContentDelegate> delegte; // @synthesize delegte=_delegte;
- (void)realOpenTinyAppWithUsername:(id)arg1 path:(id)arg2;
- (void)realOpenUrl:(id)arg1;
- (void)onTicketCodeCellViewCodeClick;
- (void)onTicketCodeCellViewSecondaryFieldClick:(id)arg1;
- (void)jumpButtonDidClikced;
- (void)onTicketHeaderAcceptBtnClick;
- (void)onTicketHeaderUsredStoreBtnClick;
- (_Bool)ticketHeaderHaveUsedStoreInfo;
- (id)ticketHeaderGetStoreInfo;
- (_Bool)ticketHeaderHaveNearByStoreInfo;
- (void)makeCodeCell:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)getTableViewCellSumHeight;
- (id)createTableViewFooterView;
- (id)createTableViewHeaderView;
- (void)initContentView;
- (void)reloadContentData;
- (id)initContentViewWithFrame:(struct CGRect)arg1 withCardDataSource:(id)arg2 withNearbyStore:(id)arg3 withServiceContact:(id)arg4 withDelegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

