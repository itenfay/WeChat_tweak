//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAAppAuthInfoData, WAAppAuthorizationAccountLogic, WAContact;

@interface WAAppAuthorizationAccountViewController
{
    WAContact *_contact;
    WAAppAuthInfoData *_authInfo;
    CDUnknownBlockType _updateAction;
    WAAppAuthorizationAccountLogic *_logic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAAppAuthorizationAccountLogic *logic; // @synthesize logic=_logic;
@property(copy, nonatomic) CDUnknownBlockType updateAction; // @synthesize updateAction=_updateAction;
@property(retain, nonatomic) WAAppAuthInfoData *authInfo; // @synthesize authInfo=_authInfo;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
- (void)onModAvatarSuccess:(id)arg1;
- (void)onAddAvatarSuccess:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)deleteAcctount:(id)arg1 adIndex:(long long)arg2;
- (void)editAccount:(id)arg1;
- (void)addNewAccount;
- (void)switchAuthState:(unsigned int)arg1 accountId:(unsigned int)arg2 completeAction:(CDUnknownBlockType)arg3;
- (void)switchAuthState:(unsigned int)arg1 completeAction:(CDUnknownBlockType)arg2;
- (void)onReturn;
- (void)reloadAccountVCUI;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;
- (id)initWithContact:(id)arg1 authInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

