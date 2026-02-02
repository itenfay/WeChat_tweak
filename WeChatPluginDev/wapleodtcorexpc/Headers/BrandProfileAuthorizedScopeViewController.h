//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMTableView, MMUILabel, MMWebImageView, NSMutableArray, NSString, UIButton, UIView;

@interface BrandProfileAuthorizedScopeViewController
{
    _Bool _isManaging;
    UIView *_tableHeaderView;
    MMWebImageView *_appIconImageView;
    MMUILabel *_appNameLabel;
    MMUILabel *_titleLabel;
    MMTableView *_tableView;
    UIView *_tableFooterView;
    UIButton *_manageButton;
    UIView *_footerSeperatorLine;
    CContact *_brandContact;
    NSString *_appId;
    NSMutableArray *_arrTableViewModels;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrTableViewModels; // @synthesize arrTableViewModels=_arrTableViewModels;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) CContact *brandContact; // @synthesize brandContact=_brandContact;
@property(nonatomic) _Bool isManaging; // @synthesize isManaging=_isManaging;
@property(retain, nonatomic) UIView *footerSeperatorLine; // @synthesize footerSeperatorLine=_footerSeperatorLine;
@property(retain, nonatomic) UIButton *manageButton; // @synthesize manageButton=_manageButton;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(retain, nonatomic) MMWebImageView *appIconImageView; // @synthesize appIconImageView=_appIconImageView;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetBizAuthInfoResponse:(id)arg1;
- (void)handleModBizUseUserInfoResponse:(id)arg1;
- (void)requestAuthorizedInfo;
- (void)openConfirmActionSheetWithViewModel:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initDataWithWrap:(id)arg1;
- (void)notifyToDeleteWithViewModel:(id)arg1;
- (void)onEndManage;
- (void)onStartManage;
- (_Bool)isContextMenuEnabled:(id)arg1;
- (void)onCellDeleteButtonClicked:(id)arg1;
- (void)onManageButtonClicked;
- (id)navigationBarBackgroundColor;
- (double)tableviewContentHeight;
- (void)layoutTableFooter;
- (void)layoutTableHeader;
- (void)initTableFooter;
- (void)initTableHeader;
- (void)setupTableView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithViewModels:(id)arg1 contact:(id)arg2 appId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

