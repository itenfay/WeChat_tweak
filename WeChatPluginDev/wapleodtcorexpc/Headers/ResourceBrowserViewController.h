//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUIActivityIndicatorView, NSDate, NSMutableArray, NSString, UIButton, UILabel, UIView, WCFilterView;

@interface ResourceBrowserViewController
{
    UIView *_footerView;
    UIButton *_selectAllButton;
    UIButton *_deleteButton;
    UILabel *_sizeLabel;
    MMUIActivityIndicatorView *_loadingIndicatorView;
    _Bool _hasLookDetailed;
    NSMutableArray *m_arrSectionTitle;
    struct map<NSString *, std::vector<std::shared_ptr<ChatLogSessionItem>>, CompareNSString, std::allocator<std::pair<NSString *const, std::vector<std::shared_ptr<ChatLogSessionItem>>>>> m_dicMsgsByTitle;
    struct map<std::shared_ptr<ChatLogSessionItem>, long, std::less<std::shared_ptr<ChatLogSessionItem>>, std::allocator<std::pair<const std::shared_ptr<ChatLogSessionItem>, long>>> m_dicFindItem;
    unsigned int _curMaxDataCount;
    struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrSelectedData;
    struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrSessionTypeItem;
    struct map<NSString *, std::vector<std::shared_ptr<ChatLogSessionItem>>, std::less<NSString *>, std::allocator<std::pair<NSString *const, std::vector<std::shared_ptr<ChatLogSessionItem>>>>> m_dicSessionByTitle;
    unsigned int _eFilterTime;
    unsigned long long _maxChatLogSize;
    unsigned long long _maxChatLogDBSize;
    long long _baseNowTime;
    unsigned long long _eFilterType;
    unsigned long long _eOrderType;
    MMTableView *_mainTableView;
    UILabel *_emptyTipLabel;
    WCFilterView *_filterView;
    UIView *_seperateLine;
    double _startLoadCleanData;
    NSDate *_minDate;
    NSDate *_maxDate;
    NSDate *_selectBeginDate;
    NSDate *_selectEndDate;
    unsigned long long _lastSelectTimeIndex;
    unsigned long long _lastHeaderIndex;
}

+ (id)getDateWithoutHMS:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastHeaderIndex; // @synthesize lastHeaderIndex=_lastHeaderIndex;
@property(nonatomic) unsigned long long lastSelectTimeIndex; // @synthesize lastSelectTimeIndex=_lastSelectTimeIndex;
@property(retain, nonatomic) NSDate *selectEndDate; // @synthesize selectEndDate=_selectEndDate;
@property(retain, nonatomic) NSDate *selectBeginDate; // @synthesize selectBeginDate=_selectBeginDate;
@property(retain, nonatomic) NSDate *maxDate; // @synthesize maxDate=_maxDate;
@property(retain, nonatomic) NSDate *minDate; // @synthesize minDate=_minDate;
@property(nonatomic) double startLoadCleanData; // @synthesize startLoadCleanData=_startLoadCleanData;
@property(retain, nonatomic) UIView *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(retain, nonatomic) WCFilterView *filterView; // @synthesize filterView=_filterView;
@property(retain, nonatomic) UILabel *emptyTipLabel; // @synthesize emptyTipLabel=_emptyTipLabel;
@property(retain, nonatomic) MMTableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(nonatomic) unsigned int eFilterTime; // @synthesize eFilterTime=_eFilterTime;
@property(nonatomic) unsigned long long eOrderType; // @synthesize eOrderType=_eOrderType;
@property(nonatomic) unsigned long long eFilterType; // @synthesize eFilterType=_eFilterType;
@property(nonatomic) long long baseNowTime; // @synthesize baseNowTime=_baseNowTime;
@property(nonatomic) unsigned long long maxChatLogDBSize; // @synthesize maxChatLogDBSize=_maxChatLogDBSize;
@property(nonatomic) unsigned long long maxChatLogSize; // @synthesize maxChatLogSize=_maxChatLogSize;
- (id)getCurrentViewController;
- (void)onSelectionPanelDismissed:(id)arg1;
- (void)onItemClick:(unsigned int)arg1 atSection:(unsigned int)arg2;
- (id)p_getFilterSection;
- (id)p_getTimeSection;
- (void)onChatLogDataReloadItem;
- (void)onChatLogDataLoadFinished;
- (void)reportNewTopSession;
- (void)reportSessionData;
- (id)genTimeStringForSectionHeader:(unsigned int)arg1;
- (void)onSelectedDataChange;
- (unsigned long long)getDataItemsDataSize:(const void *)arg1;
- (unsigned long long)getSessionsItemAllDataSize:(const void *)arg1;
- (unsigned long long)getSessionsItemDataSize:(const void *)arg1;
- (id)userNameDescriptionFor:(const void *)arg1;
- (id)getSelectButtonTitle;
- (void)onLookDetail:(id)arg1;
- (void)onAlertNothingDetail:(id)arg1;
- (void)deleteSelectedSessionAllData;
- (void)deleteSelectedSessionKeepMsg;
- (void)onDeleteSelectedData:(id)arg1;
- (void)onSelecteAll;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)p_filterSessionItem;
- (void)reInitData;
- (void)initData;
- (_Bool)isDataEmpty;
- (void)updateFooterPannelView;
- (void)updateMainView;
- (void)makeFooterPanelView;
- (void)makeEmptyTipLabel;
- (void)makeTableView;
- (void)makeFilterView;
- (void)initView;
- (struct CGRect)getTableViewFrame;
- (void)didAppear;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)onReturn;
- (_Bool)isForbidPageSheet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

