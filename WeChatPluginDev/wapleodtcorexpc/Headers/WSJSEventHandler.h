//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FTSWebSearchMgr, MMLoadingView, MMUIViewController, NSDictionary, NSMutableArray, NSString, WCCanvasDynamicDataLoader;
@protocol WSJSEventHandleDelegate;

@interface WSJSEventHandler : NSObject
{
    MMUIViewController *_baseViewController;
    id <WSJSEventHandleDelegate> _delegate;
    FTSWebSearchMgr *_webSearchMgr;
    MMLoadingView *_loadingView;
    WCCanvasDynamicDataLoader *_dataLoader;
    NSDictionary *_userInfo;
    NSMutableArray *_preloadVids;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *preloadVids; // @synthesize preloadVids=_preloadVids;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) FTSWebSearchMgr *webSearchMgr; // @synthesize webSearchMgr=_webSearchMgr;
@property(nonatomic) __weak id <WSJSEventHandleDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MMUIViewController *baseViewController; // @synthesize baseViewController=_baseViewController;
- (void)onDeleteData;
- (void)onUxCanvasDynamicXMLReturn:(id)arg1 error:(int)arg2 forCanvasId:(id)arg3;
- (void)onLaunchApplication:(id)arg1;
- (void)onAppendSearchTagQuery:(id)arg1;
- (void)onSetSearchTagResult:(id)arg1;
- (void)onPreloadVideo:(id)arg1;
- (void)onOpenWowColikeSetting:(id)arg1;
- (void)onWebViewRenderFinish:(id)arg1;
- (void)onGoToRecVideoList:(id)arg1 webview:(id)arg2;
- (void)onReportWeAppSearchRealTime:(id)arg1;
- (id)onGetBaseViewController;
- (void)onSwitchSearchContext:(id)arg1;
- (void)onOpenEmotionPage:(id)arg1;
- (void)onOpenWeAppPage:(id)arg1 privateParams:(id)arg2;
- (void)onOpenWeAppPage:(id)arg1;
- (void)onOpenTransparentWeApp:(id)arg1;
- (void)onRequestLocalSuggestion:(id)arg1;
- (void)onClickRecmdWord:(id)arg1;
- (void)onOpenContact:(id)arg1;
- (void)onOpenSnsDetail:(id)arg1;
- (void)onOpenMsgSession:(id)arg1;
- (void)onOpenBrandContact:(id)arg1 withParams:(id)arg2;
- (void)internalOnLaunchPage:(id)arg1 withParams:(id)arg2;
- (void)onLaunchPage:(id)arg1 withParams:(id)arg2;
- (void)onMakePhoneCall:(id)arg1;
- (void)onLaunchDetailPage:(id)arg1;
- (void)onPreSearch:(id)arg1 bizType:(unsigned long long)arg2;
- (_Bool)viewControllerHasNavController;
- (void)onWebViewTerminal:(id)arg1;
- (void)onJsbridgeReady:(id)arg1;
- (void)didFinishLoadWebView:(id)arg1;
- (void)onSearchInputChanged:(id)arg1;
- (void)onFailReceiveJson;
- (void)onUpdateReddotTimeStamps:(id)arg1;
- (void)onOpenSearchAssistance:(id)arg1;
- (void)onImagePreview:(id)arg1;
- (void)hideKeyboard;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

