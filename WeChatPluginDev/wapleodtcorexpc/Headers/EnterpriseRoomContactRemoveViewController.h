//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSString;

@interface EnterpriseRoomContactRemoveViewController
{
    NSString *_groupName;
    NSString *_removingUserName;
    NSString *_chatBrandUserName;
    NSMutableArray *_aryRemoveMember;
    MMTableView *_tableView;
}

- (void).cxx_destruct;
- (void)onCancel;
- (void)onUpdateEnterpriseGroupMemberList:(id)arg1 errorCode:(int)arg2;
- (void)onEnterpriseContactItemViewRightButtonClick:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)reloadAll;
- (void)viewDidLoad;
- (id)initWithGroupName:(id)arg1 aryRemoveMember:(id)arg2 chatBrandUserName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

