//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSMutableSet, WKWebView;

@interface WCWebEventsStore
{
    WKWebView *_webView;
    NSMutableArray *_curNavigationEventsQueue;
    NSMutableSet *_curEventsStore;
    NSMutableArray *_curEventActions;
    NSMutableDictionary *_reqToFullUrlDic;
}

+ (id)eventSetDescription:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *reqToFullUrlDic; // @synthesize reqToFullUrlDic=_reqToFullUrlDic;
@property(retain, nonatomic) NSMutableArray *curEventActions; // @synthesize curEventActions=_curEventActions;
@property(retain, nonatomic) NSMutableSet *curEventsStore; // @synthesize curEventsStore=_curEventsStore;
@property(retain, nonatomic) NSMutableArray *curNavigationEventsQueue; // @synthesize curNavigationEventsQueue=_curNavigationEventsQueue;
@property(nonatomic) __weak WKWebView *webView; // @synthesize webView=_webView;
- (void)appendArrWebEventAction:(id)arg1;
- (id)webviewEventsInStore;
- (void)resetWebEventStore;
- (void)appendWebEvent:(id)arg1;
- (void)checkActions;
- (void)__dispatchWebEvent:(id)arg1;
- (id)init;

@end

