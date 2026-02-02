//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUIView, NSData, NSMutableArray, NSString, UIButton, UILabel, UIScrollView, UIView, UrlLabel, WCCardAvailableSeed, WCCardChooseEmptyView, WCTimeLineFooterView;
@protocol WCCardChooseViewControllerDelegate;

@interface WCCardChooseViewController
{
    WCCardAvailableSeed *_availableSeed;
    _Bool _isLoading;
    NSMutableArray *_cardList;
    NSMutableArray *_shareCardList;
    MMTableView *_tableView;
    WCCardChooseEmptyView *_emptyView;
    UIScrollView *_loadingView;
    UIButton *_confirmBtn;
    UIView *_bottomContentView;
    UILabel *_bottomTipsLabel;
    UrlLabel *_bottomUrlLabel;
    struct map<long, WCCardChooseViewSectionType, std::less<long>, std::allocator<std::pair<const long, WCCardChooseViewSectionType>>> _sectionIndexToType;
    WCTimeLineFooterView *_tableFooterView;
    MMUIView *_tableDefaultFooterView;
    NSData *_controlBuff;
    NSMutableArray *_chooseInfoLists;
    id <WCCardChooseViewControllerDelegate> _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCardChooseViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3;
- (void)showEmptyView;
- (void)showLoadingView;
- (void)showTableView;
- (void)onMarkShareCardError;
- (void)onGetAvailableCardInfo:(id)arg1 isEnd:(_Bool)arg2 buff:(id)arg3 ErrCode:(int)arg4;
- (void)onConfirmBtnPress:(id)arg1;
- (void)onLeftButtonOP;
- (void)loadCellSubView:(id)arg1 chooseInfo:(id)arg2;
- (_Bool)bIsSupportMultiSelect;
- (void)onWCCardChooseInfo:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initEmptyView;
- (void)initLoadingView;
- (void)initTableView;
- (void)initData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCardAvailableSeed:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

