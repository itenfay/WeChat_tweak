//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "IWAWebViewPluginProtocol-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, NSURL, UIColor, UIScreenEdgePanGestureRecognizer, UIView;

@protocol IWAWebViewPlugin_HTMLWeb <IWAWebViewPluginProtocol>
@property(readonly, nonatomic) NSMutableDictionary *enableScrollDic;
- (void)web_view_captureLongSnapshotWithCompletion:(void (^)(UIImage *, NSString *))arg1;
- (void)web_view_evaluateJavascript:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)web_view_goBack;
- (_Bool)web_view_canGoBack;
- (void)web_view_goToUrl:(NSURL *)arg1;
- (NSString *)web_view_getCurrentUrl;
- (void)web_view_handleInsertHTMLDone;
- (void)web_view_configViewFrame:(struct CGRect)arg1;
- (void)web_view_setBackgroundColor:(UIColor *)arg1;
- (void)web_view_setHtmlId:(unsigned int)arg1;
- (UIView *)web_view;
- (_Bool)web_view_isExist;
- (void)releaseHtmlVC;
- (void)setJavascriptForDisappear:(NSString *)arg1;
- (void)genHtmlVCWithExtInfo:(NSDictionary *)arg1;
- (void)insertHtmlVCIfNeed;
- (void)sendEvent:(NSString *)arg1 parma:(NSDictionary *)arg2;

@optional
- (UIScreenEdgePanGestureRecognizer *)web_backNavigationGesture;
@end

