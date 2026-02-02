//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIView, NSString, NSTimer, UILongPressGestureRecognizer, WACapsuleButton, WCSequentialActionRunner;
@protocol WACapsuleViewDelegate;

@interface WACapsuleView
{
    UILongPressGestureRecognizer *_longPressRecognizer;
    UILongPressGestureRecognizer *_moreLongPressRecognizer;
    _Bool _isTrigerMoreLongPress;
    double _lastSystemNavigationBarHeight;
    _Bool _needAdaptIpad;
    id <WACapsuleViewDelegate> _delegate;
    long long _navMode;
    long long _menuState;
    long long _pageTranslateState;
    long long _translateState;
    WACapsuleButton *_menuTransButton;
    WACapsuleButton *_menuMoreButton;
    WACapsuleButton *_menuExitButton;
    NSString *_customIconUrl;
    NSString *_customDarkIconUrl;
    NSString *_customText;
    NSString *_bannerWaitText;
    NSString *_bannerText;
    double _scale;
    WCSequentialActionRunner *_sequentialAction;
    MMUIView *_menuView;
    NSTimer *_capsuleTimer;
}

+ (id)contentColor:(long long)arg1;
+ (double)bannerMaxWidth;
+ (struct CGSize)menuSize;
+ (_Bool)shouldUseSmallMenu;
- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *capsuleTimer; // @synthesize capsuleTimer=_capsuleTimer;
@property(retain, nonatomic) MMUIView *menuView; // @synthesize menuView=_menuView;
@property(retain, nonatomic) WCSequentialActionRunner *sequentialAction; // @synthesize sequentialAction=_sequentialAction;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSString *bannerText; // @synthesize bannerText=_bannerText;
@property(retain, nonatomic) NSString *bannerWaitText; // @synthesize bannerWaitText=_bannerWaitText;
@property(retain, nonatomic) NSString *customText; // @synthesize customText=_customText;
@property(retain, nonatomic) NSString *customDarkIconUrl; // @synthesize customDarkIconUrl=_customDarkIconUrl;
@property(retain, nonatomic) NSString *customIconUrl; // @synthesize customIconUrl=_customIconUrl;
@property(retain, nonatomic) WACapsuleButton *menuExitButton; // @synthesize menuExitButton=_menuExitButton;
@property(retain, nonatomic) WACapsuleButton *menuMoreButton; // @synthesize menuMoreButton=_menuMoreButton;
@property(retain, nonatomic) WACapsuleButton *menuTransButton; // @synthesize menuTransButton=_menuTransButton;
@property(nonatomic) long long translateState; // @synthesize translateState=_translateState;
@property(nonatomic) long long pageTranslateState; // @synthesize pageTranslateState=_pageTranslateState;
@property(nonatomic) _Bool needAdaptIpad; // @synthesize needAdaptIpad=_needAdaptIpad;
@property(nonatomic) long long menuState; // @synthesize menuState=_menuState;
@property(nonatomic) long long navMode; // @synthesize navMode=_navMode;
@property(nonatomic) __weak id <WACapsuleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLongPressMoreItem:(id)arg1;
- (void)onLongPressExitItem:(id)arg1;
- (id)borderColor;
- (id)capsuleBackgroundColor:(_Bool)arg1;
- (id)getMenuExitButton;
- (id)getMenuMoreButton;
- (id)getMenuTransButton;
- (id)genMenuView:(_Bool)arg1;
- (_Bool)bannerExsist;
- (void)updateMenuView:(_Bool)arg1;
- (void)onCapsuleViewMutationChange:(unsigned long long)arg1;
- (void)onExit;
- (void)onMore;
- (void)onTraslateDoing;
- (void)onTraslate;
- (id)getIconNameForCurrentNavMode:(id)arg1 HighLight:(_Bool)arg2;
- (id)getIconNameForCurrentNavMode:(id)arg1;
- (id)voiceRecordStateIconName;
- (id)POIBackgroundStateIconName;
- (id)POIStateIconName;
- (id)videoRecordStateIconName;
- (id)exitButtonIcon;
- (id)moreButtonIcon;
- (id)translateDoneButtonIcon;
- (id)translateDoingButtonIcon;
- (id)translateTipButtonIcon;
- (void)hideBanner;
- (void)showBanner:(id)arg1;
- (void)flashMoreButton;
- (void)changeMenuStateWithIconView:(id)arg1 iconSubtext:(id)arg2 accessbilityLabel:(id)arg3 flash:(_Bool)arg4;
- (void)changeMenuStateWithIcon:(id)arg1 AccessbilityLabel:(id)arg2;
- (void)changeMenuStateToLibsCustom;
- (void)changeMenuStateToCommentScore;
- (void)changeMenuStateToCamera;
- (void)changeMenuStateToRecordingVideo;
- (void)changeMenuStateToRecordingVoice;
- (void)changeMenuStateToBackgroundLocation;
- (void)changeMenuStateToLocation;
- (void)changeMenuStateToNormal;
- (void)fastForwardAnimation;
- (void)rollTranslateButton;
- (void)updateMenuTransButtonColor;
- (void)setTranslateButtonIconGray:(_Bool)arg1;
- (void)updateTranslateButtonBackground;
- (void)setTranslateButtonIcon:(id)arg1 size:(double)arg2 text:(id)arg3;
- (void)cancelCapsuleTimer;
- (void)delayToNextTranslateState:(long long)arg1 interval:(double)arg2;
- (void)hideTranslateButtonAnim;
- (void)showTranslateButtonAnim;
- (double)capsuleButtonWidthWithScale:(double)arg1;
- (double)getCapsuleHeight;
- (double)getCapsuleWidth;
- (void)resetMenuViewIcon;
- (void)setExpendTouchInsets:(struct UIEdgeInsets)arg1;
- (void)fsmenu_updateContent;
- (void)resetMenuState;
- (id)webview;
- (void)onApplicationWillEnterForeground:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (void)configMenuIconUrl:(id)arg1 iconUrlInDarkMode:(id)arg2 text:(id)arg3;
- (void)updateMenuViewWitNavMode:(long long)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)dealloc;
- (id)initWithNavMode:(long long)arg1;

@end

