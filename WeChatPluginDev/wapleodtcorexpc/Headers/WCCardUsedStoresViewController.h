//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSArray, NSString;
@protocol WCCardDataSource;

@interface WCCardUsedStoresViewController
{
    id <WCCardDataSource> _cardDataSource;
    NSArray *_tableDatas;
    MMTableView *_tableView;
    unsigned long long _appBrandModeType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long appBrandModeType; // @synthesize appBrandModeType=_appBrandModeType;
- (void)openAppBranWithUserName:(id)arg1 brandPass:(id)arg2;
- (void)onNavigation:(id)arg1;
- (id)getFavForawrdViewController;
- (void)onSendLocationToFriendWithViewController:(id)arg1;
- (void)onGetUsedStoreList:(id)arg1 ErrCode:(int)arg2;
- (void)onRetrieveLocationConfirm;
- (void)onRetrieveLocation:(int)arg1;
- (void)makeStoreCell:(id)arg1 storeInfo:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initView;
- (void)initData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCardDataSource:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

