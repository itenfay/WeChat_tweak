//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, MMUIViewController, NSDictionary, NSString, UIView, WKWebView;
@protocol YYWebViewInterface;

@protocol FTSJSEventDelegate <NSObject>

@optional
- (void)onAppendSearchTagQuery:(NSDictionary *)arg1;
- (void)onSetSearchTagResult:(NSDictionary *)arg1;
- (void)onLaunchApplication:(NSDictionary *)arg1;
- (void)onPreloadVideo:(NSDictionary *)arg1;
- (void)onOpenWowColikeSetting:(NSDictionary *)arg1;
- (void)onWebRecommendInfoUpdate:(NSDictionary *)arg1;
- (void)onGotoEmoticonPad:(NSDictionary *)arg1;
- (void)onQuerySimilarPicSearch:(NSDictionary *)arg1;
- (void)onOpenSearchAssistance:(NSDictionary *)arg1;
- (void)onWebViewRenderFinish:(NSDictionary *)arg1;
- (void)onUpdateReddotTimeStamps:(NSDictionary *)arg1;
- (void)onImagePreview:(NSDictionary *)arg1;
- (void)onGoToRecVideoList:(NSDictionary *)arg1 webview:(WKWebView *)arg2;
- (void)onOperateVideoPlayerWithParams:(NSDictionary *)arg1;
- (void)onUpdateVideoPlayerWithParams:(NSDictionary *)arg1;
- (void)onRemoveVideoPlayerWithParams:(NSDictionary *)arg1;
- (NSString *)onInsertVideoPlayerWithParams:(NSDictionary *)arg1;
- (MMUIViewController *)onGetBaseViewController;
- (void)onSwitchSearchContext:(NSDictionary *)arg1;
- (void)onOpenEmotionPage:(NSDictionary *)arg1;
- (void)onRequestLocalSuggestion:(NSDictionary *)arg1;
- (void)onSearchInputChanged:(NSDictionary *)arg1;
- (void)onClickRecmdWord:(NSDictionary *)arg1;
- (NSDictionary *)onGetWidgetCaptureImgUrl:(NSDictionary *)arg1;
- (void)onReportWeAppSearchRealTime:(NSDictionary *)arg1;
- (void)onOpenTransparentWeApp:(NSDictionary *)arg1;
- (void)onOpenWeAppPage:(NSDictionary *)arg1;
- (void)onOpenMsgSession:(CContact *)arg1;
- (void)onMakePhoneCall:(NSDictionary *)arg1;
- (_Bool)viewControllerHasNavController;
- (void)onWebViewTerminal:(UIView<YYWebViewInterface> *)arg1;
- (void)onJsbridgeReady:(id <YYWebViewInterface>)arg1;
- (void)didFinishLoadWebView:(UIView<YYWebViewInterface> *)arg1;
- (void)onOpenSnsDetail:(NSDictionary *)arg1;
- (void)onOpenContactError:(NSString *)arg1 withMessage:(NSString *)arg2;
- (void)onOpenContact:(CContact *)arg1;
- (void)onBeginOnlineSearchContact:(NSString *)arg1;
- (void)onOpenBrandContact:(CContact *)arg1 withParams:(NSDictionary *)arg2;
- (void)onLaunchPage:(NSString *)arg1 withParams:(NSDictionary *)arg2;
- (void)onLaunchDetailPage:(NSDictionary *)arg1;
- (void)onPreSearch:(NSString *)arg1 bizType:(unsigned long long)arg2;
- (void)onFailReceiveJson;
@end

