//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPickLocationViewController, MMUIButton, NSMutableSet, NSString, UIButton, UIImageView, UILabel, UITableView, UIView, WCFinderAddPOIViewModel, WCFinderArrowTipsView, WCFinderRefreshTableFooterView;
@protocol WCFinderAddPOIViewControllerDelegate;

@interface WCFinderAddPOIViewController
{
    id <WCFinderAddPOIViewControllerDelegate> _delegate;
    NSString *_finderUsername;
    WCFinderAddPOIViewModel *_viewModel;
    NSMutableSet *_selectedRows;
    UIView *_container;
    UIImageView *_iconImageView;
    UILabel *_placeHolderLabel;
    UILabel *_relatedLabel;
    MMUIButton *_infoImageView;
    UITableView *_tableView;
    WCFinderRefreshTableFooterView *_footerView;
    UIView *_blankView;
    UIButton *_selectButton;
    UIButton *_doneButton;
    MMPickLocationViewController *_pickLocationViewController;
    WCFinderArrowTipsView *_tipsView;
    UILabel *_stateLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) WCFinderArrowTipsView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) MMPickLocationViewController *pickLocationViewController; // @synthesize pickLocationViewController=_pickLocationViewController;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(retain, nonatomic) UIView *blankView; // @synthesize blankView=_blankView;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMUIButton *infoImageView; // @synthesize infoImageView=_infoImageView;
@property(retain, nonatomic) UILabel *relatedLabel; // @synthesize relatedLabel=_relatedLabel;
@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) NSMutableSet *selectedRows; // @synthesize selectedRows=_selectedRows;
@property(retain, nonatomic) WCFinderAddPOIViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) __weak id <WCFinderAddPOIViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)onRelativePOIListError;
- (void)onRelativePOIListNoMore;
- (void)onRelativePOIListChange;
- (void)onCancelSeletctedLocation;
- (void)onTapAddButton;
- (id)onGetRightBarButton;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)bindSelectedPOI;
- (void)tapDone;
- (void)updateEmptyState;
- (void)updateDoneButton;
- (void)updateSelectAllButton;
- (void)tapSelectAll;
- (void)showPickLocationVC;
- (void)showTipsBubble;
- (void)tapBackButton;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)initViews;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithFinderUsername:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

