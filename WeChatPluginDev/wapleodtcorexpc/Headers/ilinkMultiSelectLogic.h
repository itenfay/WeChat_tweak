//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, NSMutableDictionary, NSString, ilinkMultiSelectContactsViewController;
@protocol ilinkMultiSelectLogicDelegate;

@interface ilinkMultiSelectLogic : NSObject
{
    ilinkMultiSelectContactsViewController *m_vc;
    NSMutableDictionary *m_dicWillAdd;
    _Bool _doNotShowContactsSelect;
    id <ilinkMultiSelectLogicDelegate> m_delegate;
    CContact *_m_roomContact;
    unsigned long long _maxMemberNumber;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool doNotShowContactsSelect; // @synthesize doNotShowContactsSelect=_doNotShowContactsSelect;
@property(nonatomic) unsigned long long maxMemberNumber; // @synthesize maxMemberNumber=_maxMemberNumber;
@property(retain, nonatomic) CContact *m_roomContact; // @synthesize m_roomContact=_m_roomContact;
@property(nonatomic) __weak id <ilinkMultiSelectLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void)makeCell:(id)arg1 contact:(id)arg2 indexPath:(id)arg3;
- (void)onCancelSelectContact;
- (void)didSelectContact:(id)arg1;
- (void)addMembersToChatRoom:(id)arg1;
- (void)addMembers;
- (void)updateRightBtn;
- (_Bool)getIfMemberAlreadyInRoom:(id)arg1;
- (void)onMultiSelectContactOutsideRoomReturn:(id)arg1 removeContacts:(id)arg2;
- (id)getMembersHasSelectBefore;
- (id)getMembersInRoom;
- (unsigned long long)getMembersLimitNum;
- (_Bool)getIfMemberInChatGroup:(id)arg1;
- (void)updateAddMembersInfo:(id)arg1;
- (_Bool)needShowSelectStatusForCell:(id)arg1;
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

