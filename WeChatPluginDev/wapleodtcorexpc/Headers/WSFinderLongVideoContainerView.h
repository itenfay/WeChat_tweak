//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILongPressGestureRecognizer, UIViewController, WSLocalTemplateConfig;

@interface WSFinderLongVideoContainerView
{
    _Bool _isCurWSWebView;
    _Bool _needCreateContextId;
    _Bool _hasAddView;
    _Bool _selectedBefore;
    _Bool _appearBySelectTab;
    UIViewController *_vc;
    WSLocalTemplateConfig *_config;
    NSString *_curContextId;
    unsigned long long _enterTime;
    unsigned long long _appearType;
    UILongPressGestureRecognizer *_tabLongPressGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILongPressGestureRecognizer *tabLongPressGestureRecognizer; // @synthesize tabLongPressGestureRecognizer=_tabLongPressGestureRecognizer;
@property(nonatomic) unsigned long long appearType; // @synthesize appearType=_appearType;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) _Bool appearBySelectTab; // @synthesize appearBySelectTab=_appearBySelectTab;
@property(nonatomic) _Bool selectedBefore; // @synthesize selectedBefore=_selectedBefore;
@property(nonatomic) _Bool hasAddView; // @synthesize hasAddView=_hasAddView;
@property(retain, nonatomic) NSString *curContextId; // @synthesize curContextId=_curContextId;
@property(nonatomic) _Bool needCreateContextId; // @synthesize needCreateContextId=_needCreateContextId;
@property(nonatomic) _Bool isCurWSWebView; // @synthesize isCurWSWebView=_isCurWSWebView;
@property(retain, nonatomic) WSLocalTemplateConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) UIViewController *vc; // @synthesize vc=_vc;
- (void)onTabSelectStateChange:(_Bool)arg1 enterType:(long long)arg2;
- (void)onTabSelectStateChangeWithWSExit;
- (void)reportVCUnexpose:(_Bool)arg1 isExit:(_Bool)arg2;
- (void)reportVCExpose:(unsigned long long)arg1;
- (id)enterQueryDict;
- (void)reportTabUnExpose:(_Bool)arg1 isExit:(_Bool)arg2;
- (void)reportTabExpose:(unsigned long long)arg1;
- (void)reportEventCode:(long long)arg1;
- (void)reportEnter:(unsigned long long)arg1;
- (int)commentScene;
- (void)updateContextId;
- (void)checkAddView;
- (void)onContainerDidDisappear;
- (void)onContainerAppear;
- (void)onQuitWSWebView:(_Bool)arg1;
- (void)onDidEnterWSWebView:(_Bool)arg1;
- (void)onEnterWSWebView:(_Bool)arg1;
- (void)onSwitchToThisView:(id)arg1;
- (void)onSwitchToOtherView:(id)arg1;
- (void)receiveWillEnterForegroundNotification:(id)arg1;
- (void)receiveDidEnterBackgroundNotification:(id)arg1;
- (void)initViewIfNeed;
- (void)_clearContent;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;

@end

