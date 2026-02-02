//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MMWebViewPreloadContentMPPageHandler : NSObject
{
    _Bool _isOfflineCache;
    unsigned int _checkInterval;
    unsigned int _templateType;
    unsigned int _templateVersion;
    unsigned int _templateReportId;
    unsigned int _scene;
    unsigned int _enterType;
    NSString *_pageFrameUrl;
    NSString *_templateFullVersion;
    NSString *_templateVersionGroup;
    NSString *_latestTemplateFullVersion;
    NSString *_pageUrl;
    NSString *_pageDataKeyUrl;
    CDUnknownBlockType _pageDataUpdateBlock;
    NSString *_a8KeyFullUrl;
    NSString *_passTicket;
    NSDictionary *_requestHeaderDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *requestHeaderDic; // @synthesize requestHeaderDic=_requestHeaderDic;
@property(copy, nonatomic) NSString *passTicket; // @synthesize passTicket=_passTicket;
@property(copy, nonatomic) NSString *a8KeyFullUrl; // @synthesize a8KeyFullUrl=_a8KeyFullUrl;
@property(copy, nonatomic) CDUnknownBlockType pageDataUpdateBlock; // @synthesize pageDataUpdateBlock=_pageDataUpdateBlock;
@property(nonatomic) unsigned int enterType; // @synthesize enterType=_enterType;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *pageDataKeyUrl; // @synthesize pageDataKeyUrl=_pageDataKeyUrl;
@property(copy, nonatomic) NSString *pageUrl; // @synthesize pageUrl=_pageUrl;
@property(nonatomic) _Bool isOfflineCache; // @synthesize isOfflineCache=_isOfflineCache;
@property(nonatomic) unsigned int templateReportId; // @synthesize templateReportId=_templateReportId;
@property(copy, nonatomic) NSString *latestTemplateFullVersion; // @synthesize latestTemplateFullVersion=_latestTemplateFullVersion;
@property(copy, nonatomic) NSString *templateVersionGroup; // @synthesize templateVersionGroup=_templateVersionGroup;
@property(copy, nonatomic) NSString *templateFullVersion; // @synthesize templateFullVersion=_templateFullVersion;
@property(nonatomic) unsigned int templateVersion; // @synthesize templateVersion=_templateVersion;
@property(nonatomic) unsigned int templateType; // @synthesize templateType=_templateType;
@property(nonatomic) unsigned int checkInterval; // @synthesize checkInterval=_checkInterval;
@property(copy, nonatomic) NSString *pageFrameUrl; // @synthesize pageFrameUrl=_pageFrameUrl;
- (void)deleteOfflineCache;
- (void)checkForceUrlWithCompletion:(CDUnknownBlockType)arg1;
- (void)onMPPageDataUpdate:(id)arg1;
- (void)setupParamter:(id)arg1;
- (id)getPageDataKeyUrl;
- (_Bool)getIsOfflineCache;
- (void)setIsOfflineCache;
- (id)requestSessionHeader;
- (id)addTemplateQueryForUrl:(id)arg1 useFlag:(unsigned long long)arg2;
- (unsigned long long)useFlagForIsUsePreCreateWebView:(_Bool)arg1 isSyncGetPageData:(_Bool)arg2;
- (id)addSessoinQueryForRequestUrl:(id)arg1;
- (void)onInjectPageDataNotifySuccessWithA8keyScene:(unsigned int)arg1 useFlag:(unsigned long long)arg2;
- (void)saveA8KeyInfoWithUrl:(id)arg1 header:(id)arg2;
- (void)updatePageDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)pageDataString;
- (unsigned int)getPageDataRequiredTemplateVersion;
- (_Bool)getPageForceUrlFullScreenValidState;
- (id)getPageForceUrl;
- (void)setupPageUrl:(id)arg1 pageDataKeyUrl:(id)arg2 scene:(unsigned int)arg3 enterType:(unsigned int)arg4;
- (id)pageFrameHtmlString;
- (id)pageFrameUrlString;
- (unsigned int)getPageTemplateReportId;
- (unsigned int)getPageCheckInterval;
- (id)getPageTemplateHttpHeader;
- (id)getLatestPageTemplateFullVersion;
- (id)getPageTemplateFullVersion;
- (unsigned int)getPageTemplateVersion;
- (unsigned int)getPageTemplateType;
- (id)initWithParameter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

