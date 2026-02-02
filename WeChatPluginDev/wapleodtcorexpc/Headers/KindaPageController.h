//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class KindaLiteAppUIPage, KindaTinyAppUIPage, NSString;

@interface KindaPageController : NSObject
{
    KindaTinyAppUIPage *_tinyAppPage;
    KindaLiteAppUIPage *_liteAppPage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KindaLiteAppUIPage *liteAppPage; // @synthesize liteAppPage=_liteAppPage;
@property(retain, nonatomic) KindaTinyAppUIPage *tinyAppPage; // @synthesize tinyAppPage=_tinyAppPage;
- (void)liteAppDidClose:(id)arg1;
- (void)tinyAppDidClose:(id)arg1;
- (void)onCloseUI:(id)arg1;
- (void)openLiteApp:(id)arg1 extraData:(id)arg2;
- (void)startModalPageUI:(id)arg1 animated:(_Bool)arg2 extraData:(id)arg3;
- (void)popAndPushVC:(id)arg1 animated:(_Bool)arg2;
- (void)popAndPushWebView:(id)arg1 animated:(_Bool)arg2 extraData:(id)arg3;
- (void)popAndStartPageUI:(id)arg1 animated:(_Bool)arg2 extraData:(id)arg3;
- (void)startPageUI:(id)arg1 animated:(_Bool)arg2 extraData:(id)arg3;
- (void)presentVC:(id)arg1 animated:(_Bool)arg2;
- (void)pushVC:(id)arg1 animated:(_Bool)arg2;
- (void)openTinyApp:(id)arg1 extraData:(id)arg2;
- (void)presentWebView:(id)arg1 extraData:(id)arg2 animated:(_Bool)arg3;
- (void)pushWebView:(id)arg1 extraData:(id)arg2 animated:(_Bool)arg3;
- (void)webViewDidReturn:(id)arg1;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

