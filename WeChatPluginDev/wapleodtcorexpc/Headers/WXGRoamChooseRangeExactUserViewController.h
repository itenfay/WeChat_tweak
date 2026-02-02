//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLoadingView, MMUINavigationBar, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, NewContactsSearchPanelView, SearchHelpDataItem, UIButton, UIImageView, UILabel, UINavigationItem, UITableView, UIView, WCFilterView;
@protocol OS_dispatch_queue, WXGRoamChooseRangeExactUserViewControllerDelegate;

@interface WXGRoamChooseRangeExactUserViewController
{
    _Bool _isInSearchState;
    int _pageId;
    id <WXGRoamChooseRangeExactUserViewControllerDelegate> _delegate;
    NSArray *_selectedNames;
    long long _enterScene;
    UITableView *_sheetView;
    UIView *_disconnectView;
    UINavigationItem *_customNavigationItem;
    MMUINavigationBar *_customNavigationBar;
    NSArray *_sessionNameArr;
    NSMutableArray *_contactArr;
    NSMutableArray *_filteredContactArr;
    NSMutableDictionary *_chatInfosDic;
    NSMutableDictionary *_matchTipsDic;
    SearchHelpDataItem *_m_searchHelpDataItem;
    NSMutableSet *_selectedSet;
    NewContactsSearchPanelView *_m_panelView;
    unsigned long long _totalSize;
    UIImageView *_footerImageView;
    UIView *_seperatorLine;
    UIButton *_selectAllButton;
    UIButton *_nextStepButton;
    UILabel *_sizeLabel;
    WCFilterView *_filterView;
    MMLoadingView *_loadingView;
    NSObject<OS_dispatch_queue> *_searchQueue;
}

- (void).cxx_destruct;
@property(nonatomic) int pageId; // @synthesize pageId=_pageId;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *searchQueue; // @synthesize searchQueue=_searchQueue;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFilterView *filterView; // @synthesize filterView=_filterView;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UIButton *nextStepButton; // @synthesize nextStepButton=_nextStepButton;
@property(retain, nonatomic) UIButton *selectAllButton; // @synthesize selectAllButton=_selectAllButton;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) UIImageView *footerImageView; // @synthesize footerImageView=_footerImageView;
@property(nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property(nonatomic) _Bool isInSearchState; // @synthesize isInSearchState=_isInSearchState;
@property(retain, nonatomic) NewContactsSearchPanelView *m_panelView; // @synthesize m_panelView=_m_panelView;
@property(retain, nonatomic) NSMutableSet *selectedSet; // @synthesize selectedSet=_selectedSet;
@property(retain, nonatomic) SearchHelpDataItem *m_searchHelpDataItem; // @synthesize m_searchHelpDataItem=_m_searchHelpDataItem;
@property(retain, nonatomic) NSMutableDictionary *matchTipsDic; // @synthesize matchTipsDic=_matchTipsDic;
@property(retain, nonatomic) NSMutableDictionary *chatInfosDic; // @synthesize chatInfosDic=_chatInfosDic;
@property(retain, nonatomic) NSMutableArray *filteredContactArr; // @synthesize filteredContactArr=_filteredContactArr;
@property(retain, nonatomic) NSMutableArray *contactArr; // @synthesize contactArr=_contactArr;
@property(retain, nonatomic) NSArray *sessionNameArr; // @synthesize sessionNameArr=_sessionNameArr;
@property(retain, nonatomic) MMUINavigationBar *customNavigationBar; // @synthesize customNavigationBar=_customNavigationBar;
@property(retain, nonatomic) UINavigationItem *customNavigationItem; // @synthesize customNavigationItem=_customNavigationItem;
@property(retain, nonatomic) UIView *disconnectView; // @synthesize disconnectView=_disconnectView;
@property(retain, nonatomic) UITableView *sheetView; // @synthesize sheetView=_sheetView;
@property(nonatomic) long long enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) NSArray *selectedNames; // @synthesize selectedNames=_selectedNames;
@property(nonatomic) __weak id <WXGRoamChooseRangeExactUserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onRoamBackupPackageServiceNotifyCode:(unsigned long long)arg1 notifyCode:(unsigned long long)arg2;
- (void)onRoamBackupPackageServiceStartGetBackedUpChatInfos;
- (void)onRoamBackupPackageServiceDeleteBackupRet:(int)arg1;
- (void)onRoamBackupPackageServiceGetBackedUpChatInfos:(id)arg1;
- (void)onRoamBackupPackageServiceChooseRangeImport:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)clearAllFiltered;
- (_Bool)isSelected:(id)arg1;
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (_Bool)searchTextFieldShouldBeginEditing;
- (void)searchTextFieldDidBeginEditing;
- (void)didDeleteLastWithKey:(id)arg1;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(id)arg2;
- (void)onChatLogCalculateBackupChatLogFilter:(id)arg1 totalSize:(unsigned long long)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)getSectionType:(long long)arg1;
- (id)getCurrentViewController;
- (void)onItemClick:(unsigned int)arg1 atSection:(unsigned int)arg2;
- (id)getFilterSection;
- (void)reinitSessionDataWith:(function_4cdf695e)arg1 needReverse:(_Bool)arg2;
- (void)reinitSessionData;
- (void)updateView;
- (void)updateNavAndNextStep;
- (void)onCreate;
- (void)onCancel;
- (double)getPanelViewWidth;
- (void)updatePanelView:(id)arg1 animated:(_Bool)arg2;
- (void)onRetry;
- (void)onSelecteAll;
- (id)getSelectButtonTitle;
- (id)getDataSizeShowString;
- (void)updateFooterPannelView;
- (void)initFooterPannelView;
- (void)updateViewHidden;
- (void)showDisconnectView;
- (void)initFilterView;
- (void)initPanelView;
- (void)initSheetView;
- (void)initLoadingView;
- (void)setupNavBar;
- (void)initContactData;
- (void)initDataByChatInfoDic;
- (void)initData;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

