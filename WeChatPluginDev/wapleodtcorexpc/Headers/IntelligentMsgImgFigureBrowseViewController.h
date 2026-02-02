//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class IntelligentFaceClusterMessageItem, IntelligentMessageReport, IntelligentMsgBrowseResultTableViewLogic, IntelligentMsgImgFigureHeaderView, IntelligentMsgImgFullScreenMsgImgClickLogic, MMTableView, MMUIView, NSMutableArray, NSString;
@protocol IntelligentMsgImgFigureBrowseViewControllerController;

@interface IntelligentMsgImgFigureBrowseViewController
{
    NSMutableArray *m_arrSearchResultMessageLocalId;
    NSMutableArray *m_arrResultMessagr;
    IntelligentMsgImgFullScreenMsgImgClickLogic *m_msgImgFullScreenMsgImgClickLogic;
    IntelligentMsgBrowseResultTableViewLogic *m_resultTableViewLogic;
    IntelligentMsgImgFigureHeaderView *m_figureHeaderView;
    unsigned int m_indexStartCursor;
    unsigned int _m_searchType;
    unsigned int _m_categoryDisplayType;
    id <IntelligentMsgImgFigureBrowseViewControllerController> m_delegate;
    NSString *m_nsChatName;
    IntelligentFaceClusterMessageItem *m_faceClusterMessageItem;
    MMTableView *m_tableView;
    MMUIView *m_tableViewHeaderView;
    NSMutableArray *m_arrIntelligentMsgItem;
    IntelligentMessageReport *m_reportInfo;
    NSString *_m_searchText;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_categoryDisplayType; // @synthesize m_categoryDisplayType=_m_categoryDisplayType;
@property(nonatomic) unsigned int m_searchType; // @synthesize m_searchType=_m_searchType;
@property(retain, nonatomic) NSString *m_searchText; // @synthesize m_searchText=_m_searchText;
@property(retain, nonatomic) IntelligentMessageReport *m_reportInfo; // @synthesize m_reportInfo;
@property(retain, nonatomic) NSMutableArray *m_arrIntelligentMsgItem; // @synthesize m_arrIntelligentMsgItem;
@property(retain, nonatomic) MMUIView *m_tableViewHeaderView; // @synthesize m_tableViewHeaderView;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
@property(retain, nonatomic) IntelligentFaceClusterMessageItem *m_faceClusterMessageItem; // @synthesize m_faceClusterMessageItem;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
@property(nonatomic) __weak id <IntelligentMsgImgFigureBrowseViewControllerController> m_delegate; // @synthesize m_delegate;
- (void)onIntelligentMsgBrowseResultTableViewGetMoreMsgWithNext:(_Bool)arg1;
- (id)getMsgImgFullScreenMsgInView;
- (struct CGRect)getMediaFrameWithMsgWrap:(id)arg1;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onCancel;
- (void)viewDidTransitionToNewSize;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)analyzeMsgSearchResult;
- (void)doFTSResult;
- (void)filterIntelligentMsgData;
- (void)updateFigureBrowseViewWithImage:(id)arg1 figureCount:(unsigned int)arg2;
- (id)getResultTableViewLogic;
- (void)initTableView;
- (void)initTableHeaderView;
- (void)initView;
- (void)initNavBar;
- (id)getFaceClusterItemLabelIdStr;
- (void)initData;
- (long long)overrideUserInterfaceStyle;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

