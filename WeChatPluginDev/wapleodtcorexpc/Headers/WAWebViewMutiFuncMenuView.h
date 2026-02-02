//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, MMUILabel, MMUIView, NSString, UIButton, UILongPressGestureRecognizer, UIView, WANavAlertTitleView, WAPopOverTaskBarlogic, WAPopOverView, WAWebViewController;
@protocol WAWebViewMutiFuncMenuViewDataSource, WAWebViewMutiFuncMenuViewDelegate;

@interface WAWebViewMutiFuncMenuView
{
    NSString *_normalLastNavTitle;
    MMUILabel *_normalTitleView;
    WANavAlertTitleView *_alertTitleView;
    _Bool _isActivityIndicatorAnimating;
    MMUIActivityIndicatorView *_activityIndicatorView;
    MMUIView *_leftButton;
    unsigned long long _leftBtnType;
    UIView *_menuView;
    _Bool _isMenuHidden;
    UIButton *_customRightButton;
    UILongPressGestureRecognizer *_moreLongPressRecognizer;
    _Bool _isTrigerMoreLongPress;
    UILongPressGestureRecognizer *_longPressRecognizer;
    WAPopOverTaskBarlogic *_popOverLogic;
    WAPopOverView *_popOverView;
    double _lastSystemNavigationBarHeight;
    _Bool _canShowShare;
    _Bool _needAdaptIpad;
    _Bool _includeStatusBar;
    id <WAWebViewMutiFuncMenuViewDelegate> _delegate;
    WAWebViewController *_webview;
    id <WAWebViewMutiFuncMenuViewDataSource> _dataSource;
    long long _navMode;
    long long _contentMode;
}

+ (double)getMenuOriginX:(double)arg1 MenuWidth:(double)arg2;
+ (double)getMenuOriginYIncludeStatusBar:(_Bool)arg1;
+ (double)getMenuOriginY;
+ (_Bool)shouldUseSmallMenu;
+ (double)menuViewHeightCurOri;
+ (double)menuViewDefaultWidth;
+ (double)barHomeButtonLeftMarginCurOri;
+ (double)barReturnButtonLeftMarginCurOri;
- (void).cxx_destruct;
@property(nonatomic) _Bool includeStatusBar; // @synthesize includeStatusBar=_includeStatusBar;
@property(nonatomic) _Bool needAdaptIpad; // @synthesize needAdaptIpad=_needAdaptIpad;
@property(nonatomic) _Bool canShowShare; // @synthesize canShowShare=_canShowShare;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) long long navMode; // @synthesize navMode=_navMode;
@property(nonatomic) __weak id <WAWebViewMutiFuncMenuViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak WAWebViewController *webview; // @synthesize webview=_webview;
@property(nonatomic) __weak id <WAWebViewMutiFuncMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldShowEntryBtnOnNavAlertTitleView:(id)arg1;
- (void)onNavAlertTitleViewEntryBtnClicked:(id)arg1;
- (void)updateLeftBtnType;
- (void)onCustomButtonClick:(id)arg1;
- (void)setCustomRightButton:(id)arg1 accessibilityLabel:(id)arg2;
- (id)genCloseBtn:(id)arg1;
- (id)genHomeBtn:(id)arg1;
- (id)genReturnBtn:(id)arg1;
- (_Bool)shouldShowAlertTitleEntryBtn;
- (_Bool)shouldShowAlertTitle;
- (id)pluginVideoPlayer;
- (_Bool)isSupportVisualEffect;
- (id)genMenuView;
- (void)onReturn;
- (id)copyMenuView;
- (void)fsmenu_updateContent;
- (void)fsnormal_layoutContent;
- (void)resetMenuViewIcon;
- (void)goHome;
- (void)adjustOverallSizeToAdaptIpadWithOriginalFontSize:(double)arg1;
- (void)fsnormal_updateContent;
- (double)getInnerMenuOriginYIncludeStatusBar:(_Bool)arg1;
- (double)getInnerMenuOriginY;
- (double)getStatusBarHeight;
- (void)alert;
- (id)getMenuMoreButton;
- (void)setMenuTitleViewLoading:(_Bool)arg1;
- (void)setMenuViewCapsuleHidden:(_Bool)arg1;
- (void)setMenuNavTitle:(id)arg1;
- (void)setGradientBackground;
- (void)setMenuNavBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)updateMenuViewWithWebContentMode:(long long)arg1 navMode:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

