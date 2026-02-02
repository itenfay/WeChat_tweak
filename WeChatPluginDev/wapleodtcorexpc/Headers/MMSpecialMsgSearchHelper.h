//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FTSMessageDB, FTSMsgSearchMgr, FTSMsgSearchTask, MMLoadingView, MMUILabel, MMUIView, MMUIViewController, NSMutableArray, NSMutableDictionary, NSObject, NSString, UIButton, UITextField, UIView, WCDataSearcher, WCPayBrandMsgSearchRelatedFuncViewModel;
@protocol MMSpecialMsgSearchHelperDelegate, OS_dispatch_semaphore;

@interface MMSpecialMsgSearchHelper
{
    _Bool m_bStartSearch;
    _Bool m_bSearchBarBecomeFirstRespones;
    NSMutableArray *m_arrSearchResult;
    MMLoadingView *m_oLoadingView;
    UIView *searchBarBackgroundColorView;
    UIButton *backGroundButton;
    UIButton *cancelButton;
    id <MMSpecialMsgSearchHelperDelegate> m_delegate;
    NSString *m_sessionId;
    NSMutableArray *m_buttonTitles;
    NSMutableArray *m_buttons;
    NSMutableArray *m_divLines;
    NSMutableArray *m_buttonIndexes;
    MMUILabel *m_tipLabel;
    MMUIViewController *m_searchParentVC;
    MMUIViewController *m_searchCurVC;
    UITextField *m_txtField;
    NSString *m_tagText;
    UIButton *m_leftBtn;
    UIButton *m_dateBtn;
    _Bool _hasMoving;
    double _moveStartOffset;
    double _moveCurOffset;
    double _moveContentOffsetY;
    long long startTime;
    FTSMessageDB *_ftsMessageDB;
    FTSMsgSearchTask *_ftsTask;
    FTSMsgSearchMgr *_searchMgr;
    NSMutableDictionary *m_dicMatchTips;
    MMUIView *m_tipLabelLineView;
    _Bool _m_bShowSearchByTime;
    _Bool _bUsePanCancelGesture;
    _Bool _bIsCluster;
    _Bool _bIsHiddenCustomerCancelButton;
    _Bool _bWCPayBrandSearchShouldShowRelatedFuncCell;
    _Bool _bWCPayBrandSearchShouldShowMoreResultCell;
    _Bool _bWCPayShouldCheckOnePageEnoughForResult;
    unsigned int _m_msgSearchBusinessType;
    WCDataSearcher *_searcher;
    WCPayBrandMsgSearchRelatedFuncViewModel *_wcpayRelatedFuncModel;
    NSObject<OS_dispatch_semaphore> *_payBrandSearchSema;
}

