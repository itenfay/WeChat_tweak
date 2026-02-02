//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactTagNoTagBatchSetTagViewController, ContactTagNoTagSelectContactsViewController, NSMutableString, NSString;
@protocol ContactTagNoTagContactsDetailViewControllerDelegate;

@interface ContactTagNoTagContactsDetailViewController
{
    NSMutableString *m_batchAddLabelFriOpStr;
    ContactTagNoTagSelectContactsViewController *m_noTagContactsSelectContactsVC;
    ContactTagNoTagBatchSetTagViewController *m_noTagContactsBatchSetTagVC;
    id <ContactTagNoTagContactsDetailViewControllerDelegate> _m_contactTagNoTagDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ContactTagNoTagContactsDetailViewControllerDelegate> m_contactTagNoTagDelegate; // @synthesize m_contactTagNoTagDelegate=_m_contactTagNoTagDelegate;
- (void)reportNoTagContactSetTag;
- (void)onNoTagBatchSetTagSuccess;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)doBatchSettings;
- (void)onClickBackBarButton;
- (void)initBarButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getEmptyViewStr;
- (void)updateNavigationTitleAndBarButton;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initViewControllerWithContactTagData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

