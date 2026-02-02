//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CEmoticonWrap, CMessageWrap, EmoticonCustomAddLogicController, EmoticonCustomManageAddLogic, FTSWebSearchMgr, MMTableView, NSMutableArray, NSMutableDictionary, NSString, SharePreConfirmSheetView, SharePreConfirmView, WCTimeLineFooterView, WSEmoticonModel, WSSImilarPageModel;
@protocol WSSimilarEmoticonListViewControllerDelegate;

@interface WSSimilarEmoticonListViewController
{
    _Bool _usedForEmoticonBoardView;
    unsigned int _interactionMode;
    int _cgiStatus;
    unsigned int _requestType;
    unsigned int _pageNumber;
    NSString *_chatName;
    id <WSSimilarEmoticonListViewControllerDelegate> _delegate;
    CEmoticonWrap *_emoticonWrap;
    WSSImilarPageModel *_defaultModel;
    NSString *_webSearchSessionId;
    NSMutableArray *_similarItems;
    NSMutableDictionary *_similarDic;
    NSMutableArray *_downloadMd5Tasks;
    double _cacheItemWidth;
    double _cacheItemGap;
    long long _cacheItemCountPerLine;
    NSString *_searchId;
    long long _offset;
    FTSWebSearchMgr *_webSearchMgr;
    EmoticonCustomManageAddLogic *_emoticonAddLogic;
    CMessageWrap *_sendingMsg;
    WSEmoticonModel *_sendingModel;
    MMTableView *_tableView;
    WCTimeLineFooterView *_footerView;
    SharePreConfirmView *_confirmView;
    SharePreConfirmSheetView *_confirmSheetView;
    NSString *_lastRequestId;
    long long _lastExposeMaxNum;
    long long _maxExposeItemNum;
    WSEmoticonModel *_longPressItem;
    EmoticonCustomAddLogicController *_emoticonAddLogicController;
    unsigned long long _scene;
    NSString *_searchQuery;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) EmoticonCustomAddLogicController *emoticonAddLogicController; // @synthesize emoticonAddLogicController=_emoticonAddLogicController;
@property(retain, nonatomic) WSEmoticonModel *longPressItem; // @synthesize longPressItem=_longPressItem;
@property(nonatomic) long long maxExposeItemNum; // @synthesize maxExposeItemNum=_maxExposeItemNum;
@property(nonatomic) long long lastExposeMaxNum; // @synthesize lastExposeMaxNum=_lastExposeMaxNum;
@property(retain, nonatomic) NSString *lastRequestId; // @synthesize lastRequestId=_lastRequestId;
@property(nonatomic) _Bool usedForEmoticonBoardView; // @synthesize usedForEmoticonBoardView=_usedForEmoticonBoardView;
@property(retain, nonatomic) SharePreConfirmSheetView *confirmSheetView; // @synthesize confirmSheetView=_confirmSheetView;
@property(retain, nonatomic) SharePreConfirmView *confirmView; // @synthesize confirmView=_confirmView;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WSEmoticonModel *sendingModel; // @synthesize sendingModel=_sendingModel;
@property(retain, nonatomic) CMessageWrap *sendingMsg; // @synthesize sendingMsg=_sendingMsg;
@property(retain, nonatomic) EmoticonCustomManageAddLogic *emoticonAddLogic; // @synthesize emoticonAddLogic=_emoticonAddLogic;
@property(retain, nonatomic) FTSWebSearchMgr *webSearchMgr; // @synthesize webSearchMgr=_webSearchMgr;
@property(nonatomic) unsigned int pageNumber; // @synthesize pageNumber=_pageNumber;
@property(nonatomic) unsigned int requestType; // @synthesize requestType=_requestType;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
@property(nonatomic) int cgiStatus; // @synthesize cgiStatus=_cgiStatus;
@property(nonatomic) long long cacheItemCountPerLine; // @synthesize cacheItemCountPerLine=_cacheItemCountPerLine;
@property(nonatomic) double cacheItemGap; // @synthesize cacheItemGap=_cacheItemGap;
@property(nonatomic) double cacheItemWidth; // @synthesize cacheItemWidth=_cacheItemWidth;
@property(retain, nonatomic) NSMutableArray *downloadMd5Tasks; // @synthesize downloadMd5Tasks=_downloadMd5Tasks;
@property(retain, nonatomic) NSMutableDictionary *similarDic; // @synthesize similarDic=_similarDic;
@property(retain, nonatomic) NSMutableArray *similarItems; // @synthesize similarItems=_similarItems;
@property(retain, nonatomic) NSString *webSearchSessionId; // @synthesize webSearchSessionId=_webSearchSessionId;
@property(retain, nonatomic) WSSImilarPageModel *defaultModel; // @synthesize defaultModel=_defaultModel;
@property(retain, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
@property(nonatomic) __weak id <WSSimilarEmoticonListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int interactionMode; // @synthesize interactionMode=_interactionMode;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
- (id)getViewController;
- (void)onAddEmoticonFinishedWithWrap:(id)arg1 isSucceeded:(_Bool)arg2;
- (void)onExchangeEmoticonForSendingFinishedWithWrap:(id)arg1 isSuccessed:(_Bool)arg2;
- (void)doExchangeProcess;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateImageWith:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onDownloadCustomEmoticonFail;
- (void)onDownloadCustomEmoticonFinishWithData:(id)arg1 model:(id)arg2;
- (void)asyncDownloadCustomEmoticon:(id)arg1;
- (void)loadEmotData:(id)arg1;
- (_Bool)isCustomEmoticon:(id)arg1;
- (_Bool)isStoreEmoticon:(id)arg1;
- (void)asyncDownloadAllEmoticon;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)OnSharePreConfirmViewError:(id)arg1;
- (void)OnSharePreConfirmViewCancel:(id)arg1;
- (void)OnSharePreConfirmViewSend:(id)arg1;
- (id)emoticonMsgWith:(id)arg1 toUser:(id)arg2;
- (void)onCollect:(id)arg1;
- (void)handleItemLongPress:(id)arg1 model:(id)arg2;
- (void)handleItemClick:(id)arg1 model:(id)arg2;
- (void)onSearchSimilarEmoticon:(id)arg1;
- (unsigned int)checkModelPos:(id)arg1;
- (void)doForwardEmot;
- (id)pickUpCellEmoticonsWith:(unsigned int)arg1;
- (void)setFooterViewFailedText;
- (void)setFooterViewSuccessText;
- (void)fetchNextSearchPage;
- (void)fetchNextSimilarPage;
- (void)fetchNextPage;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)cancelModalView;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)initTableViewFooterView;
- (void)initTableViewHeader;
- (void)exchangeSearchType:(id)arg1;
- (void)initTableView;
- (void)configData;
- (void)reportSearchedEmotExposeItems14057;
- (void)reportSimilarEmotExposeItems17368;
- (void)reportExposeItemsIfNeeded;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithQuery:(id)arg1 searchMgr:(id)arg2 sessionId:(id)arg3;
- (id)initWithEmojiInfoList:(id)arg1;
- (id)initWithOriEmoticon:(id)arg1 searchMgr:(id)arg2 sessionId:(id)arg3 data:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

