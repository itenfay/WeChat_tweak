//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactTagData, ContactsAuthorityManageModifyContactLogic, NSString;
@protocol ContactsAuthorityManageAddContactFromContactsViewControllerDelegate;

@interface ContactsAuthorityManageAddContactFromContactsViewController
{
    ContactsAuthorityManageModifyContactLogic *m_newContactFunctionTagAddContactLogic;
    ContactTagData *_m_contactTagData;
    id <ContactsAuthorityManageAddContactFromContactsViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ContactsAuthorityManageAddContactFromContactsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ContactTagData *m_contactTagData; // @synthesize m_contactTagData=_m_contactTagData;
- (void)reloadAuthorityDetailAddContactWithDicMultiSelect:(id)arg1 andDicExistContact:(id)arg2;
- (void)onNewContactAuthorityAddContactSuccess:(id)arg1;
- (id)getViewController;
- (void)onDone:(id)arg1;
- (void)onCancel:(id)arg1;
- (_Bool)isContactExisted:(id)arg1;
- (void)initData;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

