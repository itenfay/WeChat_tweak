//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUIActivityIndicatorView, MMUILabel, NSDate, NSString, StorageFootPanelView, WCFilterView;

@interface WCChatLogManageViewController
{
    struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> m_sessionItemArray;
    struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> m_selectedSessionArray;
    unsigned int _eFilterStartTime;
    unsigned int _eFilterEndTime;
    WCFilterView *_filterView;
    MMTableView *_mainTableView;
    MMUILabel *_emptyTipLabel;
    MMUILabel *_middleLoadLabel;
    MMUIActivityIndicatorView *_loadingIndicatorView;
    StorageFootPanelView *_footPanelView;
    long long _currentTime;
    unsigned long long _eOrderType;
    NSDate *_minSelectDate;
    NSDate *_maxSelectDate;
    NSDate *_selectBeginDate;
    NSDate *_selectEndDate;
    unsigned long long _lastSelectTimeType;
    unsigned long long _curSelectType;
}

+ (id)getDateWithoutHMS:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long curSelectType; // @synthesize curSelectType=_curSelectType;
@property(nonatomic) unsigned long long lastSelectTimeType; // @synthesize lastSelectTimeType=_lastSelectTimeType;
@property(retain, nonatomic) NSDate *selectEndDate; // @synthesize selectEndDate=_selectEndDate;
@property(retain, nonatomic) NSDate *selectBeginDate; // @synthesize selectBeginDate=_selectBeginDate;
@property(retain, nonatomic) NSDate *maxSelectDate; // @synthesize maxSelectDate=_maxSelectDate;
@property(retain, nonatomic) NSDate *minSelectDate; // @synthesize minSelectDate=_minSelectDate;
@property(nonatomic) unsigned int eFilterEndTime; // @synthesize eFilterEndTime=_eFilterEndTime;
@property(nonatomic) unsigned int eFilterStartTime; // @synthesize eFilterStartTime=_eFilterStartTime;
@property(nonatomic) unsigned long long eOrderType; // @synthesize eOrderType=_eOrderType;
@property(nonatomic) long long currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) StorageFootPanelView *footPanelView; // @synthesize footPanelView=_footPanelView;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(retain, nonatomic) MMUILabel *middleLoadLabel; // @synthesize middleLoadLabel=_middleLoadLabel;
@property(retain, nonatomic) MMUILabel *emptyTipLabel; // @synthesize emptyTipLabel=_emptyTipLabel;
@property(retain, nonatomic) MMTableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(retain, nonatomic) WCFilterView *filterView; // @synthesize filterView=_filterView;
- (void)willMoveToParentViewController:(id)arg1;
- (void)onChatLogDataReloadItem;
- (void)onChatLogDataLoadFinished;
- (void)reinitData;
- (void)p_fillingData;
- (void)initData;
- (_Bool)isDataEmpty;
- (unsigned long long)getSeletedDataSize;
- (unsigned long long)getSelectedOnlyResourceSize;
- (void)onReturn;
- (void)updateView;
- (void)makeEmptyTipLabel;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)showNavigationBarSepLine;
- (id)navigationBarBackgroundColor;
- (void)deleteSelectedSessionAllIncludeMsg;
- (void)deleteResourceAndKeepMsg;
- (_Bool)isFootPanelRelateDataSelectEmpty;
- (_Bool)isFootPanelRelateDataLoading;
- (void)onFootPanelDeleteButtonClick;
- (void)onFootPanelSelectButtonClick;
- (id)getFootPanelSizeText;
- (id)getFootPanelLabelText;
- (id)getFootPanelDeletebuttonTitle;
- (id)getFootPanelSelectButtonTitle;
- (void)makeFootPanelView;
- (id)getCurrentViewController;
- (void)onSelectionPanelDismissed:(id)arg1;
- (void)onItemClick:(unsigned int)arg1 atSection:(unsigned int)arg2;
- (id)p_getFilterSection;
- (id)p_getTimeSection;
- (void)makeFilterView;
- (_Bool)onMsgPageSheetShowHideMoreOption;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onDeleteInfoCellShowDetail:(id)arg1;
- (void)onDeleteinfoCellShowSourceImg:(id)arg1;
- (unsigned long long)p_getCurrentSesionItemResSize:(const void *)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeTableView;
- (struct CGRect)getTableViewFrame;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