+ (void)reportKFSessionBoxMsgSearchActionLog:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *payBrandSearchSema; // @synthesize payBrandSearchSema=_payBrandSearchSema;
@property(nonatomic) _Bool bWCPayShouldCheckOnePageEnoughForResult; // @synthesize bWCPayShouldCheckOnePageEnoughForResult=_bWCPayShouldCheckOnePageEnoughForResult;
@property(nonatomic) _Bool bWCPayBrandSearchShouldShowMoreResultCell; // @synthesize bWCPayBrandSearchShouldShowMoreResultCell=_bWCPayBrandSearchShouldShowMoreResultCell;
@property(nonatomic) _Bool bWCPayBrandSearchShouldShowRelatedFuncCell; // @synthesize bWCPayBrandSearchShouldShowRelatedFuncCell=_bWCPayBrandSearchShouldShowRelatedFuncCell;
@property(retain, nonatomic) WCPayBrandMsgSearchRelatedFuncViewModel *wcpayRelatedFuncModel; // @synthesize wcpayRelatedFuncModel=_wcpayRelatedFuncModel;
@property(nonatomic) _Bool bIsHiddenCustomerCancelButton; // @synthesize bIsHiddenCustomerCancelButton=_bIsHiddenCustomerCancelButton;
@property(nonatomic) _Bool bIsCluster; // @synthesize bIsCluster=_bIsCluster;
@property(nonatomic) unsigned int m_msgSearchBusinessType; // @synthesize m_msgSearchBusinessType=_m_msgSearchBusinessType;
@property(nonatomic) _Bool bUsePanCancelGesture; // @synthesize bUsePanCancelGesture=_bUsePanCancelGesture;
@property(retain, nonatomic) WCDataSearcher *searcher; // @synthesize searcher=_searcher;
@property(nonatomic) _Bool m_bShowSearchByTime; // @synthesize m_bShowSearchByTime=_m_bShowSearchByTime;
@property(nonatomic) __weak id <MMSpecialMsgSearchHelperDelegate> m_delegate; // @synthesize m_delegate;
- (_Bool)wcpaySearchRelatedFunctionEnabled;
- (_Bool)wcpayRelatedFuncModelValid;
- (void)onClickWCPayBrandSearchMoreResult;
- (void)onClickWCPayRelatedFuncCell:(id)arg1;
- (void)onGetLQTQryUserFundDetailResp:(id)arg1;
- (void)handleNavigationCancelItemClick;
- (void)selectClusterMsgItems:(id)arg1 withSessionUsername:(id)arg2;
- (void)selectClusterMsgItem:(id)arg1;
- (void)didClusterSearchSelect:(id)arg1;
- (void)setSearcherClickDoneBtnSearch;
- (void)reportSearchAtion:(unsigned int)arg1 text:(id)arg2 useTime:(long long)arg3 result:(unsigned int)arg4 oprationTime:(long long)arg5;
- (void)makeSearchResultPreview:(id)arg1;
- (id)filterViewModel:(id)arg1 msgItem:(id)arg2;
- (void)defaultMakeSearchResultPreview:(id)arg1;
- (id)defualtFilterViewModel:(id)arg1 msgItem:(id)arg2;
- (void)onMsgSearchTaskResultChanged:(_Bool)arg1 taskObj:(id)arg2;
- (void)cancelFTSSearch;
- (void)asyncSearchTextForHomePage:(id)arg1;
- (void)setHomepageNewestQuery:(id)arg1;
- (void)makeHomePageTaskIfNil;
- (id)onSearchPanGestureReturnBottomView;
- (void)onSearchPanGestureMoveRight;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (_Bool)isSearchBarActive;
- (void)startSearch;
- (void)wcsDidDismissSearch:(id)arg1;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)cancelBtnDown;
- (_Bool)wcsSearchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (id)getSearchText:(id)arg1;
- (void)wcsSearchBarTextDidEndEditing:(id)arg1;
- (void)removeSearchVC;
- (void)moveSearchVCToRight;
- (void)cancelMoveSearchVC;
- (void)updateSearchVCPosition;
- (void)handlePanGesture:(id)arg1;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)finishSearch;
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (_Bool)wcSearcherCanPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3;
- (_Bool)wcSearcherShouldShowMenuForRowAtIndexPath:(id)arg1;
- (void)wcSearcherWillDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)didSearchViewTableSelect:(id)arg1;
- (id)wcPayRelatedFuncFooterView:(id)arg1 shouldShowMoreResultCell:(_Bool)arg2;
- (double)heightForRelatedFunctionCellInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (_Bool)shouldHighlightRowAtIndexPath:(id)arg1;
- (id)cellForIndex:(id)arg1 ForSearchViewTable:(id)arg2;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)addCellBottomWithCell:(id)arg1 needLineView:(_Bool)arg2 needLongLineView:(_Bool)arg3;
- (id)cellForMoreResultAndRelatedFuncCell:(_Bool)arg1;
- (id)cellForMoreCell:(id)arg1;
- (id)cellForFirstTitleCell:(id)arg1 isHiddenTopLine:(_Bool)arg2;
- (id)getRealSearchText;
- (void)asyncSearchTextForSpecialMsg:(id)arg1;
- (double)calButtonHeight;
- (double)calButtonWidth;
- (void)endSearchAnim;
- (void)beginSearchAnim;
- (void)fixSearchBarFrame;
- (void)tryFixSearchBarFrame;
- (void)startSearch:(id)arg1;
- (void)fillSearcNoResultCell:(id)arg1;
- (void)fillSearcLoadMoreCell:(id)arg1 index:(id)arg2;
- (void)fillSearcIntervalCell:(id)arg1 result:(id)arg2;
- (void)fillClusterSearcResultCell:(id)arg1 result:(id)arg2;
- (void)fillSearcResultCell:(id)arg1 result:(id)arg2;
- (id)searchBar;
- (double)getSearcherVisibleHeight;
- (double)getTableVisibleHeight;
- (_Bool)searchBarShouldBecomeFirstResponse;
- (void)resetBackGroundView;
- (void)reloadView;
- (void)msgSearchBarWillPushByIndex:(long long)arg1;
- (id)getViewController;
- (void)msgSearchBarSearchByTime;
- (void)resetTypingAttributes;
- (void)updateSearchFieldText:(id)arg1;
- (void)onTapButton:(id)arg1;
- (double)getButtonTitleFontSize;
- (void)initBackGroundView;
- (void)dealloc;
- (void)searchBarResignFirstResponder;
- (void)initFTSDB;
- (id)initWithContentsController:(id)arg1 resultCellClass:(Class)arg2;
- (id)initWithContentsController:(id)arg1;
- (void)wcsWillReportPresentSearch:(id)arg1;
- (void)reportKFSessionBoxMsgSearchActionLogWithAction:(unsigned int)arg1 resCount:(unsigned int)arg2 matchType:(unsigned int)arg3;
- (void)reportKFSessionBoxMsgSearchActionLogWithAction:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

