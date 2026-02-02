//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSString, UITextField;
@protocol WCCreateNewGroupViewControllerDelegate;

@interface WCCreateNewGroupViewController
{
    MMTableView *m_tableView;
    UITextField *m_textField;
    NSString *m_title;
    NSString *m_placeHolderText;
    NSString *m_originText;
    NSString *m_hintText;
    id <WCCreateNewGroupViewControllerDelegate> m_delegate;
    NSString *_groupId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *m_hintText; // @synthesize m_hintText;
@property(retain, nonatomic) NSString *m_originText; // @synthesize m_originText;
@property(retain, nonatomic) NSString *m_placeHolderText; // @synthesize m_placeHolderText;
@property(retain, nonatomic) NSString *m_title; // @synthesize m_title;
@property(nonatomic) __weak id <WCCreateNewGroupViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)makeTextCell:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (void)OnDataChange;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)initTableView;
- (void)onCancel;
- (void)onSave;
- (void)setTextFieldFirstResponse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

