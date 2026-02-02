//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, CMessageWrap, ContactsDataLogic, ForwardMessageLogicController, MMLimitedModeGuardianLogic, NSString, UINavigationController;

@interface MMLimitedModeGuardianSelectContactViewController
{
    MMLimitedModeGuardianLogic *m_guardianLogic;
    ForwardMessageLogicController *m_forwardMsgLogic;
    CContact *m_selectedContact;
    CMessageWrap *m_oMessageWrap;
    NSString *_ticket;
    UINavigationController *_m_preNavController;
    unsigned long long _bindScene;
    ContactsDataLogic *_m_contactsDataLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ContactsDataLogic *m_contactsDataLogic; // @synthesize m_contactsDataLogic=_m_contactsDataLogic;
@property(nonatomic) unsigned long long bindScene; // @synthesize bindScene=_bindScene;
@property(retain, nonatomic) UINavigationController *m_preNavController; // @synthesize m_preNavController=_m_preNavController;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
- (void)onGetTeenagerModePreBindGuardianInfo:(id)arg1 success:(_Bool)arg2 errMsg:(id)arg3;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)pushToResultViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onSelectedContact:(id)arg1;
- (id)getReloadContactDataList;
- (void)forMessage:(id)arg1 ticket:(id)arg2;
- (void)didClickLeftCloseBarButton;
- (id)getContactsDataLogic;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

