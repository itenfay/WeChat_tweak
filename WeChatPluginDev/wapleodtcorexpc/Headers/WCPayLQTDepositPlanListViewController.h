//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSArray, NSString, UIButton, UIImageView, UILabel, UIView, WCPayCss;
@protocol WCPayLQTDepositPlanListViewControllerDelegate;

@interface WCPayLQTDepositPlanListViewController
{
    MMTableView *m_tableView;
    id <WCPayLQTDepositPlanListViewControllerDelegate> m_delegate;
    NSArray *_planList;
    UIView *_navBackground;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIView *_contentView;
    UIButton *_confirmButton;
    WCPayCss *_css;
    UIView *_containerView;
    UIView *_headerView;
    UIImageView *_emptyIcon;
    UILabel *_emptyLabel;
    UIView *_emptyFooterView;
    UIView *_addView;
    UIImageView *_addIcon;
    UILabel *_addLabel;
}

- (void).cxx_destruct;
@property(retain) UILabel *addLabel; // @synthesize addLabel=_addLabel;
@property(retain) UIImageView *addIcon; // @synthesize addIcon=_addIcon;
@property(retain) UIView *addView; // @synthesize addView=_addView;
@property(retain) UIView *emptyFooterView; // @synthesize emptyFooterView=_emptyFooterView;
@property(retain) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain) UIImageView *emptyIcon; // @synthesize emptyIcon=_emptyIcon;
@property(retain) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain) WCPayCss *css; // @synthesize css=_css;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *navBackground; // @synthesize navBackground=_navBackground;
@property(retain, nonatomic) NSArray *planList; // @synthesize planList=_planList;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)makeAddNewPlanCell:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)makePlanItemCellView:(id)arg1 cell:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)bannerBtnClick;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateTableView;
- (void)onNewDepositPlanBtnClick:(id)arg1;
- (void)addNavigationBarBackground:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)onBack;
- (void)initNavigationBar;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateAddLabel;
- (void)updateAddIcon;
- (void)onClickAddView;
- (void)updateAddView;
- (void)updateEmptyFooterView;
- (void)updateEmptyLabel;
- (void)updateEmptyIcon;
- (void)updateHeaderView;
- (void)updateContainerView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

