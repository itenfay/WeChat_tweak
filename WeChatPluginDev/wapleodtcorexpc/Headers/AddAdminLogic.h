//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSArray, NSMutableDictionary, NSString, RoomContactSelectViewController;
@protocol AddAdminLogicDelegate;

@interface AddAdminLogic
{
    id <AddAdminLogicDelegate> m_delegate;
    _Bool m_bNeedReload;
    RoomContactSelectViewController *m_vc;
    NSMutableDictionary *m_dicWillAdd;
    CContact *_m_roomContact;
    NSArray *_m_arrExistAdmintUserName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *m_arrExistAdmintUserName; // @synthesize m_arrExistAdmintUserName=_m_arrExistAdmintUserName;
@property(retain, nonatomic) CContact *m_roomContact; // @synthesize m_roomContact=_m_roomContact;
@property(nonatomic) __weak id <AddAdminLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (void)onViewContact:(id)arg1;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)onCancelSelectContact;
- (void)didSelectContact:(id)arg1;
- (void)OnAddGroupAdmin:(id)arg1 withResult:(unsigned int)arg2 adminList:(id)arg3 errTip:(id)arg4;
- (void)addAdmin;
- (void)addMembersToChatRoomAdmin:(id)arg1;
- (void)updateRightBtn;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

