//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMColor, MMRuleSetList, MMTheme, NSCache, NSString;

@interface MMThemeManager
{
    MMTheme *m_currentTheme;
    MMColor *m_colorList;
    NSCache *m_imageCache;
    MMRuleSetList *m_ruleSetList;
    int m_ipadCssStyleType;
    _Bool haveLazyInit;
    _Bool _hasRegisterLazyInit;
}

+ (_Bool)useiPhone6CssForIpadCompact;
+ (_Bool)useiPadCss;
+ (int)getIpadStyleType;
+ (id)CheckMarkDisabled;
+ (id)CheckMark;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasRegisterLazyInit; // @synthesize hasRegisterLazyInit=_hasRegisterLazyInit;
@property(nonatomic) _Bool haveLazyInit; // @synthesize haveLazyInit;
@property(retain, nonatomic) MMRuleSetList *ruleSetList; // @synthesize ruleSetList=m_ruleSetList;
@property(retain, nonatomic) NSCache *imageCache; // @synthesize imageCache=m_imageCache;
@property(retain, nonatomic) MMColor *colorList; // @synthesize colorList=m_colorList;
@property(retain, nonatomic) MMTheme *currentTheme; // @synthesize currentTheme=m_currentTheme;
- (void)reloadCssForMultiTaskingIfNeed;
- (_Bool)returnAsRawService;
- (void)onServiceClearMemoryCacheInBackground;
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)onServiceMemoryWarning;
- (void)onFirstRun;
- (void)clearSelfCreateImage;
- (void)saveImage:(id)arg1 ToSelfCreateImagePath:(id)arg2;
- (id)imageFromSelfCreateImagePath:(id)arg1;
- (id)getValueOfProperty:(id)arg1 inRuleSet:(id)arg2 isAdapt:(_Bool)arg3;
- (id)getValueOfProperty:(id)arg1 inRuleSet:(id)arg2;
- (id)getRuleSetForSeletor:(id)arg1;
- (id)imageFromColor:(id)arg1;
- (id)imageNamed:(id)arg1 Alpha:(float)arg2 Suffix:(id)arg3;
- (id)imageNamed:(id)arg1 alpha:(double)arg2;
- (id)imageDisableNamed:(id)arg1;
- (id)imageHighlightNamed:(id)arg1;
- (id)cacheKeyOfSvgImageNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3 alpha:(double)arg4 angle:(int)arg5;
- (id)createSvgImageNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3 alpha:(double)arg4 angle:(int)arg5;
- (id)svgImageNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3 alpha:(double)arg4 angle:(int)arg5 ignoreNotFound:(_Bool)arg6;
- (id)svgImageNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3 alpha:(double)arg4 angle:(int)arg5;
- (id)svgImageNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3 alpha:(double)arg4;
- (id)svgImageHighlightNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3;
- (id)svgImageDisableNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3;
- (id)svgImageNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3 angle:(int)arg4;
- (id)svgImageNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3;
- (id)svgImageNamed:(id)arg1 color:(id)arg2;
- (id)svgImageNamed:(id)arg1 color:(id)arg2 ignoreNotFound:(_Bool)arg3;
- (id)imageNamed:(id)arg1 warnIfNotFound:(_Bool)arg2;
- (id)imageNamed:(id)arg1;
- (id)getImageName:(id)arg1;
- (id)pathOfResNamed:(id)arg1;
- (_Bool)loadUserPreferedTheme;
- (void)reloadThemeResource;
- (void)loadColors;
- (_Bool)loadCSSFromPath:(id)arg1 IntoRuleSetList:(id)arg2;
- (void)loadRuleSets;
- (void)loadSimpleRuleSets;
- (void)goToLazyInitObject;
- (double)timeToLazyInitAfterOpenFirstView;
- (id)getImageCacheObjectForKey:(id)arg1;
- (void)clearImageCache;
- (void)setImageCacheObject:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

