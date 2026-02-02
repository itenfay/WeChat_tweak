//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ForwardMessageLogicController, NSMutableDictionary, NSString, SKStoreProductViewController, WCAdWebStoreAnimatedTransitioning, WCWeAppBizTempSessionHelper;

@interface WCAdDynamicCanvasLogic : NSObject
{
    NSMutableDictionary *_pageInfoCache;
    WCWeAppBizTempSessionHelper *_bizSessionHelper;
    ForwardMessageLogicController *_forwardLogic;
    SKStoreProductViewController *_productViewController;
    WCAdWebStoreAnimatedTransitioning *_webStoreAnimatedTransitioning;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdWebStoreAnimatedTransitioning *webStoreAnimatedTransitioning; // @synthesize webStoreAnimatedTransitioning=_webStoreAnimatedTransitioning;
@property(retain, nonatomic) SKStoreProductViewController *productViewController; // @synthesize productViewController=_productViewController;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) WCWeAppBizTempSessionHelper *bizSessionHelper; // @synthesize bizSessionHelper=_bizSessionHelper;
@property(retain, nonatomic) NSMutableDictionary *pageInfoCache; // @synthesize pageInfoCache=_pageInfoCache;
- (id)getOfflineResource:(id)arg1 tag:(id)arg2 url:(id)arg3;
- (void)bizTempSessionEndWithError:(id)arg1;
- (void)bizTempSessionEndWithSuccess:(id)arg1;
- (void)bizTempSessionJumpWithSuccess:(id)arg1;
- (void)stopBizTempSessionLoadingView;
- (void)startBizTempSessionLoadingView;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (id)getCurrentViewController;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)downgradeInPageSheetStyle:(id)arg1;
- (void)hideEmbeddedWebStore;
- (_Bool)showEmbeddedWebStore:(id)arg1 currentVC:(id)arg2 appUrl:(id)arg3 viewHeight:(double)arg4 skAdItem:(id)arg5;
- (id)genUploadTask:(id)arg1 shareTitle:(id)arg2 shareDesc:(id)arg3 shareThumbUrl:(id)arg4 shareWebUrl:(id)arg5;
- (void)shareToTimeline:(id)arg1 shareTitle:(id)arg2 shareDesc:(id)arg3 shareThumbUrl:(id)arg4 shareWebUrl:(id)arg5;
- (void)shareToFriend:(id)arg1 shareTitle:(id)arg2 shareDesc:(id)arg3 shareThumbUrl:(id)arg4 shareWebUrl:(id)arg5;
- (void)jumpToWeAppBizTempSessionWithInfo:(id)arg1;
- (void)removePageInfoFromCache:(id)arg1;
- (void)setPageInfoToCache:(id)arg1 cacheKey:(id)arg2;
- (id)getPageInfoFromCache:(id)arg1;
- (void)initData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

