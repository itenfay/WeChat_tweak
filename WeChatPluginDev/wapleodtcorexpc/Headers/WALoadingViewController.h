//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIColor, UIScreenEdgePanGestureRecognizer, WAContact;
@protocol WALoadingViewControllerDelegate, WAMinimizeDelegate;

@interface WALoadingViewController
{
    _Bool m_isBlackStatusBar;
    _Bool _isViewDidAppear;
    _Bool _isPopMyselfAfterDidAppear;
    _Bool _isCallPopMySelf;
    UIScreenEdgePanGestureRecognizer *_panGesture;
    _Bool _isCallReturn;
    _Bool _forbidStatusBarInset;
    _Bool _hideCapsuleMenu;
    _Bool _isInSheetMode;
    WAContact *_contact;
    id <WALoadingViewControllerDelegate> _delegate;
    id <WAMinimizeDelegate> _minimizeDelegate;
    NSString *_navTitle;
    unsigned long long _darkmodeSpecificType;
    UIColor *_loadingBackgroundColor;
    UIColor *_loadingForegroundTextColor;
    CDUnknownBlockType _viewDidAppearCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType viewDidAppearCallback; // @synthesize viewDidAppearCallback=_viewDidAppearCallback;
@property(retain, nonatomic) UIColor *loadingForegroundTextColor; // @synthesize loadingForegroundTextColor=_loadingForegroundTextColor;
@property(retain, nonatomic) UIColor *loadingBackgroundColor; // @synthesize loadingBackgroundColor=_loadingBackgroundColor;
@property(nonatomic) _Bool isInSheetMode; // @synthesize isInSheetMode=_isInSheetMode;
@property(nonatomic) _Bool hideCapsuleMenu; // @synthesize hideCapsuleMenu=_hideCapsuleMenu;
@property(nonatomic) unsigned long long darkmodeSpecificType; // @synthesize darkmodeSpecificType=_darkmodeSpecificType;
@property(nonatomic) _Bool forbidStatusBarInset; // @synthesize forbidStatusBarInset=_forbidStatusBarInset;
@property(copy, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
@property(nonatomic) _Bool isCallReturn; // @synthesize isCallReturn=_isCallReturn;
@property(nonatomic) __weak id <WAMinimizeDelegate> minimizeDelegate; // @synthesize minimizeDelegate=_minimizeDelegate;
@property(nonatomic) __weak id <WALoadingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
- (void)handleScreenEdgesPanGesture:(id)arg1;
- (void)removePanGesture;
- (void)addPanGesture;
- (double)statusBarInset;
- (void)dismissSelfAndMinimizeIfNeed;
- (void)onReturn;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)changeStatusBarToBlack:(_Bool)arg1;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)setThumbImage:(id)arg1;
- (void)showDownloadingProgressView;
- (void)onTaskLoadingFailed;
- (_Bool)takeOverLoadFailedBehavior;
- (void)popMyselfViewController;
- (void)popMyselfAfterViewDidAppear;
- (void)updateContact:(id)arg1;
- (_Bool)isViewDidAppear;
- (void)updateLeftBarItemWithNavMode:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithContact:(id)arg1;
- (void)viewDidLoad;

@end

