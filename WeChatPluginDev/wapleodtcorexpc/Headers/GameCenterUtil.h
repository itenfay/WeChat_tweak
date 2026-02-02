//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface GameCenterUtil
{
}

+ (id)getReddotExternPageUrl;
+ (void)queryLowPowerState:(_Bool *)arg1 andMode:(_Bool *)arg2;
+ (void)cleanTodayFirstAccessWithCategory:(id)arg1;
+ (void)markTodayFirstAccessWithCategory:(id)arg1;
+ (_Bool)isTodayFirstAccessWithCategory:(id)arg1;
+ (id)getFirstTimeAccessKey:(id)arg1;
+ (_Bool)checkIsSameDay:(id)arg1 nowDate:(id)arg2;
+ (void)findElementForKey:(id)arg1 inJsonObject:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;
+ (id)urlAppending:(id)arg1 AppendingStr:(id)arg2;
+ (void)gameSenceWebController:(id)arg1 injectJavaScript:(id)arg2;
+ (void)report16171WithOpt:(unsigned long long)arg1 param:(id)arg2 result:(id)arg3 costTime:(unsigned long long)arg4;
+ (void)addGameEntrySceneIfGameHostUrl:(id)arg1 webviewExtInfo:(id)arg2;
+ (_Bool)isUrlGameCenterDomain:(id)arg1;
+ (id)wgclientInitializeString;
+ (id)webviewImmersiveRequestingLoadingView;
+ (id)mmWebViewControllerForWebView:(id)arg1;
+ (id)asWkWebView:(id)arg1;
+ (id)genLabelWithFontSize:(double)arg1 text:(id)arg2 textColor:(id)arg3 x:(double)arg4 y:(double)arg5 maxWidth:(double)arg6 superView:(id)arg7;
+ (_Bool)shouldUseHVAppInfo:(int)arg1 AppId:(id)arg2;
+ (_Bool)shouldUseHVAppInfo:(id)arg1;
+ (id)getNavigationBarColorForUrl:(id)arg1 defaultColor:(id)arg2;
+ (id)immersiveUIBackgroundColorInDarkMode:(_Bool)arg1;
+ (id)getImmersiveUIBackgroundColorForUrl:(id)arg1;
+ (id)createWebViewController:(id)arg1 Url:(id)arg2 loadMode:(unsigned long long)arg3 preload:(_Bool)arg4;
+ (id)createWebViewController:(id)arg1 Url:(id)arg2 loadMode:(unsigned long long)arg3;
+ (id)getGameCenterWebViewController:(id)arg1 Url:(id)arg2 preload:(_Bool)arg3;
+ (id)getGameCenterWebViewController:(id)arg1 Url:(id)arg2;
+ (id)createPreloadHomeWebViewController:(id)arg1 Url:(id)arg2;
+ (id)getGameCenterWebViewController:(_Bool)arg1 EntryScene:(id)arg2 Url:(id)arg3 presetUI:(id)arg4 loadMode:(unsigned long long)arg5 preload:(_Bool)arg6;
+ (id)getDefaultImage;
+ (id)parameterValueForKey:(id)arg1 fromQueryItems:(id)arg2;
+ (id)parameterValueForKey:(id)arg1 fromUrl:(id)arg2;
+ (id)parseUrlQuery:(id)arg1;
+ (id)getParseRegex;
+ (id)badgeFileNameWithLevel:(unsigned int)arg1;
+ (id)trimmedStringWithString:(id)arg1;
+ (long long)trendTypeWithString:(id)arg1;
+ (id)getGameSettingCachePath;
+ (id)getGameSearchRecommendItemCachePath;
+ (id)getClassifyNewGameListCachePath:(id)arg1;
+ (id)getMoreGameListCachePath;
+ (id)getAllGameListDataPath;
+ (id)getAllMiniGameListDataPath;
+ (id)getUserSubscribeDataPath;
+ (id)getLibraryGameListCachePath;
+ (id)getGameAdsCountryInfoFilePath;
+ (id)getGameAdsFilePath;
+ (id)getGameMsgGiftInfoFilePath;
+ (id)getUserGlobalSettingFetchInfoPath;
+ (id)getUserGlobalSettingDataPath;
+ (id)getUserHomeTabNavPathV5;
+ (id)getUserHomeDataPathV5;
+ (id)getUserForeignHomeDataPathV4;
+ (id)getUserCommonDataDir;
+ (id)getUserDataDir;
+ (id)getContactDisplayName:(id)arg1;

@end

