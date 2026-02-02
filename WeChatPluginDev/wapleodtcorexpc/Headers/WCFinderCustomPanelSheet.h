//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, NSValue, UIColor, UIPanGestureRecognizer, UIScreenEdgePanGestureRecognizer, UIScrollView, UITapGestureRecognizer, UIView, WCFinderCustomImageRichTextView, WCFinderStreamProfileDragBarView;
@protocol WCFinderFeedBaseViewControllerProtocol;

@interface WCFinderCustomPanelSheet
{
    _Bool _enableLandscapeMode;
    _Bool _enableEdgePan;
    _Bool _hideMaskBackGroundView;
    _Bool _hasConfigClose;
    _Bool _displayed;
    UIScrollView *_mainScrollView;
    double _minHeight;
    double _maxHeight;
    NSString *_naviTitle;
    UIColor *_backgroundColor;
    CDUnknownBlockType _contentViewLayoutBlock;
    CDUnknownBlockType _dismissBlock;
    CDUnknownBlockType _cancelBlock;
    UIView *_contentView;
    UIView *_rightBarItemView;
    id <WCFinderFeedBaseViewControllerProtocol> _forwardSceneObj;
    NSValue *_insetValue;
    MMUIButton *_closeButton;
    WCFinderStreamProfileDragBarView *_dragDownButton;
    UIView *_bgView;
    UIView *_containerView;
    long long _layoutFlag;
    WCFinderCustomImageRichTextView *_naviTitleLabel;
    UITapGestureRecognizer *_closeGesture;
    UIPanGestureRecognizer *_panGes;
    UIScreenEdgePanGestureRecognizer *_edgePanGes;
    double _previousPanPosition;
    struct CGVector _closeButtonPosition;
    struct CGSize _closeButtonSize;
}

+ (id)findPreViewController:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double previousPanPosition; // @synthesize previousPanPosition=_previousPanPosition;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgePanGes; // @synthesize edgePanGes=_edgePanGes;
@property(retain, nonatomic) UIPanGestureRecognizer *panGes; // @synthesize panGes=_panGes;
@property(retain, nonatomic) UITapGestureRecognizer *closeGesture; // @synthesize closeGesture=_closeGesture;
@property(retain, nonatomic) WCFinderCustomImageRichTextView *naviTitleLabel; // @synthesize naviTitleLabel=_naviTitleLabel;
@property(nonatomic) long long layoutFlag; // @synthesize layoutFlag=_layoutFlag;
@property(nonatomic) _Bool displayed; // @synthesize displayed=_displayed;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) WCFinderStreamProfileDragBarView *dragDownButton; // @synthesize dragDownButton=_dragDownButton;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) NSValue *insetValue; // @synthesize insetValue=_insetValue;
@property(nonatomic) _Bool hasConfigClose; // @synthesize hasConfigClose=_hasConfigClose;
@property(nonatomic) __weak id <WCFinderFeedBaseViewControllerProtocol> forwardSceneObj; // @synthesize forwardSceneObj=_forwardSceneObj;
@property(nonatomic) _Bool hideMaskBackGroundView; // @synthesize hideMaskBackGroundView=_hideMaskBackGroundView;
@property(nonatomic) _Bool enableEdgePan; // @synthesize enableEdgePan=_enableEdgePan;
@property(retain, nonatomic) UIView *rightBarItemView; // @synthesize rightBarItemView=_rightBarItemView;
@property(nonatomic) _Bool enableLandscapeMode; // @synthesize enableLandscapeMode=_enableLandscapeMode;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) CDUnknownBlockType contentViewLayoutBlock; // @synthesize contentViewLayoutBlock=_contentViewLayoutBlock;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *naviTitle; // @synthesize naviTitle=_naviTitle;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) struct CGSize closeButtonSize; // @synthesize closeButtonSize=_closeButtonSize;
@property(nonatomic) struct CGVector closeButtonPosition; // @synthesize closeButtonPosition=_closeButtonPosition;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)dismiss;
- (void)showOnView:(id)arg1;
- (void)onDismissGestureEndWithClose:(unsigned char)arg1 closeAction:(unsigned long long)arg2;
- (void)onPan:(id)arg1;
- (void)onEdgePan:(id)arg1;
- (void)onScrollPan:(id)arg1;
- (void)closePanelWithAnimated:(_Bool)arg1;
- (void)onCloseBtnClicked;
- (void)onTapClose:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)dragBarView:(id)arg1 outterPanGesShouldBegin:(id)arg2;
- (void)dragBarViewDidEnd:(id)arg1 beginAnimatedClose:(_Bool)arg2;
- (void)dragBarView:(id)arg1 draggingCloseChangeProgress:(double)arg2;
- (void)dragBarViewDidEnd:(id)arg1 slideToClose:(_Bool)arg2;
- (void)reloadLayout;
- (_Bool)panelDragPanGesShouldBegin:(id)arg1;
- (void)panelSheetWillCloseWithAction:(unsigned long long)arg1;
- (void)viewDidLayoutSubviews;
- (id)ergodicMainScrollView;
- (id)findMainScrollView;
- (void)setupMainScrollViewGesture;
- (void)setupGesture;
- (void)_afterViewDidLoad;
- (void)viewDidLoad;
- (_Bool)_hasOverrideMethod:(SEL)arg1;
- (void)reloadNavTitleLayout;
- (void)updateNavTitle;
- (void)ensureCloseView:(long long)arg1;
- (void)relayoutCloseButton;
- (long long)_closeButtonStyle;
@property(nonatomic) long long closeButtonStyle;
@property(nonatomic) struct UIEdgeInsets contentInset;
- (void)setContentWidth:(double)arg1;
- (double)contentWidth;
@property(retain, nonatomic) UIScrollView *mainScrollView; // @synthesize mainScrollView=_mainScrollView;
- (id)loadContentView;
- (_Bool)useTransparentNavibar;
- (id)initWithContentView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

