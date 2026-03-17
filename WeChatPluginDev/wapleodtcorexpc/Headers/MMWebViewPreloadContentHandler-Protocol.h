//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol MMWebViewPreloadContentHandler <NSObject>
- (void)deleteOfflineCache;
- (void)checkForceUrlWithCompletion:(void (^)(_Bool))arg1;
- (NSString *)getPageDataKeyUrl;
- (_Bool)getIsOfflineCache;
- (void)setIsOfflineCache;
- (NSDictionary *)requestSessionHeader;
- (NSString *)addTemplateQueryForUrl:(NSString *)arg1 useFlag:(unsigned long long)arg2;
- (NSString *)addSessoinQueryForRequestUrl:(NSString *)arg1;
- (unsigned long long)useFlagForIsUsePreCreateWebView:(_Bool)arg1 isSyncGetPageData:(_Bool)arg2;
- (void)onInjectPageDataNotifySuccessWithA8keyScene:(unsigned int)arg1 useFlag:(unsigned long long)arg2;
- (void)saveA8KeyInfoWithUrl:(NSString *)arg1 header:(NSDictionary *)arg2;
- (void)updatePageDataWithCompletion:(void (^)(NSString *, NSString *))arg1;
- (NSString *)pageDataString;
- (unsigned int)getPageDataRequiredTemplateVersion;
- (_Bool)getPageForceUrlFullScreenValidState;
- (NSString *)getPageForceUrl;
- (void)setupPageUrl:(NSString *)arg1 pageDataKeyUrl:(NSString *)arg2 scene:(unsigned int)arg3 enterType:(unsigned int)arg4;
- (NSString *)pageFrameHtmlString;
- (NSString *)pageFrameUrlString;
- (unsigned int)getPageTemplateReportId;
- (unsigned int)getPageCheckInterval;
- (NSString *)getPageTemplateHttpHeader;
- (NSString *)getLatestPageTemplateFullVersion;
- (NSString *)getPageTemplateFullVersion;
- (unsigned int)getPageTemplateVersion;
- (unsigned int)getPageTemplateType;
- (id)initWithParameter:(id)arg1;
@end

