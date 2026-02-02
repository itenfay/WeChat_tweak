//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMWebViewPlugin_WebNavigationPerf
{
    unsigned long long _viewControllerCreateTimeInMs;
    unsigned long long _viewControllerCreateEndTimeInMs;
    unsigned long long _webviewCreateTimeInMs;
    unsigned long long _webviewCreateEndTimeInMs;
    unsigned long long _lastGetA8KeyTimeInMs;
    unsigned long long _lastGetA8KeyEndTimeInMs;
    unsigned long long _firstNavigationRedirectCount;
    NSString *_firstCommitNavigationURLString;
    NSString *_firstCommitNavigationPerfReportString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *firstCommitNavigationPerfReportString; // @synthesize firstCommitNavigationPerfReportString=_firstCommitNavigationPerfReportString;
@property(retain, nonatomic) NSString *firstCommitNavigationURLString; // @synthesize firstCommitNavigationURLString=_firstCommitNavigationURLString;
@property(nonatomic) unsigned long long firstNavigationRedirectCount; // @synthesize firstNavigationRedirectCount=_firstNavigationRedirectCount;
@property(nonatomic) unsigned long long lastGetA8KeyEndTimeInMs; // @synthesize lastGetA8KeyEndTimeInMs=_lastGetA8KeyEndTimeInMs;
@property(nonatomic) unsigned long long lastGetA8KeyTimeInMs; // @synthesize lastGetA8KeyTimeInMs=_lastGetA8KeyTimeInMs;
@property(nonatomic) unsigned long long webviewCreateEndTimeInMs; // @synthesize webviewCreateEndTimeInMs=_webviewCreateEndTimeInMs;
@property(nonatomic) unsigned long long webviewCreateTimeInMs; // @synthesize webviewCreateTimeInMs=_webviewCreateTimeInMs;
@property(nonatomic) unsigned long long viewControllerCreateEndTimeInMs; // @synthesize viewControllerCreateEndTimeInMs=_viewControllerCreateEndTimeInMs;
@property(nonatomic) unsigned long long viewControllerCreateTimeInMs; // @synthesize viewControllerCreateTimeInMs=_viewControllerCreateTimeInMs;
- (unsigned long long)__calDurantionForEventTimeInMs:(unsigned long long)arg1;
- (void)tryInjectNavigationOptimazationToDebugConsole;
- (void)common_navigationFinished:(id)arg1;
- (void)log18497FirstNavigationPerformanceStat;
- (void)onWebViewPageNavigationPerfReport:(id)arg1;
- (void)firstNavigationPerf_commitNavigation:(id)arg1;
- (void)firstNavigationPerf_navigationRecieveRedirect:(id)arg1;
- (void)firstNavigationPerf_onGetA8KeyEnd:(id)arg1;
- (void)firstNavigationPerf_onGetA8KeyStart:(id)arg1;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)init;

@end

