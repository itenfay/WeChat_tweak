//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMenuContentView, MMMenuWindow, NSArray, NSString, UIColor, UIResponder, UIView, UIViewPropertyAnimator;

@interface MMMenuController
{
    _Bool _menuVisible;
    _Bool _isCheckMenuWindowValid;
    _Bool _subMenuPushedAnimated;
    _Bool _shouldCloseAtClicked;
    _Bool _isKeyboardShowing;
    long long _scene;
    UIColor *_customBackgroundColor;
    MMMenuContentView *_menuView;
    MMMenuWindow *_menuWindow;
    long long _maxCountPerLine;
    long long _menuStyle;
    UIView *_customHeaderView;
    double _menuMinWidth;
    double _menuItemInnerGap;
    double _menuItemWidth;
    long long _preferredDirection;
    UIViewPropertyAnimator *_menuAnimator;
    NSArray *_menuItemRows;
    UIResponder *_responder;
    unsigned long long _supportedOrienation;
    long long _currOrientation;
    double _keyboardHeight;
    long long _statusBarStyle;
    id _extraInfo;
    NSString *_targetSceneId;
    struct CGRect _selectionRectInScreen;
}

+ (double)displayChangeAnimateDuration;
+ (id)sharedMenuController;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *targetSceneId; // @synthesize targetSceneId=_targetSceneId;
@property(retain, nonatomic) id extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) _Bool isKeyboardShowing; // @synthesize isKeyboardShowing=_isKeyboardShowing;
@property(nonatomic) long long currOrientation; // @synthesize currOrientation=_currOrientation;
@property(nonatomic) unsigned long long supportedOrienation; // @synthesize supportedOrienation=_supportedOrienation;
@property(nonatomic) _Bool shouldCloseAtClicked; // @synthesize shouldCloseAtClicked=_shouldCloseAtClicked;
@property(nonatomic) struct CGRect selectionRectInScreen; // @synthesize selectionRectInScreen=_selectionRectInScreen;
@property(nonatomic) __weak UIResponder *responder; // @synthesize responder=_responder;
@property(retain, nonatomic) NSArray *menuItemRows; // @synthesize menuItemRows=_menuItemRows;
@property(retain, nonatomic) UIViewPropertyAnimator *menuAnimator; // @synthesize menuAnimator=_menuAnimator;
@property(nonatomic) long long preferredDirection; // @synthesize preferredDirection=_preferredDirection;
@property(nonatomic) _Bool subMenuPushedAnimated; // @synthesize subMenuPushedAnimated=_subMenuPushedAnimated;
@property(nonatomic) double menuItemWidth; // @synthesize menuItemWidth=_menuItemWidth;
@property(nonatomic) double menuItemInnerGap; // @synthesize menuItemInnerGap=_menuItemInnerGap;
@property(nonatomic) double menuMinWidth; // @synthesize menuMinWidth=_menuMinWidth;
@property(retain, nonatomic) UIView *customHeaderView; // @synthesize customHeaderView=_customHeaderView;
@property(nonatomic) long long menuStyle; // @synthesize menuStyle=_menuStyle;
@property(nonatomic) long long maxCountPerLine; // @synthesize maxCountPerLine=_maxCountPerLine;
@property(nonatomic) __weak MMMenuWindow *menuWindow; // @synthesize menuWindow=_menuWindow;
@property(retain, nonatomic) MMMenuContentView *menuView; // @synthesize menuView=_menuView;
@property(retain, nonatomic) UIColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;
@property(nonatomic) _Bool isCheckMenuWindowValid; // @synthesize isCheckMenuWindowValid=_isCheckMenuWindowValid;
@property(nonatomic, getter=isMenuVisible) _Bool menuVisible; // @synthesize menuVisible=_menuVisible;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (void)onMainSceneSizeChangedFrom:(struct CGSize)arg1 to:(struct CGSize)arg2;
- (void)onKeyboardDidHide:(id)arg1;
- (void)onKeyboardDidShow:(id)arg1;
- (long long)indexForMenuItem:(id)arg1;
- (void)notifyMenuItemSelected:(id)arg1;
- (void)notifyMenuFrameDidChange;
- (void)notifyMenuDidHide:(id)arg1;
- (void)notifyMenuWillHide:(id)arg1;
- (void)notifyMenuDidShowFailed:(id)arg1;
- (void)notifyMenuDidShow:(id)arg1;
- (void)notifyMenuWillShow:(id)arg1;
- (void)updateMenuView;
- (void)initMenuView;
- (void)onMenuItemSelected:(id)arg1 itemView:(id)arg2;
- (void)onTouchAtNoneMenuArea;
- (struct CGRect)currentMenuFrame;
- (void)startAnimatorWithAnimate:(CDUnknownBlockType)arg1 complete:(CDUnknownBlockType)arg2 allowAnimation:(_Bool)arg3;
- (void)viewDidTransitionToNewSize;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)onDeviceOrienationChange:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setMenuControllerStyle:(long long)arg1;
- (void)setMaxItemCountPerLine:(long long)arg1;
- (void)setTargetRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)setMenuItems:(id)arg1;
- (void)pushSubMenu:(id)arg1 style:(long long)arg2 animated:(_Bool)arg3;
- (void)setMenuVisible:(_Bool)arg1 responder:(id)arg2 animated:(_Bool)arg3;
- (void)setMenuVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setMenuExtraInfo:(id)arg1;
- (void)setStayVisibleForOnce;
- (void)setPreferredMenuDirection:(long long)arg1;
@property(readonly, nonatomic) NSArray *currentMenuItems;
- (long long)preferredContainerBackgroundStyle;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

