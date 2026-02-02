//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PhoneAuthManagePhoneLogic, RichTextView, UILabel, UITableView, UIView, WAReportPhoneAuthActionItem;
@protocol PhoneAuthManagePhoneViewControllerDataSource, PhoneAuthManagePhoneviewControllerDelegate;

@interface PhoneAuthManagePhoneViewController
{
    _Bool _editMode;
    id <PhoneAuthManagePhoneViewControllerDataSource> _dataSource;
    id <PhoneAuthManagePhoneviewControllerDelegate> _delegate;
    WAReportPhoneAuthActionItem *_actionItem;
    UITableView *_tableView;
    UIView *_tableFooterView;
    UILabel *_phoneCountLimitationLabel;
    UIView *_footerView;
    RichTextView *_compliantTextView;
    NSString *_compliantString;
    PhoneAuthManagePhoneLogic *_logic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PhoneAuthManagePhoneLogic *logic; // @synthesize logic=_logic;
@property(nonatomic) _Bool editMode; // @synthesize editMode=_editMode;
@property(copy, nonatomic) NSString *compliantString; // @synthesize compliantString=_compliantString;
@property(retain, nonatomic) RichTextView *compliantTextView; // @synthesize compliantTextView=_compliantTextView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UILabel *phoneCountLimitationLabel; // @synthesize phoneCountLimitationLabel=_phoneCountLimitationLabel;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WAReportPhoneAuthActionItem *actionItem; // @synthesize actionItem=_actionItem;
@property(nonatomic) __weak id <PhoneAuthManagePhoneviewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <PhoneAuthManagePhoneViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)didAddNewPhoneInfo:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onEdit;
- (void)onReturn;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (_Bool)isLastPhoneIndexPath:(id)arg1;
- (_Bool)isWxPhoneIndexPath:(id)arg1;
- (id)getPhoneInfoForIndexPath:(id)arg1;
- (id)getCurrentUrlString;
- (id)getCurrentAppid;
- (id)getComplaintUrl;
- (id)getComplaintString;
- (_Bool)isAddNewPhoneEntryIndexPath:(id)arg1;
- (_Bool)shouldShowAddNewPhoneEntry;
- (_Bool)isReachMaxPhoneCount;
- (id)getDisplayPhoneArray;
- (void)refreshFooterViewHiddenState;
- (void)viewDidLayoutSubviews;
- (void)updateNavigationItems;
- (id)navigationBarBackgroundColor;
- (void)initCustomNavigationBar;
- (id)genTableFooterView;
- (void)initSubViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

