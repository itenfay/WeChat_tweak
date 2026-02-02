//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, MultiSelectContactsViewController, NSArray, NSString, SessionSelectController;

@protocol SessionSelectControllerDelegate <NSObject>

@optional
- (NSString *)sectionTitleForCurrentSessionView;
- (void)contactInBizChatDidSelect:(CContact *)arg1;
- (CContact *)contactInBizChatSessionAtRow:(unsigned long long)arg1;
- (long long)numberOfRowInBizChatSession;
- (NSString *)sectionTitleForBizChatSession;
- (void)onSessionSelectControllerPageSheetWillClose:(SessionSelectController *)arg1;
- (_Bool)sessionSelectControllerHideSelectFromContactList:(SessionSelectController *)arg1;
- (_Bool)onShouldFilterContact:(CContact *)arg1;
- (double)heightForSessionSelectControllerChildPageSheet:(SessionSelectController *)arg1 defaultHeight:(double)arg2;
- (NSString *)sessionSelectController:(SessionSelectController *)arg1 alertMessageForExceedingMaxSelectionCount:(unsigned long long)arg2;
- (void)onSessionSelectController:(SessionSelectController *)arg1 prepareMultiSelectContactsViewController:(MultiSelectContactsViewController *)arg2;
- (void)onSessionSelectControllerDidPresent:(SessionSelectController *)arg1;
- (_Bool)onShouldSelectContact:(CContact *)arg1;
- (void)OnSelectSessionCancel:(SessionSelectController *)arg1;
- (void)OnSelectForwardToEnterpriseChat:(SessionSelectController *)arg1 appType:(long long)arg2;
- (void)OnSelectSessions:(NSArray *)arg1 SessionSelectController:(SessionSelectController *)arg2;
- (void)OnSelectSession:(CContact *)arg1 SessionSelectController:(SessionSelectController *)arg2;
@end

