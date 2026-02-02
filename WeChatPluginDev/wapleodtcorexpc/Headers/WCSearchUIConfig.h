//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor, UIImage;

@interface WCSearchUIConfig : NSObject
{
    _Bool _useHeroDismissAnimation;
    _Bool _forbidDismissAnimation;
    _Bool _forceUseDarkMode;
    _Bool _useNoSnapshotTransition;
    _Bool _useHeroNavPopAnimation;
    _Bool _prefersStatusBarHidden;
    _Bool _hideHalfPageNav;
    UIColor *_mainViewBackgroundColor;
    UIColor *_contentViewBackgroundColor;
    UIColor *_navBarBackgroundColor;
    UIColor *_searchBoxBackgroundColor;
    UIColor *_searchBarBackgroundColor;
    UIImage *_leftIconImage;
    double _searchBarHeight;
    double _searchBarTextFontSize;
    double _searchBarTransitionOffset;
    double _halfPageHeightRatio;
    struct UIEdgeInsets _searchBarLayoutMargin;
}

+ (id)transparentConfigFor:(id)arg1;
+ (id)verticalSearchConfigFor:(id)arg1;
+ (id)commonConfigFor:(id)arg1;
+ (id)defaultConfig;
- (void).cxx_destruct;
@property(nonatomic) double halfPageHeightRatio; // @synthesize halfPageHeightRatio=_halfPageHeightRatio;
@property(nonatomic) _Bool hideHalfPageNav; // @synthesize hideHalfPageNav=_hideHalfPageNav;
@property(nonatomic) double searchBarTransitionOffset; // @synthesize searchBarTransitionOffset=_searchBarTransitionOffset;
@property(nonatomic) _Bool prefersStatusBarHidden; // @synthesize prefersStatusBarHidden=_prefersStatusBarHidden;
@property(nonatomic) _Bool useHeroNavPopAnimation; // @synthesize useHeroNavPopAnimation=_useHeroNavPopAnimation;
@property(nonatomic) _Bool useNoSnapshotTransition; // @synthesize useNoSnapshotTransition=_useNoSnapshotTransition;
@property(nonatomic) _Bool forceUseDarkMode; // @synthesize forceUseDarkMode=_forceUseDarkMode;
@property(nonatomic) _Bool forbidDismissAnimation; // @synthesize forbidDismissAnimation=_forbidDismissAnimation;
@property(nonatomic) _Bool useHeroDismissAnimation; // @synthesize useHeroDismissAnimation=_useHeroDismissAnimation;
@property(nonatomic) double searchBarTextFontSize; // @synthesize searchBarTextFontSize=_searchBarTextFontSize;
@property(nonatomic) struct UIEdgeInsets searchBarLayoutMargin; // @synthesize searchBarLayoutMargin=_searchBarLayoutMargin;
@property(nonatomic) double searchBarHeight; // @synthesize searchBarHeight=_searchBarHeight;
@property(retain, nonatomic) UIImage *leftIconImage; // @synthesize leftIconImage=_leftIconImage;
@property(retain, nonatomic) UIColor *searchBarBackgroundColor; // @synthesize searchBarBackgroundColor=_searchBarBackgroundColor;
@property(retain, nonatomic) UIColor *searchBoxBackgroundColor; // @synthesize searchBoxBackgroundColor=_searchBoxBackgroundColor;
@property(retain, nonatomic) UIColor *navBarBackgroundColor; // @synthesize navBarBackgroundColor=_navBarBackgroundColor;
@property(retain, nonatomic) UIColor *contentViewBackgroundColor; // @synthesize contentViewBackgroundColor=_contentViewBackgroundColor;
@property(retain, nonatomic) UIColor *mainViewBackgroundColor; // @synthesize mainViewBackgroundColor=_mainViewBackgroundColor;
- (id)init;

@end

