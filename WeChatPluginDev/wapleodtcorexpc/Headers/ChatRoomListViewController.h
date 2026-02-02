//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface ChatRoomListViewController
{
}

- (void)registerYReportSdk;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsDidPresentSearch:(id)arg1;
- (_Bool)shouldHideTabbarBeforeSearchBarBecomeActive;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)getEditingStyleForIndexPath:(id)arg1;
- (void)JumpToChatRoom:(id)arg1;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (_Bool)shouldInteractivePop;
- (void)didDeleteContact:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)deleteContact:(id)arg1;
- (void)showContactInfoView:(id)arg1;
- (void)viewDidLayoutSubviews;
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

