//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, ContactsCreateChatRoomLogic, MMTipsViewController, MultiSelectContactsViewController, NSMutableArray, NSMutableDictionary, NSString, SelectContactsViewController;
@protocol CreateChatLogicDelegate;

@interface CreateChatLogic
{
    id <CreateChatLogicDelegate> m_delegate;
    ContactsCreateChatRoomLogic *m_createLogic;
    MultiSelectContactsViewController *m_MultiSelectController;
    _Bool m_isCreateWXTalk;
    unsigned long long m_commonSearchScene;
    NSMutableDictionary *m_chatRoonMemberDic;
    MMTipsViewController *m_errorView;
    SelectContactsViewController *m_SelectContactsViewController;
    CContact *_contact;
    NSMutableArray *_selectedMsgList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *selectedMsgList; // @synthesize selectedMsgList=_selectedMsgList;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) SelectContactsViewController *m_SelectContactsViewController; // @synthesize m_SelectContactsViewController;
@property(nonatomic) unsigned long long m_commonSearchScene; // @synthesize m_commonSearchScene;
@property(nonatomic) _Bool m_isCreateWXTalk; // @synthesize m_isCreateWXTalk;
@property(readonly, nonatomic) MultiSelectContactsViewController *m_MultiSelectController; // @synthesize m_MultiSelectController;
@property(nonatomic) __weak id <CreateChatLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnCreateRoom:(id)arg1;
- (_Bool)onSelectRecommendGroupContact:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)dealloc;
- (void)onMultiSelectWithMsgHistory:(id)arg1 uploadTaskId:(id)arg2;
- (void)createChatRoonWithMemberDic:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (id)contactForContext;
- (void)onSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)setShowRadarCreateRoom;
- (void)setKeepCurViewAfterSelect:(_Bool)arg1;
- (void)initSelectContactsViewController;
- (void)initMultiSelectController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

