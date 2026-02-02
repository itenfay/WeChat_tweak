//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface ChatRoomBaseMemberFunctionViewController
{
}

- (id)navigationBarBackgroundColor;
- (void)didClickLeftCloseBarButton;
- (void)didRemoveOperateButton:(id)arg1;
- (void)didFunctionAddMember;
- (void)openContactInfo:(id)arg1;
- (id)genHeaderViewWithTitle:(id)arg1 andContent:(id)arg2;
- (void)makeChatRoomMemberFunctionAddCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeChatRoomMemberFunctionCell:(id)arg1 CellInfo:(id)arg2;
- (void)reloadTableDataWithArrMemberConatct:(id)arg1 isShowAddCell:(_Bool)arg2 andTitle:(id)arg3 andContent:(id)arg4;
- (id)getChatRoomContact;
- (_Bool)isShowDeleteButton;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

