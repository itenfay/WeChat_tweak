//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIView, NSString, WAAppTaskCapsuleButton, WACapsuleView;
@protocol WACapsuleMenuDelegate;

@interface WAAppTaskCapsuleMenu
{
    _Bool _hidden;
    _Bool _needAdaptIpad;
    _Bool _enableDarkMode;
    _Bool _isGame;
    unsigned long long _menuType;
    id <WACapsuleMenuDelegate> _delegate;
    long long _menuStyle;
    MMUIView *_view;
    WACapsuleView *_capsuleView;
    WAAppTaskCapsuleButton *_singleCloseButton;
    WAAppTaskCapsuleButton *_expandButton;
    NSString *_bannerText;
    struct CGRect _frame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bannerText; // @synthesize bannerText=_bannerText;
@property(nonatomic) _Bool isGame; // @synthesize isGame=_isGame;
@property(retain, nonatomic) WAAppTaskCapsuleButton *expandButton; // @synthesize expandButton=_expandButton;
@property(retain, nonatomic) WAAppTaskCapsuleButton *singleCloseButton; // @synthesize singleCloseButton=_singleCloseButton;
@property(retain, nonatomic) WACapsuleView *capsuleView; // @synthesize capsuleView=_capsuleView;
@property(nonatomic) _Bool enableDarkMode; // @synthesize enableDarkMode=_enableDarkMode;
@property(nonatomic) _Bool needAdaptIpad; // @synthesize needAdaptIpad=_needAdaptIpad;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) MMUIView *view; // @synthesize view=_view;
@property(nonatomic) long long menuStyle; // @synthesize menuStyle=_menuStyle;
@property(nonatomic) __weak id <WACapsuleMenuDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long menuType; // @synthesize menuType=_menuType;
- (void)layoutExpandButton;
- (void)layoutSingleCloseButton;
- (void)onExpandButton:(id)arg1;
- (void)onSingleCloseButton:(id)arg1;
- (void)initExpandButton;
- (void)initSingleCloseButton;
- (void)updateCapsuleButtonBackgroundColor:(id)arg1 svgName:(id)arg2;
- (void)updateExpandButtonBackgroundColor;
- (void)updateSingleCloseButtonBackgroundColor;
- (void)menuStyleDidUpdate;
- (void)menuTypeDidUpdate;
- (id)getCurrentWebView;
- (void)capsuleViewOnMutationChange:(id)arg1 action:(unsigned long long)arg2;
- (void)capsuleViewOnClickExpand:(id)arg1;
- (void)capsuleViewOnLongPressExit:(id)arg1;
- (void)capsuleViewOnLongPressMore:(id)arg1;
- (void)capsuleViewOnClickExit:(id)arg1;
- (void)capsuleViewOnClickMore:(id)arg1;
- (void)capsuleViewOnClickTranslateDoing:(id)arg1;
- (void)capsuleViewOnClickTranslate:(id)arg1;
- (void)setTouchInsets:(struct UIEdgeInsets)arg1;
- (id)menuExpandButton;
- (id)menuSingleCloseButton;
- (id)menuExitButton;
- (id)menuMoreButton;
- (id)menuTransButton;
- (double)capsuleHeight;
- (double)capsuleWidth;
- (id)getCapsuleView;
- (void)configThirdBusiTipsText:(id)arg1;
- (_Bool)bannerExsist;
- (void)showBanner;
@property(nonatomic) long long menuState;
- (void)configMenuWithUIParameter:(id)arg1;
- (void)initMenuView;
- (void)initView;
- (id)init;
- (id)initWithIsGame:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

