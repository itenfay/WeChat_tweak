//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiteAppView, MMTimer, NSDictionary, NSString, OpenLiteAppInfo;

@interface WSFinderMegaVideoContainerView
{
    _Bool _needCreateContextId;
    _Bool _appearBySelectTab;
    _Bool _isCurWSWebView;
    OpenLiteAppInfo *_liteAppInfo;
    MMLiteAppView *_liteAppView;
    unsigned long long _startCount;
    MMTimer *_cleanLiteAppTimer;
    unsigned long long _enterTime;
    NSDictionary *_createConfig;
    NSString *_curContextId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCurWSWebView; // @synthesize isCurWSWebView=_isCurWSWebView;
@property(retain, nonatomic) NSString *curContextId; // @synthesize curContextId=_curContextId;
@property(copy, nonatomic) NSDictionary *createConfig; // @synthesize createConfig=_createConfig;
@property(nonatomic) _Bool appearBySelectTab; // @synthesize appearBySelectTab=_appearBySelectTab;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) _Bool needCreateContextId; // @synthesize needCreateContextId=_needCreateContextId;
@property(retain, nonatomic) MMTimer *cleanLiteAppTimer; // @synthesize cleanLiteAppTimer=_cleanLiteAppTimer;
@property(nonatomic) unsigned long long startCount; // @synthesize startCount=_startCount;
@property(retain, nonatomic) MMLiteAppView *liteAppView; // @synthesize liteAppView=_liteAppView;
@property(retain, nonatomic) OpenLiteAppInfo *liteAppInfo; // @synthesize liteAppInfo=_liteAppInfo;
- (id)enterQueryDict;
- (void)reportUnExpose:(_Bool)arg1;
- (void)reportExpose;
- (void)checkShouldStartLiteApp;
- (void)reportEventCode:(long long)arg1;
- (void)reportEnter;
- (int)commentScene;
- (void)dealloc;
- (void)updateContextId;
- (void)onContainerDisAppear;
- (void)onContainerAppear;
- (void)onSwitchToThisView:(id)arg1;
- (void)onSwitchToOtherView:(id)arg1;
- (void)onEnterWSWebView:(_Bool)arg1;
- (void)_cleanLiteApp;
- (void)onQuitWSWebView:(_Bool)arg1;
- (void)initViewIfNeed;
- (void)preloadPageAction;
- (void)createPreloadStore;
- (void)preDownloadLiteApp;
- (id)initWithConfig:(id)arg1;

@end

