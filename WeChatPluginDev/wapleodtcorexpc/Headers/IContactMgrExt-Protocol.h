//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSString;

@protocol IContactMgrExt

@optional
- (void)onBrandContactHeadImageURLChange:(NSString *)arg1;
- (void)onFailedToGetContactsFromSvr;
- (void)OnChangeNotifyStatus:(NSString *)arg1 withStatus:(_Bool)arg2;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)onDeleteContactIsShouldKeep:(CContact *)arg1;
- (void)onRemoveContactFromAddressBook:(CContact *)arg1;
- (void)onDeleteContact:(CContact *)arg1;
- (void)onModifySelfContact:(CContact *)arg1;
- (void)onModifyContact:(CContact *)arg1;
- (void)onNewBrandContact:(CContact *)arg1;
- (void)onNewContact:(CContact *)arg1;
- (void)onModifyContactHeadImage:(NSString *)arg1;
@end

