//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, IntelligentMsgBrowseView, IntelligentMsgImgLabelListView, MMDropableTitleView, MMTableView, MMTableViewInfo, MMUIView, MsgDataSaveLogic, MsgImgFullScreenWindow, MsgNewImgDataLogic, MultiSelectController, NSMutableSet, NSString, UIButton, UIView, ViewAppMsgController, WCDataSearcher;
@protocol IntelligentMsgImgBrowseViewControllerDelegate;

@interface IntelligentMsgImgBrowseViewController
{
    NSString *m_sessionId;
    _Bool m_bEditing;
    MMDropableTitleView *m_titleView;
    MMUIView *m_categoryDisplayBgView;
    MMTableViewInfo *m_categoryDisplayTableInfo;
    _Bool m_categoryDisplayShow;
    unsigned int m_categoryDisplayType;
    IntelligentMsgBrowseView *m_msgBrowseView;
    MsgImgFullScreenWindow *m_imgFullScreenWnd;
    UIView *m_filterFooterView;
    UIButton *m_forwardBtn;
    UIButton *m_favBtn;
    UIButton *m_deleteBtn;
    UIButton *m_saveBtn;
    MultiSelectController *m_multiSelectController;
    MsgNewImgDataLogic *m_dataLogic;
    _Bool m_bHasLoadData;
    ViewAppMsgController *m_viewAppMsgController;
    MsgDataSaveLogic *m_MsgDataSaveLogic;
    NSMutableSet *m_arrMsgExpired;
    _Bool m_isShowSearcherResultTableView;
    MMUIView *m_searchMaskView;
    _Bool m_isNeedResetTableTopView;
    MMUIView *m_tableTopView;
    WCDataSearcher *m_searcher;
    IntelligentMsgImgLabelListView *m_labelListView;
    _Bool m_bHadNotResult;
    unsigned int m_clickMediaResultType;
    unsigned int m_clickMediaStartTime;
    _Bool m_isIntelligentMsgImgSwitchOpen;
    _Bool m_bHighlightCurrentImage;
    _Bool _didChangeVCHierarchy;
    unsigned int _m_eFilterType;
    id <IntelligentMsgImgBrowseViewControllerDelegate> m_delegate;
    CMessageWrap *m_curMsgWrap;
    NSString *m_nsChatName;
    double m_scrollOffset;
    MMTableView *m_tableView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didChangeVCHierarchy; // @synthesize didChangeVCHierarchy=_didChangeVCHierarchy;
@property(nonatomic) unsigned int m_eFilterType; // @synthesize m_eFilterType=_m_eFilterType;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
@property(nonatomic) _Bool m_bHighlightCurrentImage; // @synthesize m_bHighlightCurrentImage;
@property(nonatomic) double m_scrollOffset; // @synthesize m_scrollOffset;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
@property(retain, nonatomic) CMessageWrap *m_curMsgWrap; // @synthesize m_curMsgWrap;
@property(nonatomic) __weak id <IntelligentMsgImgBrowseViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)registerYReportSdk;
- (void)asyncReportIntelligentImgMsgExposureActionLog;
- (void)reportIntelligentImgMsgExposureActionLog;
- (void)reportIntelligentMsgDoClickMediaStayTime;
- (void)reportIntelligentMsgDoClickMediaWithWrap:(id)arg1 msgTab:(unsigned int)arg2;
- (void)reportIntelligentMsgDoClickPicture:(unsigned int)arg1;
- (void)OnVideoThumbDidChange:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)previewImage:(id)arg1 originFrame:(struct CGRect)arg2;
- (void)doScrollTableAndTopView:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)getIntelligentMsgSearcher;
- (void)wcsIntelligentMsgBrowseViewDismissSearch:(id)arg1;
- (void)wcsIntelligentMsgBrowseViewDidPresentSearch:(id)arg1;
- (void)setIsShowSearcherResultTableViewFlag:(_Bool)arg1;
- (void)intelligentMsgBrowseView:(id)arg1 didChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(id)arg3;
- (_Bool)intelligentMsgBrowseView:(id)arg1 willChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(id)arg3;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (void)relaodTableTopViewInCategoryDisplay:(_Bool)arg1;
- (void)reloadViewWithCategoryDisplayCore;
- (void)reloadViewWithCategoryDisplay:(_Bool)arg1;
- (void)reLoadInitData;
- (id)messageWrapsForIntelligentMsgBrowseView:(id)arg1;
- (id)expiredMsgForIntelligentMsgBrowseView:(id)arg1;
- (void)onIntelligentMsgBrowseViewGetMoreMsg:(id)arg1 Last:(_Bool)arg2 Next:(_Bool)arg3;
- (_Bool)useBlackStatusbar;
- (id)getViewController;
- (_Bool)shouldNeedShowImgFastBrowseBtn:(id)arg1;
- (void)onMsgImgFullScreenViewWillDisappear:(id)arg1;
- (void)onShowImgMsgLocate:(id)arg1 imageScrollView:(id)arg2 vc:(id)arg3;
- (void)onMsgImgClickTriggerInEditMode:(id)arg1;
- (_Bool)isMsgImgSelectedInEditMode:(id)arg1;
- (_Bool)onCurrentPageMsgImgDataMatch:(id)arg1;
- (void)onMsgImgPreviewDataRequired:(id)arg1;
- (void)onMsgImgWindowWillHideToMsg:(id)arg1 extraInfo:(id)arg2;
- (void)onImgMsgLocate:(id)arg1;
- (void)onImgMsgLocate:(id)arg1 vc:(id)arg2;
- (void)onSightViewDetail:(id)arg1 vc:(id)arg2;
- (void)onPlayAttachVideo:(id)arg1 vc:(id)arg2;
- (void)onJumpToViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onForwardMessageOK;
- (void)onMultiOprationComplete;
- (id)getCurrentViewController;
- (void)PreviewImage:(id)arg1 MsgSquareThumb:(id)arg2;
- (void)onCancel;
- (void)viewDidTransitionToNewSize;
- (void)initFilterFooterView;
- (void)updateFilterFooterView;
- (id)createBtnWithImg:(id)arg1 sel:(SEL)arg2;
- (id)getMsgFrom:(id)arg1;
- (void)onMsgNewImgDataLogicLoadOKWithLast:(id)arg1 Next:(id)arg2;
- (_Bool)messageWrapMatchCategoryDisplaySelect:(id)arg1;
- (_Bool)messageWrapMatchFile:(id)arg1;
- (_Bool)messageWrapMatchAll:(id)arg1;
- (_Bool)messageWrapMatchImage:(id)arg1;
- (_Bool)onMsgNewImgLogicDataMatch:(id)arg1;
- (_Bool)onMsgImgDataMatch:(id)arg1;
- (double)getMsgBrowseViewY;
- (void)onMsgDataSaveLogicEnd:(_Bool)arg1 expiredMsgs:(id)arg2;
- (void)onSave;
- (void)onDel;
- (void)doDelete;
- (void)onFav;
- (void)onForward;
- (id)getSelectArray;
- (void)onEdit;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateEditView;
- (void)addFilterFooterView:(id)arg1;
- (void)initMsgBrowseView;
- (void)initTableView;
- (void)resetTableTopView;
- (void)resizeMsgBrowseView;
- (void)initView;
- (void)initNavBar;
- (void)initData;
- (long long)overrideUserInterfaceStyle;
- (id)getShowTopViewController;
- (_Bool)shouldInteractivePop;
- (id)navigationBarBackgroundColor;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithMsgWrap:(id)arg1;
- (id)p_getCategoryDisplayTitle:(unsigned int)arg1;
- (id)getShadowImageView;
- (id)getTableContainerView;
- (void)onClickDropableTitleView:(id)arg1;
- (void)reloadCategoryDisplayNavigationBarTitle;
- (unsigned int)getCategoryDisplayType;
- (void)makeCategoryDisplayCell:(id)arg1 CellInfo:(id)arg2;
- (id)genSelectedImageView;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)dismiss;
- (void)onSelectCategoryDisplayCell:(id)arg1;
- (void)reloadCategoryDisplayTableView;
- (void)initCategoryDisplayUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

