//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMTableView, NSMutableArray, NSString, RoomDelMemController;
@protocol ChatroomMemberRemoveViewControllerDelegate;

@interface ChatroomMemberRemoveViewController
{
    NSString *_groupName;
    NSString *_removingUserName;
    NSMutableArray *_arrRemoveMember;
    MMTableView *_tableView;
    id <ChatroomMemberRemoveViewControllerDelegate> _vcDelegate;
    CContact *_contact;
    RoomDelMemController *_chatRoomDelMemController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ChatroomMemberRemoveViewControllerDelegate> vcDelegate; // @synthesize vcDelegate=_vcDelegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 row:(unsigned long long)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onContactsItemViewRightButtonClick:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned int)arg2 memberList:(id)arg3 errTip:(id)arg4;
- (void)onStartDeletingUsr:(id)arg1;
- (void)doRoomHistoryCancelReport;
- (void)viewDidLayoutSubviews;
- (void)reloadDataAndView;
- (void)viewDidLoad;
- (void)onCancel;
- (id)initWithGroup:(id)arg1 arrRemoveMember:(id)arg2 operatingMessage:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

