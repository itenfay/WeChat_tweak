//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMWebViewController, NSCache, NSString, UIView, WKWebView;
@protocol YYWebViewInterface;

@protocol WebTransPageLogicDelegate <NSObject>
- (void)onTranslateNaviTitleStateChange:(_Bool)arg1;
- (void)transReportWithAction:(long long)arg1 andScene:(long long)arg2 andUrl:(NSString *)arg3;
- (_Bool)getHiddenRightButtonFlag;
- (void)storeCache:(NSString *)arg1 withKey:(NSString *)arg2;
- (NSCache *)getCache;
- (UIView *)getOrgTitleView;
- (long long)getHelpButtonAvailableStatus;
- (void)setStatusFromPageLogic:(long long)arg1;
- (long long)getStatus;
- (WKWebView<YYWebViewInterface> *)getWKWebView;
- (MMWebViewController *)getWebViewController;

@optional
- (void)onTranslateRevertFinish:(_Bool)arg1;
- (void)onTranslateFinish:(_Bool)arg1;
@end

