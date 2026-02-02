//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCTableViewSecionModel, GCTableViewSource, MMTableView, NSIndexPath, NSMutableArray, NSString, UINavigationController;

@interface GameCenterMsgListBaseTabViewController
{
    _Bool _useAsChildViewController;
    _Bool _isInTab;
    _Bool _hasMoreRead;
    unsigned int _sourceScene;
    unsigned int _showType;
    unsigned int _lastLocalId;
    NSMutableArray *_unreadMsgList;
    NSString *_focusMsgId;
    MMTableView *_tableView;
    NSMutableArray *_readMsgList;
    NSString *_cellReuseIdentifier;
    Class _cellClassType;
    UINavigationController *_startViewController;
    long long _focusUnreadIndex;
    NSIndexPath *_focusUnreadIndexPath;
    NSIndexPath *_highLightIndexPath;
    GCTableViewSource *_tableViewSource;
    GCTableViewSecionModel *_unreadSection;
    GCTableViewSecionModel *_readSection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GCTableViewSecionModel *readSection; // @synthesize readSection=_readSection;
@property(retain, nonatomic) GCTableViewSecionModel *unreadSection; // @synthesize unreadSection=_unreadSection;
@property(retain, nonatomic) GCTableViewSource *tableViewSource; // @synthesize tableViewSource=_tableViewSource;
@property(retain, nonatomic) NSIndexPath *highLightIndexPath; // @synthesize highLightIndexPath=_highLightIndexPath;
@property(retain, nonatomic) NSIndexPath *focusUnreadIndexPath; // @synthesize focusUnreadIndexPath=_focusUnreadIndexPath;
@property(nonatomic) long long focusUnreadIndex; // @synthesize focusUnreadIndex=_focusUnreadIndex;
@property(nonatomic) __weak UINavigationController *startViewController; // @synthesize startViewController=_startViewController;
@property(nonatomic) _Bool hasMoreRead; // @synthesize hasMoreRead=_hasMoreRead;
@property(nonatomic) unsigned int lastLocalId; // @synthesize lastLocalId=_lastLocalId;
@property(retain, nonatomic) Class cellClassType; // @synthesize cellClassType=_cellClassType;
@property(retain, nonatomic) NSString *cellReuseIdentifier; // @synthesize cellReuseIdentifier=_cellReuseIdentifier;
@property(nonatomic) unsigned int showType; // @synthesize showType=_showType;
@property(retain, nonatomic) NSMutableArray *readMsgList; // @synthesize readMsgList=_readMsgList;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isInTab; // @synthesize isInTab=_isInTab;
@property(nonatomic) _Bool useAsChildViewController; // @synthesize useAsChildViewController=_useAsChildViewController;
@property(retain, nonatomic) NSString *focusMsgId; // @synthesize focusMsgId=_focusMsgId;
@property(nonatomic) unsigned int sourceScene; // @synthesize sourceScene=_sourceScene;
@property(retain, nonatomic) NSMutableArray *unreadMsgList; // @synthesize unreadMsgList=_unreadMsgList;
- (void)clearAllMsg;
- (id)buildReportObj12909WithArea:(long long)arg1 action:(long long)arg2 position:(unsigned int)arg3 reportType:(unsigned int)arg4 externInfoBuilder:(CDUnknownBlockType)arg5;
- (void)reportMsgExplosure:(unsigned int)arg1 reportType:(unsigned int)arg2 externInfoBuilder:(CDUnknownBlockType)arg3;
- (void)jumpHalfScreenWebView:(id)arg1;
- (long long)jumpToWebView:(id)arg1;
- (void)jumpWithJumpInfo:(id)arg1 indexPath:(id)arg2 cellData:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (_Bool)hasTitleBetweenUnreadAndReadSection:(long long)arg1;
- (void)removeHightCell;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)handleQuickJump;
- (id)getCellDataForIndexPath:(id)arg1;
- (id)getDataArrayForSection:(long long)arg1;
- (id)msgListName;
- (void)onLoadNewList:(id)arg1;
- (void)loadMoreData;
- (void)tryLoadMoreData;
- (void)showEmptyView;
- (void)checkShowEmpty;
- (id)navigationBarBackgroundColor;
- (void)setupTableView;
- (id)tableViewBgColor;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)reportObj12909WithAction:(long long)arg1 uiarea:(long long)arg2 position:(unsigned int)arg3 extInfo:(id)arg4;
- (void)onRightBtnClick:(id)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (_Bool)isEmpty;
- (id)sectionModelForIndex:(unsigned long long)arg1;
- (unsigned long long)indexForSectionModel:(id)arg1;
- (_Bool)isContentSection:(unsigned long long)arg1;
- (_Bool)isSectionReadSection:(unsigned long long)arg1;
- (_Bool)isSectionUnReadSection:(unsigned long long)arg1;
- (void)subClassHandleDidSelectRowAtIndexPath:(id)arg1;
- (void)subClassHandleWillDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)subClassHandleCellForRowAtIndexPath:(id)arg1;
- (id)beginSectionModelArray;
- (void)initTableViewSource;
- (void)fakeFocusMsgId;
- (void)viewDidLoad;
- (id)searchMessageWithSvrId:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

