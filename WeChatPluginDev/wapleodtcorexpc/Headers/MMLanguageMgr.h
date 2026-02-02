//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLanguageCache, NSBundle, NSString;

@interface MMLanguageMgr
{
    NSString *m_nsCurSystemLanguage;
    NSString *m_curLanguage;
    NSBundle *m_curBundle;
    NSBundle *m_updateBundle;
    NSBundle *m_backupBundle;
    NSBundle *m_updateBackupBundle;
    MMLanguageCache *m_lanCache;
    _Bool m_lanCacheIsSaved;
    _Bool m_firstInitLanguage;
    _Bool haveLazyInit;
    _Bool _downloadPackageRightNow;
}

+ (unsigned long long)preCleanGetCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
- (void).cxx_destruct;
@property(nonatomic) _Bool downloadPackageRightNow; // @synthesize downloadPackageRightNow=_downloadPackageRightNow;
@property(nonatomic) _Bool haveLazyInit; // @synthesize haveLazyInit;
- (void)setTranslateLanguage:(id)arg1 followSystemLanguage:(_Bool)arg2;
- (id)getSupportedTranslateLanguageDisplayNames;
- (id)getSupportedTranslateLanguages;
- (id)currentTranslateLanguageDisplayName;
- (id)currentTranslateLanguage;
- (_Bool)isTranslateLanguageFollowSystemLanguage;
- (_Bool)isVersionString:(id)arg1 olderThanMajor:(unsigned int *)arg2 minor:(unsigned int *)arg3 minorex:(unsigned int *)arg4;
- (void)ClearOlderVersionData;
- (void)refreshNewVersionForCurLanguage:(id)arg1 fromViewScene:(unsigned int)arg2;
- (void)setCurLanguage:(id)arg1 shouldChangeMainFrame:(_Bool)arg2;
- (void)setCurLanguage:(id)arg1 forRefresh:(_Bool)arg2 withViewScene:(unsigned int)arg3 shouldChangeMainFrame:(_Bool)arg4;
- (_Bool)curLanguageIsChineseTraditional;
- (_Bool)curLanguageIsChinese;
- (_Bool)curLanguageIsEnglish;
- (id)getStringForLanguage:(id)arg1 withID:(id)arg2;
- (id)p_getStringForCurLanguage:(id)arg1;
- (id)getStringForCurLanguageWithBackupBundle:(id)arg1 table:(id)arg2;
- (id)getSupportedLanguageDisplayNames;
- (id)getSupportedLanguages;
- (id)getCurLanguageDisplayName;
- (id)getCurLanguage;
- (id)getCurBundle;
- (id)init;
- (id)correctMainBundle;
- (void)initLanguage;
- (void)resetString:(id)arg1 for:(id)arg2;
- (id)getCacheString:(id)arg1;
- (void)initCache;
- (_Bool)isLanaguageValid;
- (void)initBackUpLanguage:(id)arg1;
- (id)getBackUpLanguage;
- (id)getSupportedLanguageKeys;
- (id)isSupportedLanguage:(id)arg1;
- (id)getRealCurSystemLanguage;
- (id)getCurSystemLanguage;
- (id)trimForiOS9Plus:(id)arg1;
- (void)internalSetCurLanguage:(id)arg1;
- (void)internalChangeCurLanguage;
- (id)internalGetCurLanguage;
- (id)getLanguagePath;
- (id)getLangPackageFileForLang:(id)arg1;
- (id)getLangPackagePathForLang:(id)arg1;
- (id)getLangPackageRootPath;
- (void)goToLazyInitObject;
- (double)timeToLazyInitAfterOpenFirstView;
- (id)keyMapping:(id)arg1;
- (id)getStringFromDynamicConfig:(id)arg1;
- (id)getStringForCurLanguage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

