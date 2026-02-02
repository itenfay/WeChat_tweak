//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPageSheetAdapter, MMTagTextField, MMUIButton, NSString, UIImageView, UIView, WCWebSearchPresenter, WSLocalTemplateController, WSWebViewPluginScheduler, _TtC6WeChat21WSTextFieldInteractor;
@protocol YYWebViewInterface;

@interface WSHalfScreenWebSearchBaseViewController
{
    _Bool _isDetailPage;
    _Bool _hasFirstWebviewJsbridgeReady;
    _Bool _hasViewAppear;
    _Bool _bSearchBarHidden;
    WSWebViewPluginScheduler *_pluginScheduler;
    MMPageSheetAdapter *_adapter;
    WSLocalTemplateController *_templateController;
    NSString *_inputQuery;
    UIView<YYWebViewInterface> *_firstWebPageView;
    MMTagTextField *_headerSearchTextField;
    NSString *_sessionId;
    NSString *_nsLastFormatQueryFromMultiStageForFixingWKSearchBug;
    UIView *_searchHeaderBgView;
    UIView *_headerSearchTextFieldBgView;
    UIImageView *_headerSearchLeftIconView;
    MMUIButton *_headerSearchTextFieldClearButton;
    _TtC6WeChat21WSTextFieldInteractor *_textFieldInteractor;
    WCWebSearchPresenter *_presenter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCWebSearchPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) _TtC6WeChat21WSTextFieldInteractor *textFieldInteractor; // @synthesize textFieldInteractor=_textFieldInteractor;
@property(retain, nonatomic) MMUIButton *headerSearchTextFieldClearButton; // @synthesize headerSearchTextFieldClearButton=_headerSearchTextFieldClearButton;
@property(retain, nonatomic) UIImageView *headerSearchLeftIconView; // @synthesize headerSearchLeftIconView=_headerSearchLeftIconView;
@property(retain, nonatomic) UIView *headerSearchTextFieldBgView; // @synthesize headerSearchTextFieldBgView=_headerSearchTextFieldBgView;
@property(retain, nonatomic) UIView *searchHeaderBgView; // @synthesize searchHeaderBgView=_searchHeaderBgView;
@property(nonatomic) _Bool bSearchBarHidden; // @synthesize bSearchBarHidden=_bSearchBarHidden;
@property(copy, nonatomic) NSString *nsLastFormatQueryFromMultiStageForFixingWKSearchBug; // @synthesize nsLastFormatQueryFromMultiStageForFixingWKSearchBug=_nsLastFormatQueryFromMultiStageForFixingWKSearchBug;
@property(nonatomic) _Bool hasViewAppear; // @synthesize hasViewAppear=_hasViewAppear;
@property(nonatomic) _Bool hasFirstWebviewJsbridgeReady; // @synthesize hasFirstWebviewJsbridgeReady=_hasFirstWebviewJsbridgeReady;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) _Bool isDetailPage; // @synthesize isDetailPage=_isDetailPage;
@property(retain, nonatomic) MMTagTextField *headerSearchTextField; // @synthesize headerSearchTextField=_headerSearchTextField;
@property(nonatomic) __weak UIView<YYWebViewInterface> *firstWebPageView; // @synthesize firstWebPageView=_firstWebPageView;
@property(retain, nonatomic) NSString *inputQuery; // @synthesize inputQuery=_inputQuery;
@property(retain, nonatomic) WSLocalTemplateController *templateController; // @synthesize templateController=_templateController;
@property(nonatomic) __weak MMPageSheetAdapter *adapter; // @synthesize adapter=_adapter;
@property(retain, nonatomic) WSWebViewPluginScheduler *pluginScheduler; // @synthesize pluginScheduler=_pluginScheduler;
- (void)onSearchVCDisappearAction;
- (void)onSearchVCAppearAction;
- (id)stayTimeReporter;
- (_Bool)shouldMakeTextFieldAutoBecomFirstResponder;
- (_Bool)shouldSendSearchInputChangedEventDuringMultiStageInput;
- (id)searchBarPlaceholder;
- (id)defaultNavTitle;
- (unsigned long long)searchScene;
- (id)initedUrlParams;
- (unsigned long long)localJSBizType;
- (id)getCurViewController;
- (id)getLocalJSLogic;
- (void)exitPagewhenFault;
- (void)didFinishReloadWebview;
- (void)reloadWebview;
- (_Bool)pageSheetGestureRecognizerShouldBegin:(id)arg1;
- (_Bool)onContainerPanGestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)getPageState;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)onControllerWillBeginDetailSearch:(id)arg1;
- (void)openDetailViewWithKeyword:(id)arg1 params:(id)arg2;
- (void)onLaunchDetailPage:(id)arg1;
- (void)onSetSearchTagResult:(id)arg1;
- (void)onAppendSearchTagQuery:(id)arg1;
- (void)onSearchBackToPreviousView;
- (void)onConfigNavBarWithParams:(id)arg1;
- (void)onSearchInputSetText:(id)arg1 tagInfo:(id)arg2;
- (void)onJsbridgeReady:(id)arg1;
- (id)getNativeHeight;
- (id)getInputHeight;
- (id)getInputMarginLeftRight;
- (id)getInputMarginTop;
- (double)webSearchViewPosY;
- (id)leftIconButtonWithButtonType:(unsigned long long)arg1;
- (void)updateUIStatus;
- (void)makeTextFieldAutoBecomFirstResponder;
- (void)onClickClose:(id)arg1;
- (id)getSearchSessionId;
- (void)doBack;
- (void)doClose;
- (struct CGSize)closeButtonSize;
- (double)getShadowViewHeight;
- (void)viewDidTransitionToNewSize;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)reLayoutSearchTextField;
- (id)makeAdapter;
- (void)showFromViewController:(id)arg1 animated:(_Bool)arg2;
- (void)showInView:(id)arg1 animated:(_Bool)arg2;
- (_Bool)shouldNavigationBarAccessibilityHidden;
- (_Bool)useCustomNavibar;
- (id)dragToCloseInstallScrollView;
- (void)initWebSearchViewController;
- (void)initSearchTextField;
- (id)navCloseButton;
- (void)initSearchHeaderBgView;
- (void)initSubviews;
- (void)initPlugins;
- (id)leftIconBgImageColor;
- (id)baseBackgroundColor;
- (id)textfiledBackgroundColor;
- (id)initWithQuery:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

