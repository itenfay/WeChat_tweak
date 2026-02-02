//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, NSURLRequest, UIScrollView;
@protocol YYWebViewDelegate;

@interface WKWebSearchView
{
    _Bool _forceDarkModeMark;
    unsigned int _enterReusablePoolTime;
    unsigned long long _bizType;
    NSString *_keyword;
    NSMutableArray *_keywordStack;
    unsigned long long _context;
    NSString *_subSessionId;
    unsigned long long _evaluateJSTimes;
    NSString *_lastEvaluateJSString;
    NSString *_loadURLString;
    unsigned long long _initTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int enterReusablePoolTime; // @synthesize enterReusablePoolTime=_enterReusablePoolTime;
@property(nonatomic) unsigned long long initTime; // @synthesize initTime=_initTime;
@property(copy, nonatomic) NSString *loadURLString; // @synthesize loadURLString=_loadURLString;
@property(copy, nonatomic) NSString *lastEvaluateJSString; // @synthesize lastEvaluateJSString=_lastEvaluateJSString;
@property(nonatomic) unsigned long long evaluateJSTimes; // @synthesize evaluateJSTimes=_evaluateJSTimes;
@property(nonatomic) _Bool forceDarkModeMark; // @synthesize forceDarkModeMark=_forceDarkModeMark;
@property(retain, nonatomic) NSString *subSessionId; // @synthesize subSessionId=_subSessionId;
@property(nonatomic) unsigned long long context; // @synthesize context=_context;
@property(retain, nonatomic) NSMutableArray *keywordStack; // @synthesize keywordStack=_keywordStack;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) unsigned long long bizType; // @synthesize bizType=_bizType;
- (id)uniqueID;
- (unsigned long long)stayInReuablePoolTime;
- (unsigned long long)survivalTime;
- (void)webviewWillLeavePool;
- (void)webviewWillEnterPool;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)configurationWillCreate:(id)arg1;
- (void)LoadRequest:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(nonatomic) _Bool allowsBackForwardNavigationGestures;
@property(readonly, nonatomic, getter=canGoBack) _Bool canGoBack;
@property(readonly, nonatomic, getter=canGoForward) _Bool canGoForward;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool disablePreviewElement;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <YYWebViewDelegate> wvDelegate;

@end

