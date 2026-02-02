//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CreateChatLogic, MMUIViewController, NSString;
@protocol FTSExternalRouterEntry, contactInfoDelegate;

@interface FTSExternalRouter : NSObject
{
    CreateChatLogic *m_createChatLogic;
    id <contactInfoDelegate> _contactInfoDelegate;
    id <FTSExternalRouterEntry> _entry;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FTSExternalRouterEntry> entry; // @synthesize entry=_entry;
@property(nonatomic) __weak id <contactInfoDelegate> contactInfoDelegate; // @synthesize contactInfoDelegate=_contactInfoDelegate;
- (void)onDidFinishedMultiDeleteContacts;
@property(readonly, nonatomic) MMUIViewController *viewController;
- (void)onCreateChatContactReturn:(id)arg1;
- (_Bool)isOpenPluginContactInfoView:(id)arg1;
- (void)openPluginContactInfoView:(id)arg1;
- (void)openEnterpriseWebSubBrand:(id)arg1;
- (void)openEnterpriseConvergeSessionListController:(id)arg1;
- (void)openBrandContact:(id)arg1;
- (void)selectMsgItems:(id)arg1 withSessionUsername:(id)arg2 searchTaskKey:(id)arg3;
- (void)selectMsgItem:(id)arg1 searchTaskKey:(id)arg2;
- (void)openMultiDeleteContactsPage;
- (void)openMessageContentView:(id)arg1;
- (void)onCreateChatRoom:(id)arg1;
- (void)openKFContact:(id)arg1;
- (void)openFinderWithContact:(id)arg1;
- (void)openWeAppWithContact:(id)arg1;
- (void)openContactPickerViewWith:(id)arg1;
- (id)initWithEntry:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

