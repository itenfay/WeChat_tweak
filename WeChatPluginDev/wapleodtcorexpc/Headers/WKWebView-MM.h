//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <WebKit/WKWebView.h>

@class NSSet, NSString;

@interface WKWebView (MM)
+ (_Bool)hasLocalValidWePkg:(id)arg1 Version:(id *)arg2;
+ (_Bool)enableWKProxy:(long long)arg1;
+ (void)reportForWepkgUsed:(id)arg1 version:(id)arg2 result:(int)arg3;
+ (id)webViewWithType:(long long)arg1 frame:(struct CGRect)arg2 recordInitUrl:(id)arg3 delegate:(id)arg4;
+ (_Bool)canUseLoadHtmlStr;
+ (_Bool)canUseHttpCustomScheme;
+ (_Bool)canUseQBRegisterCustomProtocol;
+ (unsigned long long)interceptMethodOnlyQBLT14;
+ (unsigned long long)interceptMethodFromConfig;
+ (id)interceptConfigDict;
+ (id)matchConfigItemDictFromAllConfigDict:(id)arg1;
+ (_Bool)isConfigDictMatchCurOsVersionAndUin:(id)arg1;
+ (id)currentUin;
+ (id)configMax14_4QBLT14OtherScheme;
+ (_Bool)isVersion:(id)arg1 matchArray:(id)arg2;
+ (unsigned long long)wkGameInterceptMethod;
+ (id)optionValueForInterceptMehtod:(unsigned long long)arg1;
+ (id)debugConfigDict;
+ (id)gameWkInterceptMethodConfig;
+ (void)updateScipt:(id)arg1 wkGameInterceptMethod:(unsigned long long)arg2;
+ (id)getGameWebView:(struct CGRect)arg1 delegate:(id)arg2 recordInitUrl:(id)arg3 wkPkgResult:(int *)arg4;
+ (id)injectScriptWithDelegate:(id)arg1 wepkgResult:(int)arg2 wkGameInterceptMethod:(unsigned long long)arg3;
- (_Bool)isQBWebView;
@property(nonatomic) unsigned long long gameWkInnterceptMethod;
@property(retain, nonatomic) NSString *jsCommonLibVersion;
@property(retain, nonatomic) NSString *wepkgVersion;
@property(retain, nonatomic) NSSet *noNeedCheckOfflineUrlSet;
@property(nonatomic) _Bool isOfflinePage;
@property(retain, nonatomic) NSString *recordInitUrl;
@property(nonatomic) _Bool bWkProxyEnabled;
- (void)tryDestroyWebView;
- (void)tryUpdateWePkgByLoadingUrl:(id)arg1 isMainFrame:(_Bool)arg2;
@end

