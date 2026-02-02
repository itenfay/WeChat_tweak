//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMScrollView, MMTableView, NSArray, NSString;
@protocol EnterpriseBrandContactSelectViewControllerDelegate;

@interface EnterpriseBrandContactSelectViewController
{
    CContact *_mainBrandContact;
    NSArray *_arySubContact;
    CContact *_selectedContact;
    MMTableView *_tableView;
    MMScrollView *_emptyView;
    unsigned int _scene;
    id <EnterpriseBrandContactSelectViewControllerDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EnterpriseBrandContactSelectViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)cancelSelect:(id)arg1;
- (void)confirmToSend;
- (void)openSubBrandInfo:(id)arg1;
- (void)selectContact:(id)arg1;
- (void)onEnterpriseBrandContactDeleted:(id)arg1;
- (void)onEnterpriseBrandContactChanged:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)updateEmptyView;
- (void)initEmptyView;
- (void)initTableView;
- (void)initView;
- (void)initData;
- (id)initWithMainContact:(id)arg1 scene:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

