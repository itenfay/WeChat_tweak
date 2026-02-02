//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSArray, NSString, UIButton, UIView, WCColorProxy;
@protocol ContactsSelectionPreviewViewControllerDelegate;

@interface ContactsSelectionPreviewViewController
{
    id <ContactsSelectionPreviewViewControllerDelegate> _delegate;
    WCColorProxy *_colorProxy;
    NSArray *_selectedContacts;
    MMTableView *_tableView;
    UIButton *_completeButton;
    UIButton *_selectAllButton;
    UIView *_bottomBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) UIButton *selectAllButton; // @synthesize selectAllButton=_selectAllButton;
@property(retain, nonatomic) UIButton *completeButton; // @synthesize completeButton=_completeButton;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *selectedContacts; // @synthesize selectedContacts=_selectedContacts;
@property(retain, nonatomic) WCColorProxy *colorProxy; // @synthesize colorProxy=_colorProxy;
@property(nonatomic) __weak id <ContactsSelectionPreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onTapSelectAllButton;
- (void)onDone:(id)arg1;
- (void)updateSelectAllButtonIcon;
- (void)updateWithCompleteBarButtonItem:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)initBottomBar;
- (void)initView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

