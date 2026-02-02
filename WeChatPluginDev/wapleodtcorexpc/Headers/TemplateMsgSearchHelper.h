//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FTSMessageDB, FTSMsgSearchTask, MMLoadingView, MMUILabel, MMUIViewController, NSMutableArray, NSMutableDictionary, NSString, SearchHelpDataItem, UIButton, UITextField, UIView, WCDataSearcher;
@protocol TemplateMsgSearchHelperDelegate;

@interface TemplateMsgSearchHelper
{
    _Bool m_bStartSearch;
    _Bool m_bSearchBarBecomeFirstRespones;
    _Bool m_bSearchBarCancelBtnDown;
    NSMutableArray *m_arrSearchResult;
    MMLoadingView *m_oLoadingView;
    UIView *searchBarBackgroundColorView;
    UIButton *backGroundButton;
    UIButton *cancelButton;
    id <TemplateMsgSearchHelperDelegate> m_delegate;
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
    _Bool _hasMoving;
    double _moveStartOffset;
    double _moveCurOffset;
    double _moveContentOffsetY;
    double _searchTextFieldNormalWidth;
    struct CGSize _searchIconDefaultSize;
    FTSMessageDB *_ftsMessageDB;
    FTSMsgSearchTask *_ftsTask;
    SearchHelpDataItem *m_searchHelpDataItem;
    NSMutableDictionary *m_dicMatchTips;
    NSMutableArray *m_allContact;
    NSMutableArray *m_resultContact;
    _Bool _m_bShowSearchByName;
    _Bool _m_bShowSearchByTime;
    _Bool _bUsePanCancelGesture;
    WCDataSearcher *_searcher;
    NSString *_templateSessionId;
    unsigned long long _reportPageType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long reportPageType; // @synthesize reportPageType=_reportPageType;
@property(retain, nonatomic) NSString *templateSessionId; // @synthesize templateSessionId=_templateSessionId;
@property(nonatomic) _Bool bUsePanCancelGesture; // @synthesize bUsePanCancelGesture=_bUsePanCancelGesture;
@property(retain, nonatomic) WCDataSearcher *searcher; // @synthesize searcher=_searcher;
@property(nonatomic) _Bool m_bShowSearchByTime; // @synthesize m_bShowSearchByTime=_m_bShowSearchByTime;
@property(nonatomic) _Bool m_bShowSearchByName; // @synthesize m_bShowSearchByName=_m_bShowSearchByName;
@property(nonatomic) __weak id <TemplateMsgSearchHelperDelegate> m_delegate; // @synthesize m_delegate;
- (id)filterViewModel:(id)arg1;
- (void)onMsgSearchTaskResultChanged:(_Bool)arg1 taskObj:(id)arg2;
- (void)cancelFTSSearch;
- (void)asyncSearchTextForHomePage:(id)arg1;
- (void)setHomepageNewestQuery:(id)arg1;
- (void)makeHomePageTaskIfNil;
- (void)onSearchPanGestureMoveRight;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (_Bool)isSearchBarActive;
- (void)startSearch;
- (void)dealloc;
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
- (void)wcSearcherPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3;
- (_Bool)wcSearcherCanPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3;
- (_Bool)wcSearcherShouldShowMenuForRowAtIndexPath:(id)arg1;
- (void)wcSearcherWillDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (_Bool)shouldHighlightRowAtIndexPath:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)endSearchAnim;
- (void)beginSearchAnim;
- (void)fixSearchBarFrame;
- (void)tryFixSearchBarFrame;
- (void)sortResultContact:(id)arg1 matchTips:(id)arg2;
- (id)getCachedSearchHelpDataItem;
- (void)searchContact:(id)arg1;
- (void)startSearch:(id)arg1;
- (void)fillSearcResultTypeAccountLoadMoreIntervalCell:(id)arg1 result:(id)arg2;
- (void)fillSearcResultTypeAccountLoadMoreCell:(id)arg1 result:(id)arg2;
- (void)fillSearcResultTypeAccountIntervalCell:(id)arg1 result:(id)arg2;
- (void)fillSearcResultTypeAccountCell:(id)arg1 result:(id)arg2;
- (void)fillSearcNoResultCell:(id)arg1;
- (void)fillSearcLoadMoreCell:(id)arg1;
- (void)fillSearcIntervalCell:(id)arg1 result:(id)arg2;
- (void)fillSearcResultCell:(id)arg1 result:(id)arg2;
- (void)makeSearchResultPreview:(id)arg1;
- (void)fillSearchWordingCell:(id)arg1 withSearchText:(id)arg2;
- (id)searchBar;
- (_Bool)searchBarShouldBecomeFirstResponse;
- (void)resetBackGroundView;
- (void)reloadView;
- (void)msgSearchBarWillPushByIndex:(long long)arg1;
- (id)getViewController;
- (void)msgSearchBarSearchByTime;
- (void)msgSearchBarSearchByName;
- (void)resetTypingAttributes;
- (void)updateSearchFieldText:(id)arg1;
- (void)onTapButton:(id)arg1;
- (double)getButtonTitleFontSize;
- (void)initBackGroundView;
- (void)searchBarResignFirstResponder;
- (void)initFTSDB;
- (id)initWithContentsController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

