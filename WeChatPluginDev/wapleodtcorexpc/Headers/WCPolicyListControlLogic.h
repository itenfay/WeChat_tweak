//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMWebViewController, NSString;

@interface WCPolicyListControlLogic : NSObject
{
    _Bool _hideCloseBtn;
    _Bool _skipOpIfDisagree;
    _Bool _endWithAnyResponse;
    _Bool _autoCloseWebView;
    NSString *_policylist_url;
    NSString *_policylist_list;
    NSString *_policylist_ticket;
    NSString *_doublecheck_content;
    NSString *_doublecheck_cancel;
    NSString *_doublecheck_ok;
    NSString *_userName;
    CDUnknownBlockType _endBlock;
    MMWebViewController *_curWebViewController;
}

- (void).cxx_destruct;
@property(nonatomic) MMWebViewController *curWebViewController; // @synthesize curWebViewController=_curWebViewController;
@property(copy, nonatomic) CDUnknownBlockType endBlock; // @synthesize endBlock=_endBlock;
@property(nonatomic) _Bool autoCloseWebView; // @synthesize autoCloseWebView=_autoCloseWebView;
@property(nonatomic) _Bool endWithAnyResponse; // @synthesize endWithAnyResponse=_endWithAnyResponse;
@property(nonatomic) _Bool skipOpIfDisagree; // @synthesize skipOpIfDisagree=_skipOpIfDisagree;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) _Bool hideCloseBtn; // @synthesize hideCloseBtn=_hideCloseBtn;
@property(retain, nonatomic) NSString *doublecheck_ok; // @synthesize doublecheck_ok=_doublecheck_ok;
@property(retain, nonatomic) NSString *doublecheck_cancel; // @synthesize doublecheck_cancel=_doublecheck_cancel;
@property(retain, nonatomic) NSString *doublecheck_content; // @synthesize doublecheck_content=_doublecheck_content;
@property(retain, nonatomic) NSString *policylist_ticket; // @synthesize policylist_ticket=_policylist_ticket;
@property(retain, nonatomic) NSString *policylist_list; // @synthesize policylist_list=_policylist_list;
@property(retain, nonatomic) NSString *policylist_url; // @synthesize policylist_url=_policylist_url;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (void)agreementOpWithDic:(id)arg1;
- (id)accessStrFromDic:(id)arg1 forKey:(id)arg2;
- (void)onWebViewClickClose;
- (void)onWebViewDisagree;
- (void)endWithIsAgreed:(_Bool)arg1;
- (void)stopLoading;
- (void)startLoading;
- (id)topViewController;
- (void)showPolicyListUrl:(id)arg1 fromViewController:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

