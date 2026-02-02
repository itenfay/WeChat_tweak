//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface EnterpriseBrandContactMgr
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onRemoveContactFromAddressBook:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)callEnterpriseBrandSyncedExtension:(id)arg1 extParams:(id)arg2;
- (void)callEnterpriseBrandContactDeletedExtension:(id)arg1;
- (void)callEnterpriseBrandAttrChangedExtension:(id)arg1;
- (void)callEnterpriseBrandContactModifiedExtension:(id)arg1;
- (void)handleSwitchBrandContact:(id)arg1;
- (void)switchBrandContact:(id)arg1 enable:(_Bool)arg2;
- (void)forceUpdateEnterpriseBrandContact:(id)arg1;
- (void)updateEnterpriseBrandContactOfMainBrand:(id)arg1;
- (id)sortMainAndChatBrandContacts:(id)arg1;
- (id)getMainAndChatBrandListForConnectMsgType:(unsigned long long)arg1;
- (_Bool)hasMainBrandForConnectMsgType:(unsigned long long)arg1;
- (id)getSubBrandContacts:(id)arg1 ForConnectMsgType:(unsigned long long)arg2;
- (_Bool)hasChatExtendSubBrand:(id)arg1;
- (id)getEnterpriseChatExtendContacts:(id)arg1;
- (id)getEnterpriseChatContact:(id)arg1;
- (id)getDisabledSubBrandContactList:(id)arg1;
- (id)getEnabledSubBrandContactList:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

