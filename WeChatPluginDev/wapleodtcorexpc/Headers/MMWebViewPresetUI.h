//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebViewPresetUIChildViewConfig, NSMutableArray, NSMutableSet, NSString, UIColor, UIView;

@interface MMWebViewPresetUI
{
    _Bool _hideCloseButton;
    _Bool _shouldShowDomain;
    _Bool _shouldHideTopbar;
    _Bool _isWebviewBgTransparrent;
    _Bool _isWebViewLayoutUnderNav;
    _Bool _ornamentStyleEnable;
    _Bool _isMenuHeaderHidden;
    long long _mmUserInterfaceStyle;
    unsigned long long _statusBarColor;
    UIColor *_navigationBarColor;
    UIColor *_navigationBarTitleColor;
    double _navigationBarTitleAlpha;
    UIColor *_navigationLeftItemFontColor;
    UIColor *_navigationRightItemColor;
    NSString *_navigationLeftIconName;
    NSString *_navigationBarTitle;
    unsigned long long _webScrollStyle;
    UIColor *_backcontainerColor;
    unsigned long long _backcontainerEffect;
    UIColor *_addressLabelColor;
    long long _webShowType;
    UIColor *_webViewBackgroundColor;
    UIView *_customNavigationLoadingView;
    unsigned long long _customNavigationLoadingMode;
    MMWebViewPresetUIChildViewConfig *_childModeConfig;
    NSMutableSet *_setDisableMenueItems;
    NSMutableArray *_arrMenuItemFliters;
}

+ (id)menuItemIdentifier:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isMenuHeaderHidden; // @synthesize isMenuHeaderHidden=_isMenuHeaderHidden;
@property(retain, nonatomic) NSMutableArray *arrMenuItemFliters; // @synthesize arrMenuItemFliters=_arrMenuItemFliters;
@property(retain, nonatomic) NSMutableSet *setDisableMenueItems; // @synthesize setDisableMenueItems=_setDisableMenueItems;
@property(nonatomic) _Bool ornamentStyleEnable; // @synthesize ornamentStyleEnable=_ornamentStyleEnable;
@property(retain, nonatomic) MMWebViewPresetUIChildViewConfig *childModeConfig; // @synthesize childModeConfig=_childModeConfig;
@property(nonatomic) unsigned long long customNavigationLoadingMode; // @synthesize customNavigationLoadingMode=_customNavigationLoadingMode;
@property(retain, nonatomic) UIView *customNavigationLoadingView; // @synthesize customNavigationLoadingView=_customNavigationLoadingView;
@property(nonatomic) _Bool isWebViewLayoutUnderNav; // @synthesize isWebViewLayoutUnderNav=_isWebViewLayoutUnderNav;
@property(nonatomic) _Bool isWebviewBgTransparrent; // @synthesize isWebviewBgTransparrent=_isWebviewBgTransparrent;
@property(retain, nonatomic) UIColor *webViewBackgroundColor; // @synthesize webViewBackgroundColor=_webViewBackgroundColor;
@property(nonatomic) _Bool shouldHideTopbar; // @synthesize shouldHideTopbar=_shouldHideTopbar;
@property(nonatomic) long long webShowType; // @synthesize webShowType=_webShowType;
@property(nonatomic) _Bool shouldShowDomain; // @synthesize shouldShowDomain=_shouldShowDomain;
@property(retain, nonatomic) UIColor *addressLabelColor; // @synthesize addressLabelColor=_addressLabelColor;
@property(nonatomic) unsigned long long backcontainerEffect; // @synthesize backcontainerEffect=_backcontainerEffect;
@property(retain, nonatomic) UIColor *backcontainerColor; // @synthesize backcontainerColor=_backcontainerColor;
@property(nonatomic) unsigned long long webScrollStyle; // @synthesize webScrollStyle=_webScrollStyle;
@property(copy, nonatomic) NSString *navigationBarTitle; // @synthesize navigationBarTitle=_navigationBarTitle;
@property(retain, nonatomic) NSString *navigationLeftIconName; // @synthesize navigationLeftIconName=_navigationLeftIconName;
@property(retain, nonatomic) UIColor *navigationRightItemColor; // @synthesize navigationRightItemColor=_navigationRightItemColor;
@property(retain, nonatomic) UIColor *navigationLeftItemFontColor; // @synthesize navigationLeftItemFontColor=_navigationLeftItemFontColor;
@property(nonatomic) _Bool hideCloseButton; // @synthesize hideCloseButton=_hideCloseButton;
@property(nonatomic) double navigationBarTitleAlpha; // @synthesize navigationBarTitleAlpha=_navigationBarTitleAlpha;
@property(retain, nonatomic) UIColor *navigationBarTitleColor; // @synthesize navigationBarTitleColor=_navigationBarTitleColor;
@property(retain, nonatomic) UIColor *navigationBarColor; // @synthesize navigationBarColor=_navigationBarColor;
@property(nonatomic) unsigned long long statusBarColor; // @synthesize statusBarColor=_statusBarColor;
@property(nonatomic) long long mmUserInterfaceStyle; // @synthesize mmUserInterfaceStyle=_mmUserInterfaceStyle;
- (id)init;
- (_Bool)isMenuItemPresetedHidden:(id)arg1;
- (void)registerMenuItemFliter:(id)arg1;
- (void)setDisableBaseMenuItem:(unsigned long long)arg1;

@end

