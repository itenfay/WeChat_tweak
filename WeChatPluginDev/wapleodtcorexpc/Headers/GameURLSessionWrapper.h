//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameURLSessionStatistics, NSMutableDictionary, NSRecursiveLock, NSString, NSURLSession;
@protocol GameURLSessionWrapperDelegate;

@interface GameURLSessionWrapper : NSObject
{
    NSRecursiveLock *m_lock;
    _Bool _isVideoInnerSessionWrapper;
    _Bool _isSimpleDnsExptEnable;
    _Bool _hasTurnLevelDown;
    _Bool _isNetWorkDisconnet;
    id <GameURLSessionWrapperDelegate> _delegate;
    NSURLSession *_urlSession;
    NSMutableDictionary *_sessionTaskToSchemeTaskDict;
    NSMutableDictionary *_schemeTaskToTryInfoDict;
    unsigned long long _webRequestStatus;
    NSMutableDictionary *_ip2hostDict;
    GameURLSessionStatistics *_sessionStatistics;
    long long _simpleReqFailCount;
    long long _simpleErrorTotalCount;
    long long _simpleErrorContinuousCount;
}

+ (_Bool)isIPV6Address:(id)arg1;
+ (_Bool)isValidIPAddress:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long simpleErrorContinuousCount; // @synthesize simpleErrorContinuousCount=_simpleErrorContinuousCount;
@property(nonatomic) long long simpleErrorTotalCount; // @synthesize simpleErrorTotalCount=_simpleErrorTotalCount;
@property(nonatomic) long long simpleReqFailCount; // @synthesize simpleReqFailCount=_simpleReqFailCount;
@property(retain, nonatomic) GameURLSessionStatistics *sessionStatistics; // @synthesize sessionStatistics=_sessionStatistics;
@property(nonatomic) _Bool isNetWorkDisconnet; // @synthesize isNetWorkDisconnet=_isNetWorkDisconnet;
@property(nonatomic) _Bool hasTurnLevelDown; // @synthesize hasTurnLevelDown=_hasTurnLevelDown;
@property(retain, nonatomic) NSMutableDictionary *ip2hostDict; // @synthesize ip2hostDict=_ip2hostDict;
@property(nonatomic) unsigned long long webRequestStatus; // @synthesize webRequestStatus=_webRequestStatus;
@property(nonatomic) _Bool isSimpleDnsExptEnable; // @synthesize isSimpleDnsExptEnable=_isSimpleDnsExptEnable;
@property(retain, nonatomic) NSMutableDictionary *schemeTaskToTryInfoDict; // @synthesize schemeTaskToTryInfoDict=_schemeTaskToTryInfoDict;
@property(retain, nonatomic) NSMutableDictionary *sessionTaskToSchemeTaskDict; // @synthesize sessionTaskToSchemeTaskDict=_sessionTaskToSchemeTaskDict;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(nonatomic) _Bool isVideoInnerSessionWrapper; // @synthesize isVideoInnerSessionWrapper=_isVideoInnerSessionWrapper;
@property(nonatomic) __weak id <GameURLSessionWrapperDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)cookieFilterWithCookie:(id)arg1 andUrl:(id)arg2;
- (id)searchLocalCookiesForUrl:(id)arg1;
- (id)getRequestCookieHeaderForHost:(id)arg1;
- (id)getRequestCookieHeaderForURL:(id)arg1;
- (void)invalidateAndCleanup;
- (void)resetSessionWrapperOnlyForVideoLoader;
- (void)resetGameWebRequestStatus;
@property(readonly, copy) NSString *description;
- (void)processCookieWithResponse:(id)arg1;
- (void)processCookieOnMainThreadWithResponse:(id)arg1;
- (void)handleCookieForRedirectRequest:(id)arg1 fromResponse:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)onNetworkWeakChanged:(_Bool)arg1 currentRTT:(unsigned int)arg2;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (_Bool)isDnsError:(id)arg1;
- (_Bool)evaluateServerTrust:(struct __SecTrust *)arg1 forDomain:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)needUseSimpleDnsForHost:(id)arg1 andScheme:(id)arg2;
- (id)getSchemeTaskBySessionTask:(id)arg1;
- (void)stopTaskWithUrlSchemeTask:(id)arg1;
- (void)startTaskWithRequest:(id)arg1 andUrlSchemeTask:(id)arg2;
- (_Bool)rootSimpleDnsEnable;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

