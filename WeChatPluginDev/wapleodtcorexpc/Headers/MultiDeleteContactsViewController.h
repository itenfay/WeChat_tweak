//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, ContactBatchModifyLogic, MMTableView, MMUIButton, MMUIView, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol MultiDeleteContactsViewControllerDelegate;

@interface MultiDeleteContactsViewController
{
    unsigned long long _type;
    NSDictionary *_dicSearchMatchTips;
    NSString *_searchText;
    id <MultiDeleteContactsViewControllerDelegate> _delegate;
    NSMutableArray *_arrContacts;
    MMTableView *_tableView;
    MMUIView *_bottomToolView;
    MMUIButton *_deleteButton;
    NSMutableDictionary *_dicSelectedContacts;
    ContactBatchModifyLogic *_contactBatchModifyLogic;
    CContact *_viewInfoContact;
}

+ (void)reportMultiDeleteContactsWithAction:(unsigned long long)arg1 actionInfo:(id)arg2;
+ (void)reportMultiDeleteContactsWithAction:(unsigned long long)arg1 query:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CContact *viewInfoContact; // @synthesize viewInfoContact=_viewInfoContact;
@property(retain, nonatomic) ContactBatchModifyLogic *contactBatchModifyLogic; // @synthesize contactBatchModifyLogic=_contactBatchModifyLogic;
@property(retain, nonatomic) NSMutableDictionary *dicSelectedContacts; // @synthesize dicSelectedContacts=_dicSelectedContacts;
@property(retain, nonatomic) MMUIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) MMUIView *bottomToolView; // @synthesize bottomToolView=_bottomToolView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *arrContacts; // @synthesize arrContacts=_arrContacts;
@property(nonatomic) __weak id <MultiDeleteContactsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) NSDictionary *dicSearchMatchTips; // @synthesize dicSearchMatchTips=_dicSearchMatchTips;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)reportMultiDeleteContactsWithAction:(unsigned long long)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)onClose;
- (void)onDeleteFaildWithErrMsgTitle:(id)arg1 errMsgContent:(id)arg2;
- (void)onDeleteFaildWithErrMsg:(id)arg1;
- (void)OnContactBatchModify:(id)arg1 withRet:(unsigned int)arg2 errorMsg:(id)arg3 isNetWorkError:(_Bool)arg4;
- (void)deleteSelectedContacts;
- (void)onDeleteButtonTapped;
- (void)updateDeleteButtonStatus;
- (void)switchSelectionOfContact:(id)arg1 contact:(id)arg2;
- (void)onRemoveContact;
- (_Bool)onViewContactAccessibilityCustomAction:(id)arg1;
- (void)onViewContactBtn:(id)arg1;
- (void)onViewContact:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)initBottomToolView;
- (void)initTableView;
- (void)initView;
- (void)initData;
- (void)viewDidLoad;
- (id)initWithType:(unsigned long long)arg1 arrContacts:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

