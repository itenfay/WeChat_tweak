//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, ContactRelatedGroupLogic, NSString;

@interface ContactRelatedChatRoomListViewController
{
    NSString *_customTitle;
    ContactRelatedGroupLogic *_relatedGroupLogic;
    CContact *_contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) ContactRelatedGroupLogic *relatedGroupLogic; // @synthesize relatedGroupLogic=_relatedGroupLogic;
@property(retain, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
- (void)onCRGDataUpdated;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)getEditingStyleForIndexPath:(id)arg1;
- (void)JumpToChatRoom:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)cellHeight;
- (void)showContactInfoView:(id)arg1;
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

