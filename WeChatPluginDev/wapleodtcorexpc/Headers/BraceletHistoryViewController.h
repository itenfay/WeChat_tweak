//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSString;

@interface BraceletHistoryViewController
{
    _Bool _isSelf;
    NSString *_username;
    MMTableView *_tableView;
    NSMutableArray *_dailySportList;
    unsigned long long _initTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long initTime; // @synthesize initTime=_initTime;
@property(retain, nonatomic) NSMutableArray *dailySportList; // @synthesize dailySportList=_dailySportList;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) _Bool isSelf; // @synthesize isSelf=_isSelf;
- (void)onClickAppWithFinderUsername:(id)arg1 records:(id)arg2;
- (void)onClickLikeButtonWithLikeList:(id)arg1;
- (void)onClickAppWithWAContact:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onGetUserHistoryPage:(id)arg1;
- (void)initView;
- (void)initData;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (id)initWithUserName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

